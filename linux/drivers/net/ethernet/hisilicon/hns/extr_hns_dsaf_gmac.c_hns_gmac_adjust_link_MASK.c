
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_driver {int mac_id; int dev; } ;
typedef enum mac_speed { ____Placeholder_mac_speed } mac_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct mac_driver*,int ,int ,int) ;
 int FUNC_2 (struct mac_driver*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_6, enum mac_speed VAR_7,
    u32 VAR_8)
{
 struct mac_driver *VAR_9 = (struct mac_driver *)VAR_6;

 FUNC_1(VAR_9, VAR_2,
    VAR_1, !!VAR_8);

 switch (VAR_7) {
 case 130:
  FUNC_2(
   VAR_9, VAR_4,
   VAR_3, VAR_5, 0x6);
  break;
 case 129:
  FUNC_2(
   VAR_9, VAR_4,
   VAR_3, VAR_5, 0x7);
  break;
 case 128:
  FUNC_2(
   VAR_9, VAR_4,
   VAR_3, VAR_5, 0x8);
  break;
 default:
  FUNC_0(VAR_9->dev,
   "hns_gmac_adjust_link fail, speed%d mac%d\n",
   VAR_7, VAR_9->mac_id);
  return -VAR_0;
 }

 return 0;
}
