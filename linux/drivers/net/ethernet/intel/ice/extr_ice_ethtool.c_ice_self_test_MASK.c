
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ice_pf {int int_name; TYPE_2__* pdev; int state; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_test {int flags; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct ice_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,char*) ;
 struct ice_netdev_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void
FUNC_15(struct net_device *VAR_8, struct ethtool_test *VAR_9,
       u64 *VAR_10)
{
 struct ice_netdev_priv *VAR_11 = FUNC_12(VAR_8);
 bool VAR_12 = FUNC_13(VAR_8);
 struct ice_pf *VAR_13 = VAR_11->vsi->back;

 if (VAR_9->flags == VAR_1) {
  FUNC_11(VAR_8, "offline testing starting\n");

  FUNC_14(VAR_7, VAR_13->state);

  if (FUNC_3(VAR_13)) {
   FUNC_2(&VAR_13->pdev->dev,
     "Please take active VFs and Netqueues offline and restart the adapter before running NIC diagnostics\n");
   VAR_10[VAR_6] = 1;
   VAR_10[VAR_2] = 1;
   VAR_10[VAR_3] = 1;
   VAR_10[VAR_5] = 1;
   VAR_10[VAR_4] = 1;
   VAR_9->flags |= VAR_0;
   FUNC_0(VAR_7, VAR_13->state);
   goto skip_ol_tests;
  }

  if (VAR_12)

   FUNC_10(VAR_8);

  VAR_10[VAR_4] = FUNC_6(VAR_8);
  VAR_10[VAR_2] = FUNC_4(VAR_8);
  VAR_10[VAR_3] = FUNC_5(VAR_8);
  VAR_10[VAR_5] = FUNC_7(VAR_8);
  VAR_10[VAR_6] = FUNC_9(VAR_8);

  if (VAR_10[VAR_4] ||
      VAR_10[VAR_2] ||
      VAR_10[VAR_5] ||
      VAR_10[VAR_3] ||
      VAR_10[VAR_6])
   VAR_9->flags |= VAR_0;

  FUNC_0(VAR_7, VAR_13->state);

  if (VAR_12) {
   int VAR_14 = FUNC_8(VAR_8);

   if (VAR_14) {
    FUNC_1(&VAR_13->pdev->dev,
     "Could not open device %s, err %d",
     VAR_13->int_name, VAR_14);
   }
  }
 } else {

  FUNC_11(VAR_8, "online testing starting\n");

  VAR_10[VAR_4] = FUNC_6(VAR_8);
  if (VAR_10[VAR_4])
   VAR_9->flags |= VAR_0;


  VAR_10[VAR_6] = 0;
  VAR_10[VAR_2] = 0;
  VAR_10[VAR_3] = 0;
  VAR_10[VAR_5] = 0;
 }

skip_ol_tests:
 FUNC_11(VAR_8, "testing finished\n");
}
