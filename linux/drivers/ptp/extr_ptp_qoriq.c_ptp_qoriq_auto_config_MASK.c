
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long u32 ;
struct TYPE_2__ {int max_adj; } ;
struct ptp_qoriq {unsigned long tclk_period; int tmr_add; TYPE_1__ caps; scalar_t__ tmr_fiper2; scalar_t__ tmr_fiper1; int tmr_prsc; int cksel; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clk*) ;
 unsigned long FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int,unsigned long,unsigned long*) ;
 struct clk* FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (char*) ;
 unsigned long FUNC_7 (unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ptp_qoriq *VAR_5,
     struct device_node *VAR_6)
{
 struct clk *VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;

 VAR_5->cksel = VAR_0;

 VAR_7 = FUNC_5(VAR_6, 0);
 if (!FUNC_0(VAR_7)) {
  VAR_12 = FUNC_1(VAR_7);
  FUNC_2(VAR_7);
 }

 if (VAR_12 <= 100000000UL) {
  FUNC_6("error reference clock value, or lower than 100MHz\n");
  return -VAR_4;
 }

 VAR_10 = FUNC_7(VAR_12);
 if (!VAR_10)
  return -VAR_4;

 VAR_5->tclk_period = 1000000000UL / VAR_10;
 VAR_5->tmr_prsc = VAR_3;





 VAR_8 = ((u64)1 << 32) * VAR_10;
 VAR_8 = FUNC_4(VAR_8, VAR_12, &VAR_11);
 if (VAR_11)
  VAR_8++;

 VAR_5->tmr_add = VAR_8;
 VAR_5->tmr_fiper1 = VAR_1 - VAR_5->tclk_period;
 VAR_5->tmr_fiper2 = VAR_2 - VAR_5->tclk_period;




 VAR_9 = 1000000000ULL * (VAR_12 - VAR_10);
 VAR_9 = FUNC_3(VAR_9, VAR_10) - 1;
 VAR_5->caps.max_adj = VAR_9;

 return 0;
}
