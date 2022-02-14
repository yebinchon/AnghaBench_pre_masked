
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int bar; scalar_t__ method; int manuf; int dev_id; int sec_prot; scalar_t__ wide; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct asd_ha_struct*,int) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (struct asd_ha_struct*,int,int) ;

int FUNC_4(struct asd_ha_struct *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;


 VAR_11 = VAR_6->hw_prof.flash.bar;


 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12) {
  FUNC_0("couldn't reset flash. err=%d\n", VAR_12);
  return VAR_12;
 }

 VAR_6->hw_prof.flash.method = VAR_5;
 VAR_6->hw_prof.flash.manuf = VAR_2;
 VAR_6->hw_prof.flash.dev_id = VAR_1;





 VAR_10 = VAR_6->hw_prof.flash.wide ? 2 : 1;
 FUNC_3(VAR_6, VAR_11 + 0xAAA, 0xAA);
 FUNC_3(VAR_6, VAR_11 + 0x555, 0x55);
 FUNC_3(VAR_6, VAR_11 + 0xAAA, 0x90);
 VAR_7 = FUNC_1(VAR_6, VAR_11);
 VAR_8 = FUNC_1(VAR_6, VAR_11 + VAR_10);
 VAR_9 = FUNC_1(VAR_6, VAR_11 + VAR_10 + VAR_10);

 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12) {
  FUNC_0("couldn't reset flash. err=%d\n", VAR_12);
  return VAR_12;
 }
 FUNC_0("Flash MethodA manuf_id(0x%x) dev_id(0x%x) "
  "sec_prot(0x%x)\n", VAR_7, VAR_8, VAR_9);
 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12 != 0)
  return VAR_12;

 switch (VAR_7) {
 case 132:
  switch (VAR_9) {
  case 141:
  case 142:
  case 144:
   VAR_6->hw_prof.flash.method = VAR_3;
   break;
  default:
   break;
  }
  break;
 case 128:
  switch (VAR_9) {
  case 133:
  case 134:
   VAR_6->hw_prof.flash.method = VAR_3;
   break;
  default:
   break;
  }
  break;
 case 131:
  switch (VAR_9) {
  case 137:
  case 139:
   VAR_6->hw_prof.flash.method = VAR_3;
   break;
  }
  break;
 case 129:
  switch (VAR_9) {
  case 136:
   VAR_6->hw_prof.flash.method = VAR_3;
   break;
  }
  break;
 }

 if (VAR_6->hw_prof.flash.method == VAR_5) {
  VAR_12 = FUNC_2(VAR_6);
  if (VAR_12) {
   FUNC_0("couldn't reset flash. err=%d\n", VAR_12);
   return VAR_12;
  }


  FUNC_3(VAR_6, (VAR_11 + 0x555), 0xAA);
  FUNC_3(VAR_6, (VAR_11 + 0x2AA), 0x55);
  FUNC_3(VAR_6, (VAR_11 + 0x555), 0x90);
  VAR_7 = FUNC_1(VAR_6, VAR_11);
  VAR_8 = FUNC_1(VAR_6, VAR_11 + VAR_10);
  VAR_9 = FUNC_1(VAR_6, VAR_11 + VAR_10 + VAR_10);

  FUNC_0("Flash MethodB manuf_id(0x%x) dev_id(0x%x) sec_prot"
   "(0x%x)\n", VAR_7, VAR_8, VAR_9);

  VAR_12 = FUNC_2(VAR_6);
  if (VAR_12 != 0) {
   FUNC_0("couldn't reset flash. err=%d\n", VAR_12);
   return VAR_12;
  }

  switch (VAR_7) {
  case 132:
   switch (VAR_8) {
   case 143:
    VAR_6->hw_prof.flash.method = VAR_4;
    break;
   default:
    break;
   }
   break;
  case 128:
   switch (VAR_8) {
   case 135:
    VAR_6->hw_prof.flash.method = VAR_4;
    break;
   default:
    break;
   }
   break;
  case 131:
   switch (VAR_8) {
   case 138:
    VAR_6->hw_prof.flash.method = VAR_4;
    break;
   }
   break;
  case 130:
   switch (VAR_8) {
   case 140:
    VAR_6->hw_prof.flash.method = VAR_4;
    break;
   }
   break;
  case 129:
   switch (VAR_8) {
   case 140:
    VAR_6->hw_prof.flash.method = VAR_4;
    break;
   }
   break;
  default:
   return VAR_0;
  }
 }

 if (VAR_6->hw_prof.flash.method == VAR_5)
       return VAR_0;

 VAR_6->hw_prof.flash.manuf = VAR_7;
 VAR_6->hw_prof.flash.dev_id = VAR_8;
 VAR_6->hw_prof.flash.sec_prot = VAR_9;
 return 0;
}
