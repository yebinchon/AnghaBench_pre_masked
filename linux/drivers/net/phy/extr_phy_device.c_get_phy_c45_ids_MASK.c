
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_c45_device_ids {int* device_ids; int devices_in_package; } ;
struct mii_bus {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mii_bus*,int,int,int*) ;
 int FUNC_2 (struct mii_bus*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_4, int VAR_5, u32 *VAR_6,
      struct phy_c45_device_ids *VAR_7) {
 int VAR_8;
 int VAR_9, VAR_10;
 const int VAR_11 = FUNC_0(VAR_7->device_ids);
 u32 *VAR_12 = &VAR_7->devices_in_package;




 for (VAR_9 = 1; VAR_9 < VAR_11 && *VAR_12 == 0; VAR_9++) {
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_9, VAR_12);
  if (VAR_8 < 0)
   return -VAR_0;

  if ((*VAR_12 & 0x1fffffff) == 0x1fffffff) {





   VAR_8 = FUNC_1(VAR_4, VAR_5, 0, VAR_12);
   if (VAR_8 < 0)
    return -VAR_0;

   if ((*VAR_12 & 0x1fffffff) == 0x1fffffff) {
    *VAR_6 = 0xffffffff;
    return 0;
   } else {
    break;
   }
  }
 }


 for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9++) {
  if (!(VAR_7->devices_in_package & (1 << VAR_9)))
   continue;

  VAR_10 = VAR_1 | VAR_9 << 16 | VAR_2;
  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_10);
  if (VAR_8 < 0)
   return -VAR_0;
  VAR_7->device_ids[VAR_9] = VAR_8 << 16;

  VAR_10 = VAR_1 | VAR_9 << 16 | VAR_3;
  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_10);
  if (VAR_8 < 0)
   return -VAR_0;
  VAR_7->device_ids[VAR_9] |= VAR_8;
 }
 *VAR_6 = 0;
 return 0;
}
