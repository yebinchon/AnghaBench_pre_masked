
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
        enum rf90_radio_path VAR_2, u32 VAR_3,
        u32 VAR_4)
{
 u8 VAR_5 = 0;

 VAR_4 |= ((VAR_3 & 0xFF) << 12);
 VAR_4 |= ((VAR_2 & 0x3) << 20);
 VAR_4 |= 0x400000;
 VAR_4 |= 0x80000000;

 while (FUNC_0(VAR_1, VAR_0) & 0x80000000) {
  if (VAR_5++ < 100)
   FUNC_2(10);
  else
   break;
 }
 FUNC_1(VAR_1, VAR_0, VAR_4);

}
