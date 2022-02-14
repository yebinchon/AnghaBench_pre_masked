
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int flags; int * netdev_ops; int dev_addr; int dev_port; struct lcs_card* ml_priv; } ;
struct TYPE_4__ {int ccwdev; } ;
struct TYPE_3__ {int ccwdev; } ;
struct lcs_card {int state; int lan_type; int ip_assists_supported; TYPE_2__ read; TYPE_1__ write; struct net_device* dev; int mac; int portno; int lan_type_trans; } ;
struct ccwgroup_device {int dev; int * cdev; } ;
typedef enum lcs_dev_states { ____Placeholder_lcs_dev_states } lcs_dev_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct lcs_card**,int) ;
 int FUNC_1 (int,int ,char*) ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_2 (int ) ;
 struct net_device* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int,int) ;
 struct lcs_card* FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct lcs_card*) ;
 int FUNC_9 (struct lcs_card*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (struct ccwgroup_device*) ;
 int FUNC_11 (struct lcs_card*,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct lcs_card*) ;
 int FUNC_14 (struct lcs_card*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int ,char*) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_20(struct ccwgroup_device *VAR_12)
{
 struct lcs_card *VAR_13;
 struct net_device *VAR_14=((void*)0);
 enum lcs_dev_states VAR_15;
 int VAR_16;

 VAR_13 = FUNC_7(&VAR_12->dev);
 if (!VAR_13)
  return -VAR_2;

 FUNC_1(2, VAR_11, "newdev");
 FUNC_0(3, VAR_11, &VAR_13, sizeof(void*));
 VAR_13->read.ccwdev = VAR_12->cdev[0];
 VAR_13->write.ccwdev = VAR_12->cdev[1];

 VAR_15 = VAR_13->state;
 VAR_16 = FUNC_5(VAR_13->read.ccwdev);
 if (VAR_16)
  goto out_err;
 VAR_16 = FUNC_5(VAR_13->write.ccwdev);
 if (VAR_16)
  goto out_werr;

 FUNC_1(3, VAR_11, "lcsnewdv");

 FUNC_13(VAR_13);
 VAR_16 = FUNC_9(VAR_13);
 if (VAR_16) {
  FUNC_1(2, VAR_11, "dtctfail");
  FUNC_6(&VAR_12->dev,
   "Detecting a network adapter for LCS devices"
   " failed with rc=%d (0x%x)\n", VAR_16, VAR_16);
  FUNC_14(VAR_13);
  goto out;
 }
 if (VAR_13->dev) {
  FUNC_1(2, VAR_11, "samedev");
  FUNC_0(3, VAR_11, &VAR_13, sizeof(void*));
  goto netdev_out;
 }
 switch (VAR_13->lan_type) {
 default:
  FUNC_1(3, VAR_11, "errinit");
  FUNC_18(" Initialization failed\n");
  goto out;
 }
 if (!VAR_14)
  goto out;
 VAR_13->dev = VAR_14;
 VAR_13->dev->ml_priv = VAR_13;
 VAR_13->dev->netdev_ops = &VAR_10;
 VAR_13->dev->dev_port = VAR_13->portno;
 FUNC_15(VAR_13->dev->dev_addr, VAR_13->mac, VAR_6);




netdev_out:
 FUNC_11(VAR_13,0xffffffff);
 if (VAR_15 == VAR_0) {
  FUNC_12(VAR_13->dev);
  VAR_13->dev->flags |= VAR_3;
  FUNC_16(VAR_13->dev);
  FUNC_17(VAR_13->dev);
  VAR_13->state = VAR_1;
 } else {
  FUNC_14(VAR_13);
 }

 if (FUNC_10(VAR_12) != 0)
  goto out;


 FUNC_19("LCS device %s %s IPv6 support\n", VAR_13->dev->name,
  (VAR_13->ip_assists_supported & VAR_4) ?
  "with" : "without");

 FUNC_19("LCS device %s %s Multicast support\n", VAR_13->dev->name,
  (VAR_13->ip_assists_supported & VAR_5) ?
  "with" : "without");
 return 0;
out:

 FUNC_4(VAR_13->write.ccwdev);
out_werr:
 FUNC_4(VAR_13->read.ccwdev);
out_err:
 return -VAR_2;
}
