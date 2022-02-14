
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i810fb_par {TYPE_1__* chan; } ;
struct TYPE_2__ {int ddc_base; struct i810fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(struct i810fb_par *VAR_3)
{
        VAR_3->chan[0].par = VAR_3;
 VAR_3->chan[1].par = VAR_3;
 VAR_3->chan[2].par = VAR_3;

 VAR_3->chan[0].ddc_base = VAR_0;
 FUNC_0(&VAR_3->chan[0], "I810-DDC");
 VAR_3->chan[1].ddc_base = VAR_1;
 FUNC_0(&VAR_3->chan[1], "I810-I2C");
 VAR_3->chan[2].ddc_base = VAR_2;
 FUNC_0(&VAR_3->chan[2], "I810-GPIOC");
}
