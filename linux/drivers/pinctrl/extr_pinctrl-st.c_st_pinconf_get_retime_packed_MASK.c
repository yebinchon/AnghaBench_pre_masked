
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_retime_packed {int delay_1; int delay_0; int invertclk; int double_edge; int clknotdata; int clk1notclk0; int retime; } ;
struct TYPE_2__ {struct st_retime_packed rt_p; } ;
struct st_pio_control {TYPE_1__ rt; } ;
struct st_pinctrl {struct st_pctl_data* data; } ;
struct st_pctl_data {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int ,unsigned int*) ;
 unsigned int FUNC_9 (unsigned int,struct st_pctl_data const*,int) ;

__attribute__((used)) static int FUNC_10(struct st_pinctrl *VAR_0,
 struct st_pio_control *VAR_1, int VAR_2, unsigned long *VAR_3)
{
 const struct st_pctl_data *VAR_4 = VAR_0->data;
 struct st_retime_packed *VAR_5 = &VAR_1->rt.rt_p;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = FUNC_7(*VAR_3);

 if (!FUNC_8(VAR_5->retime, &VAR_10) && (VAR_10 & FUNC_0(VAR_2)))
  FUNC_1(*VAR_3);

 if (!FUNC_8(VAR_5->clk1notclk0, &VAR_10) && (VAR_10 & FUNC_0(VAR_2)))
  FUNC_2(*VAR_3, 1);

 if (!FUNC_8(VAR_5->clknotdata, &VAR_10) && (VAR_10 & FUNC_0(VAR_2)))
  FUNC_3(*VAR_3);

 if (!FUNC_8(VAR_5->double_edge, &VAR_10) && (VAR_10 & FUNC_0(VAR_2)))
  FUNC_5(*VAR_3);

 if (!FUNC_8(VAR_5->invertclk, &VAR_10) && (VAR_10 & FUNC_0(VAR_2)))
  FUNC_6(*VAR_3);

 FUNC_8(VAR_5->delay_0, &VAR_8);
 FUNC_8(VAR_5->delay_1, &VAR_9);
 VAR_6 = (((VAR_9 & FUNC_0(VAR_2)) ? 1 : 0) << 1) |
   (((VAR_8 & FUNC_0(VAR_2)) ? 1 : 0));
 VAR_7 = FUNC_9(VAR_6, VAR_4, VAR_11);
 FUNC_4(*VAR_3, VAR_7);

 return 0;
}
