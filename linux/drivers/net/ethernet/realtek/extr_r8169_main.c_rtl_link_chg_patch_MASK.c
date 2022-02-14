
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; struct phy_device* phydev; struct net_device* dev; } ;
struct phy_device {scalar_t__ speed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtl8169_private*,int,int ,int) ;
 int FUNC_2 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_10)
{
 struct net_device *VAR_11 = VAR_10->dev;
 struct phy_device *VAR_12 = VAR_10->phydev;

 if (!FUNC_0(VAR_11))
  return;

 if (VAR_10->mac_version == VAR_2 ||
     VAR_10->mac_version == VAR_6) {
  if (VAR_12->speed == VAR_9) {
   FUNC_1(VAR_10, 0x1bc, VAR_1, 0x00000011);
   FUNC_1(VAR_10, 0x1dc, VAR_1, 0x00000005);
  } else if (VAR_12->speed == VAR_8) {
   FUNC_1(VAR_10, 0x1bc, VAR_1, 0x0000001f);
   FUNC_1(VAR_10, 0x1dc, VAR_1, 0x00000005);
  } else {
   FUNC_1(VAR_10, 0x1bc, VAR_1, 0x0000001f);
   FUNC_1(VAR_10, 0x1dc, VAR_1, 0x0000003f);
  }
  FUNC_2(VAR_10);
 } else if (VAR_10->mac_version == VAR_3 ||
     VAR_10->mac_version == VAR_4) {
  if (VAR_12->speed == VAR_9) {
   FUNC_1(VAR_10, 0x1bc, VAR_1, 0x00000011);
   FUNC_1(VAR_10, 0x1dc, VAR_1, 0x00000005);
  } else {
   FUNC_1(VAR_10, 0x1bc, VAR_1, 0x0000001f);
   FUNC_1(VAR_10, 0x1dc, VAR_1, 0x0000003f);
  }
 } else if (VAR_10->mac_version == VAR_5) {
  if (VAR_12->speed == VAR_7) {
   FUNC_1(VAR_10, 0x1d0, VAR_0, 0x4d02);
   FUNC_1(VAR_10, 0x1dc, VAR_0, 0x0060a);
  } else {
   FUNC_1(VAR_10, 0x1d0, VAR_0, 0x0000);
  }
 }
}
