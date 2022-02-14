
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ io_addr; TYPE_3__* pcidev; } ;
typedef TYPE_1__ ips_ha_t ;
struct TYPE_5__ {scalar_t__ revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_3__*,char*,int,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_16)
{
 uint8_t VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19[VAR_6];
 uint8_t VAR_20[VAR_5];
 int VAR_21, VAR_22;

 FUNC_2("ips_init_copperhead", 1);

 for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
  for (VAR_22 = 0; VAR_22 < 45; VAR_22++) {
   VAR_17 = FUNC_3(VAR_16->io_addr + VAR_10);
   if (VAR_17 & VAR_2)
    break;


   FUNC_1(VAR_7);
  }

  if (VAR_22 >= 45)

   return (0);

  VAR_19[VAR_21] = FUNC_3(VAR_16->io_addr + VAR_11);
  FUNC_4(VAR_17, VAR_16->io_addr + VAR_10);
 }

 if (VAR_19[0] < VAR_4) {
  FUNC_0(VAR_15, VAR_16->pcidev,
      "reset controller fails (post status %x %x).\n",
      VAR_19[0], VAR_19[1]);

  return (0);
 }

 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
  for (VAR_22 = 0; VAR_22 < 240; VAR_22++) {
   VAR_17 = FUNC_3(VAR_16->io_addr + VAR_10);
   if (VAR_17 & VAR_2)
    break;


   FUNC_1(VAR_7);
  }

  if (VAR_22 >= 240)

   return (0);

  VAR_20[VAR_21] = FUNC_3(VAR_16->io_addr + VAR_11);
  FUNC_4(VAR_17, VAR_16->io_addr + VAR_10);
 }

 for (VAR_21 = 0; VAR_21 < 240; VAR_21++) {
  VAR_18 = FUNC_3(VAR_16->io_addr + VAR_8);

  if ((VAR_18 & VAR_3) == 0)
   break;


  FUNC_1(VAR_7);
 }

 if (VAR_21 >= 240)

  return (0);


 FUNC_5(0x1010, VAR_16->io_addr + VAR_9);


 FUNC_4(VAR_0, VAR_16->io_addr + VAR_13);

 if (VAR_16->pcidev->revision == VAR_14)

  FUNC_5(0, VAR_16->io_addr + VAR_12);


 FUNC_4(VAR_1, VAR_16->io_addr + VAR_10);

 return (1);
}
