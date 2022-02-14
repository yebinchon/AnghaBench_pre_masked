
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct tlan_priv {int phy_num; scalar_t__* phy; TYPE_1__* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,scalar_t__,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 struct tlan_priv *VAR_8 = FUNC_2(VAR_7);
 u16 VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u32 VAR_12;

 if (VAR_8->adapter->flags & VAR_3) {
  VAR_8->phy_num = 0xffff;
  return;
 }

 FUNC_3(VAR_7, VAR_5, VAR_1, &VAR_10);

 if (VAR_10 != 0xffff)
  VAR_8->phy[0] = VAR_5;
 else
  VAR_8->phy[0] = VAR_6;

 VAR_8->phy[1] = VAR_6;
 for (VAR_12 = 0; VAR_12 <= VAR_5; VAR_12++) {
  FUNC_3(VAR_7, VAR_12, VAR_0, &VAR_9);
  FUNC_3(VAR_7, VAR_12, VAR_1, &VAR_10);
  FUNC_3(VAR_7, VAR_12, VAR_2, &VAR_11);
  if ((VAR_9 != 0xffff) ||
      (VAR_10 != 0xffff) || (VAR_11 != 0xffff)) {
   FUNC_0(VAR_4,
     "PHY found at %02x %04x %04x %04x\n",
     VAR_12, VAR_9, VAR_10, VAR_11);
   if ((VAR_8->phy[1] == VAR_6) &&
       (VAR_12 != VAR_5)) {
    VAR_8->phy[1] = VAR_12;
   }
  }
 }

 if (VAR_8->phy[1] != VAR_6)
  VAR_8->phy_num = 1;
 else if (VAR_8->phy[0] != VAR_6)
  VAR_8->phy_num = 0;
 else
  FUNC_1(VAR_7, "Cannot initialize device, no PHY was found!\n");

}
