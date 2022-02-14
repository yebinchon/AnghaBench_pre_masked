
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_2,
      enum rf90_radio_path VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 u8 VAR_6 = 0;

 VAR_5 |= ((VAR_4 & 0xFF) << 12);
 VAR_5 |= ((VAR_3 & 0x3) << 20);
 VAR_5 |= 0x80000000;
 while (FUNC_0(VAR_2, VAR_0) & 0x80000000) {
  if (VAR_6++ < 100)
   FUNC_2(10);
  else
   break;
 }
 FUNC_1(VAR_2, VAR_0, VAR_5);
 while (FUNC_0(VAR_2, VAR_0) & 0x80000000) {
  if (VAR_6++ < 100)
   FUNC_2(10);
  else
   return 0;
 }
 return FUNC_0(VAR_2, VAR_1);

}
