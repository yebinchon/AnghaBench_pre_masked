
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int advertising; int force_media; } ;
struct netdev_private {int csr6; int mii; int * phys; TYPE_1__ mii_if; } ;
struct net_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_9)
{
 struct netdev_private *VAR_10 = FUNC_2(VAR_9);
 int VAR_11, VAR_12, VAR_13, VAR_14;


 VAR_14 = FUNC_1(VAR_9, VAR_10->phys[0], VAR_5);

 if (VAR_14 == 0xffff)
  return VAR_10->csr6;

 VAR_14 = FUNC_1(VAR_9, VAR_10->phys[0], VAR_5);
 if (!(VAR_14 & 0x4)) {
  if (FUNC_4(VAR_9)) {
   if (VAR_8)
    FUNC_0(&VAR_9->dev,
      "MII #%d reports no link. Disabling watchdog\n",
      VAR_10->phys[0]);
   FUNC_3(VAR_9);
  }
  return VAR_10->csr6;
 }
 if (!FUNC_4(VAR_9)) {
  if (VAR_8)
   FUNC_0(&VAR_9->dev,
     "MII #%d link is back. Enabling watchdog\n",
     VAR_10->phys[0]);
  FUNC_5(VAR_9);
 }

 if ((VAR_10->mii & ~0xf) == VAR_6) {
  VAR_14 = FUNC_1(VAR_9, VAR_10->phys[0], VAR_4);
  VAR_11 = VAR_14 & VAR_0;
  VAR_12 = VAR_14 & VAR_1;
 } else {
  int VAR_15;
  VAR_14 = FUNC_1(VAR_9, VAR_10->phys[0], VAR_7);
  VAR_15 = VAR_14 & VAR_10->mii_if.advertising;

  VAR_11 = (VAR_15 & VAR_2) || ((VAR_15 & 0x02C0) == VAR_3);
  VAR_12 = VAR_15 & 0x380;
 }
 VAR_11 |= VAR_10->mii_if.force_media;

 VAR_13 = VAR_10->csr6 & ~0x20000200;
 if (VAR_11)
  VAR_13 |= 0x200;
 if (VAR_12)
  VAR_13 |= 0x20000000;
 if (VAR_13 != VAR_10->csr6 && VAR_8)
  FUNC_0(&VAR_9->dev,
    "Setting %dMBit-%s-duplex based on MII#%d\n",
    VAR_12 ? 100 : 10, VAR_11 ? "full" : "half",
    VAR_10->phys[0]);
 return VAR_13;
}
