
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_core {struct clk* core1_clk; struct clk* core0_clk; TYPE_1__* res; struct device* dev; struct clk** clks; } ;
struct freq_tbl {unsigned long freq; scalar_t__ load; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {unsigned int freq_tbl_size; scalar_t__ max_load; struct freq_tbl* freq_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk*,unsigned long) ;
 int FUNC_1 (struct device*,char*,unsigned long,int) ;
 int FUNC_2 (struct device*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct venus_core*,int ) ;

int FUNC_4(struct venus_core *VAR_2)
{
 const struct freq_tbl *VAR_3 = VAR_2->res->freq_tbl;
 unsigned int VAR_4 = VAR_2->res->freq_tbl_size;
 unsigned long VAR_5 = VAR_3[0].freq;
 struct clk *VAR_6 = VAR_2->clks[0];
 struct device *VAR_7 = VAR_2->dev;
 u32 VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_2, VAR_1) +
        FUNC_3(VAR_2, VAR_0);

 if (VAR_8 > VAR_2->res->max_load)
  FUNC_2(VAR_7, "HW is overloaded, needed: %d max: %d\n",
    VAR_8, VAR_2->res->max_load);

 if (!VAR_8 && VAR_4 > 1) {
  VAR_5 = VAR_3[VAR_4 - 1].freq;
  goto set_freq;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_8 > VAR_3[VAR_9].load)
   break;
  VAR_5 = VAR_3[VAR_9].freq;
 }

set_freq:

 VAR_10 = FUNC_0(VAR_6, VAR_5);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_0(VAR_2->core0_clk, VAR_5);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_0(VAR_2->core1_clk, VAR_5);
 if (VAR_10)
  goto err;

 return 0;

err:
 FUNC_1(VAR_7, "failed to set clock rate %lu (%d)\n", VAR_5, VAR_10);
 return VAR_10;
}
