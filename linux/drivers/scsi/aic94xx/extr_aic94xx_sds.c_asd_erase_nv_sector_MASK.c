
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bar; int method; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct asd_ha_struct*,int,int) ;
 int FUNC_1 (struct asd_ha_struct*,int ,int) ;

int FUNC_2(struct asd_ha_struct *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_3->hw_prof.flash.bar;


 VAR_7 = VAR_4 & VAR_2;





 while (VAR_7 < VAR_4+VAR_5) {
  switch (VAR_3->hw_prof.flash.method) {
  case 129:
   FUNC_1(VAR_3, (VAR_6 + 0xAAA), 0xAA);
   FUNC_1(VAR_3, (VAR_6 + 0x555), 0x55);
   FUNC_1(VAR_3, (VAR_6 + 0xAAA), 0x80);
   FUNC_1(VAR_3, (VAR_6 + 0xAAA), 0xAA);
   FUNC_1(VAR_3, (VAR_6 + 0x555), 0x55);
   FUNC_1(VAR_3, (VAR_6 + VAR_7), 0x30);
   break;
  case 128:
   FUNC_1(VAR_3, (VAR_6 + 0x555), 0xAA);
   FUNC_1(VAR_3, (VAR_6 + 0x2AA), 0x55);
   FUNC_1(VAR_3, (VAR_6 + 0x555), 0x80);
   FUNC_1(VAR_3, (VAR_6 + 0x555), 0xAA);
   FUNC_1(VAR_3, (VAR_6 + 0x2AA), 0x55);
   FUNC_1(VAR_3, (VAR_6 + VAR_7), 0x30);
   break;
  default:
   break;
  }

  if (FUNC_0(VAR_3, VAR_7, 1) != 0)
   return VAR_0;

  VAR_7 += VAR_1;
 }

 return 0;
}
