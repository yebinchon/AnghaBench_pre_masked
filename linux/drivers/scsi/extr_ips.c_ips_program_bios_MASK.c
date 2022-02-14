
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* pcidev; scalar_t__ io_addr; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_4__ {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_3, char *VAR_4, uint32_t VAR_5,
   uint32_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 uint8_t VAR_9 = 0;

 FUNC_1("ips_program_bios", 1);

 VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

  FUNC_4(VAR_7 + VAR_6, VAR_3->io_addr + VAR_0);
  if (VAR_3->pcidev->revision == VAR_2)
   FUNC_5(25);

  FUNC_3(0x40, VAR_3->io_addr + VAR_1);
  if (VAR_3->pcidev->revision == VAR_2)
   FUNC_5(25);

  FUNC_3(VAR_4[VAR_7], VAR_3->io_addr + VAR_1);
  if (VAR_3->pcidev->revision == VAR_2)
   FUNC_5(25);


  VAR_8 = 1000;
  while (VAR_8 > 0) {
   if (VAR_3->pcidev->revision == VAR_2) {
    FUNC_4(0, VAR_3->io_addr + VAR_0);
    FUNC_5(25);
   }

   VAR_9 = FUNC_2(VAR_3->io_addr + VAR_1);

   if (VAR_9 & 0x80)
    break;

   FUNC_0(1);
   VAR_8--;
  }

  if (VAR_8 == 0) {

   FUNC_4(0, VAR_3->io_addr + VAR_0);
   if (VAR_3->pcidev->revision == VAR_2)
    FUNC_5(25);

   FUNC_3(0xFF, VAR_3->io_addr + VAR_1);
   if (VAR_3->pcidev->revision == VAR_2)
    FUNC_5(25);

   return (1);
  }


  if (VAR_9 & 0x18) {

   FUNC_4(0, VAR_3->io_addr + VAR_0);
   if (VAR_3->pcidev->revision == VAR_2)
    FUNC_5(25);

   FUNC_3(0xFF, VAR_3->io_addr + VAR_1);
   if (VAR_3->pcidev->revision == VAR_2)
    FUNC_5(25);

   return (1);
  }
 }


 FUNC_4(0, VAR_3->io_addr + VAR_0);
 if (VAR_3->pcidev->revision == VAR_2)
  FUNC_5(25);

 FUNC_3(0xFF, VAR_3->io_addr + VAR_1);
 if (VAR_3->pcidev->revision == VAR_2)
  FUNC_5(25);

 return (0);
}
