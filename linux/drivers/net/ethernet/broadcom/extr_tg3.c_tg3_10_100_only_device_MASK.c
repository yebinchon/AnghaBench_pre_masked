
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_flags; } ;
struct pci_device_id {int driver_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct tg3 *VAR_7,
       const struct pci_device_id *VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_2) & VAR_3;

 if ((FUNC_0(VAR_7) == VAR_0 &&
      (VAR_9 == 0x8000 || VAR_9 == 0x4000)) ||
     (VAR_7->phy_flags & VAR_6))
  return 1;

 if (VAR_8->driver_data & VAR_4) {
  if (FUNC_0(VAR_7) == VAR_1) {
   if (VAR_8->driver_data & VAR_5)
    return 1;
  } else {
   return 1;
  }
 }

 return 0;
}
