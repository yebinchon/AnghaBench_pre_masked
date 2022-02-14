
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct niu_vpd {int * local_mac; int phy_type; int model; } ;
struct niu {int flags; int port; int device; struct niu_vpd vpd; int mac_xcvr; struct net_device* dev; } ;
struct net_device {scalar_t__* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int *,int ) ;
 scalar_t__ FUNC_3 (struct niu*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct niu *VAR_11)
{
 struct net_device *VAR_12 = VAR_11->dev;
 struct niu_vpd *VAR_13 = &VAR_11->vpd;
 u8 VAR_14;

 if (!FUNC_1(&VAR_13->local_mac[0])) {
  FUNC_0(VAR_11->device, "VPD MAC invalid, falling back to SPROM\n");

  VAR_11->flags &= ~VAR_7;
  return;
 }

 if (!FUNC_4(VAR_11->vpd.model, VAR_3) ||
     !FUNC_4(VAR_11->vpd.model, VAR_10)) {
  VAR_11->flags |= VAR_4;
  VAR_11->flags &= ~VAR_5;
  VAR_11->flags |= VAR_8;
  VAR_11->mac_xcvr = VAR_1;
  if (VAR_11->port > 1) {
   VAR_11->flags |= VAR_5;
   VAR_11->flags &= ~VAR_4;
  }
  if (VAR_11->flags & VAR_4)
   VAR_11->mac_xcvr = VAR_2;
 } else if (!FUNC_4(VAR_11->vpd.model, VAR_9)) {
  VAR_11->flags |= (VAR_4 | VAR_5 |
         VAR_6);
 } else if (FUNC_3(VAR_11, VAR_11->vpd.phy_type)) {
  FUNC_0(VAR_11->device, "Illegal phy string [%s]\n",
   VAR_11->vpd.phy_type);
  FUNC_0(VAR_11->device, "Falling back to SPROM\n");
  VAR_11->flags &= ~VAR_7;
  return;
 }

 FUNC_2(VAR_12->dev_addr, VAR_13->local_mac, VAR_0);

 VAR_14 = VAR_12->dev_addr[5];
 VAR_12->dev_addr[5] += VAR_11->port;
 if (VAR_12->dev_addr[5] < VAR_14)
  VAR_12->dev_addr[4]++;
}
