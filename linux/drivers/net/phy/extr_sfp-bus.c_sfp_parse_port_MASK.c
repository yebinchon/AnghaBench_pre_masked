
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int connector; int e1000_base_t; } ;
struct sfp_eeprom_id {TYPE_1__ base; } ;
struct sfp_bus {int sfp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (unsigned long*,int ) ;

int FUNC_2(struct sfp_bus *VAR_4, const struct sfp_eeprom_id *VAR_5,
     unsigned long *VAR_6)
{
 int VAR_7;


 switch (VAR_5->base.connector) {
 case 130:
 case 141:
 case 139:
 case 136:
 case 135:
 case 132:
  VAR_7 = 144;
  break;

 case 131:
  VAR_7 = 143;
  break;

 case 142:
  VAR_7 = VAR_1;
  break;

 case 128:
  if (VAR_5->base.e1000_base_t) {
   VAR_7 = 143;
   break;
  }

 case 129:
 case 138:
 case 137:
 case 140:
 case 133:
 case 134:
  VAR_7 = VAR_2;
  break;
 default:
  FUNC_0(VAR_4->sfp_dev, "SFP: unknown connector id 0x%02x\n",
    VAR_5->base.connector);
  VAR_7 = VAR_2;
  break;
 }

 if (VAR_6) {
  switch (VAR_7) {
  case 144:
   FUNC_1(VAR_6, VAR_0);
   break;

  case 143:
   FUNC_1(VAR_6, VAR_3);
   break;
  }
 }

 return VAR_7;
}
