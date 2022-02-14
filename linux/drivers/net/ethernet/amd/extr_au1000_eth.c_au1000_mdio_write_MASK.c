
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct au1000_private {TYPE_1__* mac; } ;
struct TYPE_2__ {scalar_t__ mii_control; scalar_t__ mii_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct au1000_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__* const) ;
 int FUNC_6 (scalar_t__,scalar_t__* const) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2, int VAR_3,
         int VAR_4, u16 VAR_5)
{
 struct au1000_private *VAR_6 = FUNC_4(VAR_2);
 u32 *const VAR_7 = &VAR_6->mac->mii_control;
 u32 *const VAR_8 = &VAR_6->mac->mii_data;
 u32 VAR_9 = 20;
 u32 VAR_10;

 while (FUNC_5(VAR_7) & VAR_0) {
  FUNC_2(1);
  if (--VAR_9 == 0) {
   FUNC_3(VAR_2, "mdio_write busy timeout!!\n");
   return;
  }
 }

 VAR_10 = FUNC_1(VAR_4) |
  FUNC_0(VAR_3) | VAR_1;

 FUNC_6(VAR_5, VAR_8);
 FUNC_6(VAR_10, VAR_7);
}
