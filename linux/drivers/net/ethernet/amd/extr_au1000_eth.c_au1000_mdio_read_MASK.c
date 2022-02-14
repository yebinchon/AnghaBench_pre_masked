
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct au1000_private {TYPE_1__* mac; } ;
struct TYPE_2__ {int mii_control; int mii_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct au1000_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int* const) ;
 int FUNC_6 (int,int* const) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 struct au1000_private *VAR_5 = FUNC_4(VAR_2);
 u32 *const VAR_6 = &VAR_5->mac->mii_control;
 u32 *const VAR_7 = &VAR_5->mac->mii_data;
 u32 VAR_8 = 20;
 u32 VAR_9;

 while (FUNC_5(VAR_6) & VAR_0) {
  FUNC_2(1);
  if (--VAR_8 == 0) {
   FUNC_3(VAR_2, "read_MII busy timeout!!\n");
   return -1;
  }
 }

 VAR_9 = FUNC_1(VAR_4) |
  FUNC_0(VAR_3) | VAR_1;

 FUNC_6(VAR_9, VAR_6);

 VAR_8 = 20;
 while (FUNC_5(VAR_6) & VAR_0) {
  FUNC_2(1);
  if (--VAR_8 == 0) {
   FUNC_3(VAR_2, "mdio_read busy timeout!!\n");
   return -1;
  }
 }
 return FUNC_5(VAR_7);
}
