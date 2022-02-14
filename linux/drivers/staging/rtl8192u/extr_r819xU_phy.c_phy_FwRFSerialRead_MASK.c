
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_2,
         enum rf90_radio_path_e VAR_3,
         u32 VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u8 VAR_7 = 0;
 u32 VAR_8;
 VAR_6 |= ((VAR_4&0xFF)<<12);

 VAR_6 |= ((VAR_3&0x3)<<20);


 VAR_6 |= 0x80000000;

 FUNC_0(VAR_2, VAR_0, &VAR_8);
 while (VAR_8 & 0x80000000) {



  if (VAR_7++ < 100) {
   FUNC_1(10);
   FUNC_0(VAR_2, VAR_0, &VAR_8);
  } else {
   break;
  }
 }

 FUNC_2(VAR_2, VAR_0, VAR_6);

 FUNC_0(VAR_2, VAR_0, &VAR_8);
 while (VAR_8 & 0x80000000) {



  if (VAR_7++ < 100) {
   FUNC_1(10);
   FUNC_0(VAR_2, VAR_0, &VAR_8);
  } else {
   return 0;
  }
 }
 FUNC_0(VAR_2, VAR_1, &VAR_5);

 return VAR_5;
}
