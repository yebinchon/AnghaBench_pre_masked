
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int bar; int method; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;


 int FUNC_1 (struct asd_ha_struct*) ;
 scalar_t__ FUNC_2 (struct asd_ha_struct*,int,int ) ;
 int FUNC_3 (struct asd_ha_struct*,int,int) ;
 int FUNC_4 (struct asd_ha_struct*) ;
 int FUNC_5 (struct asd_ha_struct*,int,int const) ;

int FUNC_6(struct asd_ha_struct *VAR_1,
   const void *VAR_2, u32 VAR_3, u32 VAR_4)
{
 const u8 *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_1->hw_prof.flash.bar;
 VAR_5 = ((void*)0);

 VAR_9 = FUNC_1(VAR_1);
 if (VAR_9) {
  FUNC_0("couldn't find the type of flash. err=%d\n", VAR_9);
  return VAR_9;
 }

 VAR_6 = VAR_3;
 VAR_9 = FUNC_3(VAR_1, VAR_6, VAR_4);
 if (VAR_9) {
  FUNC_0("Erase failed at offset:0x%x\n",
   VAR_6);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_1);
 if (VAR_9) {
  FUNC_0("couldn't reset flash. err=%d\n", VAR_9);
  return VAR_9;
 }

 VAR_5 = (const u8 *)VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {

  switch (VAR_1->hw_prof.flash.method) {
  case 129:
  {
   FUNC_5(VAR_1,
     (VAR_7 + 0xAAA), 0xAA);
   FUNC_5(VAR_1,
     (VAR_7 + 0x555), 0x55);
   FUNC_5(VAR_1,
     (VAR_7 + 0xAAA), 0xA0);
   FUNC_5(VAR_1,
     (VAR_7 + VAR_6 + VAR_8),
     (*(VAR_5 + VAR_8)));
   break;
  }
  case 128:
  {
   FUNC_5(VAR_1,
     (VAR_7 + 0x555), 0xAA);
   FUNC_5(VAR_1,
     (VAR_7 + 0x2AA), 0x55);
   FUNC_5(VAR_1,
     (VAR_7 + 0x555), 0xA0);
   FUNC_5(VAR_1,
     (VAR_7 + VAR_6 + VAR_8),
     (*(VAR_5 + VAR_8)));
   break;
  }
  default:
   break;
  }
  if (FUNC_2(VAR_1,
    (VAR_6 + VAR_8), 0) != 0) {
   FUNC_0("aicx: Write failed at offset:0x%x\n",
    VAR_7 + VAR_6 + VAR_8);
   return VAR_0;
  }
 }

 VAR_9 = FUNC_4(VAR_1);
 if (VAR_9) {
  FUNC_0("couldn't reset flash. err=%d\n", VAR_9);
  return VAR_9;
 }
 return 0;
}
