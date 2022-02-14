
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_retime_packed {int delay_1; int delay_0; int retime; int invertclk; int double_edge; int clknotdata; int clk1notclk0; } ;
struct TYPE_2__ {struct st_retime_packed rt_p; } ;
struct st_pio_control {TYPE_1__ rt; } ;
struct st_pinctrl {struct st_pctl_data* data; } ;
struct st_pctl_data {int dummy; } ;


 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (unsigned long) ;
 unsigned int FUNC_5 (unsigned long) ;
 unsigned int FUNC_6 (int ,struct st_pctl_data const*,unsigned long) ;
 int FUNC_7 (int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_8(struct st_pinctrl *VAR_0,
 struct st_pio_control *VAR_1, unsigned long VAR_2, int VAR_3)
{
 const struct st_pctl_data *VAR_4 = VAR_0->data;
 struct st_retime_packed *VAR_5 = &VAR_1->rt.rt_p;
 unsigned int VAR_6;

 FUNC_7(VAR_5->clk1notclk0,
    FUNC_1(VAR_2), VAR_3);

 FUNC_7(VAR_5->clknotdata,
    FUNC_2(VAR_2), VAR_3);

 FUNC_7(VAR_5->double_edge,
    FUNC_4(VAR_2), VAR_3);

 FUNC_7(VAR_5->invertclk,
    FUNC_5(VAR_2), VAR_3);

 FUNC_7(VAR_5->retime,
    FUNC_0(VAR_2), VAR_3);

 VAR_6 = FUNC_6(FUNC_3(VAR_2),
     VAR_4, VAR_2);

 FUNC_7(VAR_5->delay_0, VAR_6 & 0x1, VAR_3);

 FUNC_7(VAR_5->delay_1, VAR_6 & 0x2, VAR_3);

}
