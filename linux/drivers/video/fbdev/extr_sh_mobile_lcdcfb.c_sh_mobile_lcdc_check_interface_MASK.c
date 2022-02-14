
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {int ldmt1r_value; TYPE_1__* cfg; } ;
struct TYPE_2__ {int interface_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sh_mobile_lcdc_chan*) ;

__attribute__((used)) static int FUNC_1(struct sh_mobile_lcdc_chan *VAR_2)
{
 int VAR_3 = VAR_2->cfg->interface_type;

 switch (VAR_3) {
 case 140:
 case 139:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
  break;
 default:
  return -VAR_0;
 }


 if (FUNC_0(VAR_2)) {
  if (!(VAR_3 & VAR_1))
   return -VAR_0;

  VAR_3 &= ~VAR_1;
 }

 VAR_2->ldmt1r_value = VAR_3;
 return 0;
}
