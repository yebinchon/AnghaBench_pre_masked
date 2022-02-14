
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct i40e_pf {int state; TYPE_2__* pdev; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_test {int flags; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct i40e_pf*) ;
 scalar_t__ FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct i40e_pf*,int ,int) ;
 scalar_t__ FUNC_7 (struct net_device*,int*) ;
 scalar_t__ FUNC_8 (struct net_device*,int*) ;
 scalar_t__ FUNC_9 (struct net_device*,int*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*,int*) ;
 struct i40e_netdev_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct i40e_pf*,int ,struct net_device*,char*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void FUNC_16(struct net_device *VAR_9,
      struct ethtool_test *VAR_10, u64 *VAR_11)
{
 struct i40e_netdev_priv *VAR_12 = FUNC_12(VAR_9);
 bool VAR_13 = FUNC_14(VAR_9);
 struct i40e_pf *VAR_14 = VAR_12->vsi->back;

 if (VAR_10->flags == VAR_1) {

  FUNC_13(VAR_14, VAR_8, VAR_9, "offline testing starting\n");

  FUNC_15(VAR_7, VAR_14->state);

  if (FUNC_3(VAR_14) || FUNC_4(VAR_14)) {
   FUNC_2(&VAR_14->pdev->dev,
     "Please take active VFs and Netqueues offline and restart the adapter before running NIC diagnostics\n");
   VAR_11[VAR_5] = 1;
   VAR_11[VAR_2] = 1;
   VAR_11[VAR_3] = 1;
   VAR_11[VAR_4] = 1;
   VAR_10->flags |= VAR_0;
   FUNC_1(VAR_7, VAR_14->state);
   goto skip_ol_tests;
  }


  if (VAR_13)

   FUNC_5(VAR_9);
  else





   FUNC_6(VAR_14, FUNC_0(VAR_6), 1);

  if (FUNC_9(VAR_9, &VAR_11[VAR_4]))
   VAR_10->flags |= VAR_0;

  if (FUNC_7(VAR_9, &VAR_11[VAR_2]))
   VAR_10->flags |= VAR_0;

  if (FUNC_8(VAR_9, &VAR_11[VAR_3]))
   VAR_10->flags |= VAR_0;


  if (FUNC_11(VAR_9, &VAR_11[VAR_5]))
   VAR_10->flags |= VAR_0;

  FUNC_1(VAR_7, VAR_14->state);
  FUNC_6(VAR_14, FUNC_0(VAR_6), 1);

  if (VAR_13)
   FUNC_10(VAR_9);
 } else {

  FUNC_13(VAR_14, VAR_8, VAR_9, "online testing starting\n");

  if (FUNC_9(VAR_9, &VAR_11[VAR_4]))
   VAR_10->flags |= VAR_0;


  VAR_11[VAR_5] = 0;
  VAR_11[VAR_2] = 0;
  VAR_11[VAR_3] = 0;
 }

skip_ol_tests:

 FUNC_13(VAR_14, VAR_8, VAR_9, "testing finished\n");
}
