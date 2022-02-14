
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct riva_par {TYPE_1__* chan; } ;
struct TYPE_2__ {int ddc_base; struct riva_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;

void FUNC_1(struct riva_par *VAR_1)
{
 VAR_1->chan[0].par = VAR_1;
 VAR_1->chan[1].par = VAR_1;
 VAR_1->chan[2].par = VAR_1;

 VAR_1->chan[0].ddc_base = 0x36;
 VAR_1->chan[1].ddc_base = 0x3e;
 VAR_1->chan[2].ddc_base = 0x50;
 FUNC_0(&VAR_1->chan[0], "BUS1", VAR_0);
 FUNC_0(&VAR_1->chan[1], "BUS2", 0);
 FUNC_0(&VAR_1->chan[2], "BUS3", 0);
}
