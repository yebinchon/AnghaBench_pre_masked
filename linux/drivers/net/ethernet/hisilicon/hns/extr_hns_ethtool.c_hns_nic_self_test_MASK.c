
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct hns_nic_priv {int state; int netdev; TYPE_1__* ae_handle; } ;
struct ethtool_test {int flags; } ;
typedef enum hnae_loop { ____Placeholder_hnae_loop } hnae_loop ;
struct TYPE_2__ {scalar_t__ phy_if; int phy_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 scalar_t__ FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 struct hns_nic_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_8,
         struct ethtool_test *VAR_9, u64 *VAR_10)
{
 struct hns_nic_priv *VAR_11 = FUNC_8(VAR_8);
 bool VAR_12 = FUNC_9(VAR_8);

 int VAR_13[3][2];
 int VAR_14;
 int VAR_15 = 0;

 VAR_13[0][0] = VAR_2;
 VAR_13[0][1] = (VAR_11->ae_handle->phy_if != VAR_6);
 VAR_13[1][0] = VAR_4;
 VAR_13[1][1] = 1;
 VAR_13[2][0] = VAR_3;
 VAR_13[2][1] = ((!!(VAR_11->ae_handle->phy_dev)) &&
  (VAR_11->ae_handle->phy_if != VAR_6));

 if (VAR_9->flags == VAR_1) {
  FUNC_10(VAR_5, &VAR_11->state);

  if (VAR_12)
   FUNC_4(VAR_8);

  for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
   if (!VAR_13[VAR_14][1])
    continue;

   VAR_10[VAR_15] = FUNC_2(VAR_8,
    (enum hnae_loop)VAR_13[VAR_14][0]);
   if (!VAR_10[VAR_15]) {
    VAR_10[VAR_15] = FUNC_1(
     VAR_8, (enum hnae_loop)VAR_13[VAR_14][0]);
    (void)FUNC_0(VAR_8,
      (enum hnae_loop)VAR_13[VAR_14][0]);
   }

   if (VAR_10[VAR_15])
    VAR_9->flags |= VAR_0;

   VAR_15++;
  }

  FUNC_6(VAR_11->netdev);

  FUNC_3(VAR_5, &VAR_11->state);

  if (VAR_12)
   (void)FUNC_5(VAR_8, ((void*)0));
 }


 (void)FUNC_7(4 * 1000);
}
