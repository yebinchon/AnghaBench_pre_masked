
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hns_nic_priv {scalar_t__ link; int state; struct hnae_handle* ae_handle; } ;
struct hnae_handle {int q_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_2(VAR_2);
 struct hnae_handle *VAR_4 = VAR_3->ae_handle;
 int VAR_5;

 if (FUNC_6(VAR_1, &VAR_3->state))
  return -VAR_0;

 VAR_3->link = 0;
 FUNC_3(VAR_2);

 VAR_5 = FUNC_5(VAR_2, VAR_4->q_num);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2, "netif_set_real_num_tx_queues fail, ret=%d!\n",
      VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_4->q_num);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2,
      "netif_set_real_num_rx_queues fail, ret=%d!\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5) {
  FUNC_1(VAR_2,
      "hns net up fail, ret=%d!\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
