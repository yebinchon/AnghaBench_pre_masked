
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tlan_priv {scalar_t__* phy; size_t phy_num; TYPE_1__* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct net_device*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct tlan_priv *VAR_3 = FUNC_1(VAR_2);
 u16 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_3->phy[VAR_3->phy_num];

 if (VAR_3->adapter->flags & VAR_0) {
  FUNC_0(VAR_2, "Unmanaged PHY\n");
 } else if (VAR_9 <= VAR_1) {
  FUNC_0(VAR_2, "PHY 0x%02x\n", VAR_9);
  FUNC_2("   Off.  +0     +1     +2     +3\n");
  for (VAR_4 = 0; VAR_4 < 0x20; VAR_4 += 4) {
   FUNC_3(VAR_2, VAR_9, VAR_4, &VAR_5);
   FUNC_3(VAR_2, VAR_9, VAR_4 + 1, &VAR_6);
   FUNC_3(VAR_2, VAR_9, VAR_4 + 2, &VAR_7);
   FUNC_3(VAR_2, VAR_9, VAR_4 + 3, &VAR_8);
   FUNC_2("   0x%02x 0x%04hx 0x%04hx 0x%04hx 0x%04hx\n",
    VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  }
 } else {
  FUNC_0(VAR_2, "Invalid PHY\n");
 }

}
