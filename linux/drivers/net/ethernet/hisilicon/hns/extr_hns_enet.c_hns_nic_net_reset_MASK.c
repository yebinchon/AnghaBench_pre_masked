
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hns_nic_priv {int state; struct hnae_handle* ae_handle; } ;
struct hnae_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hnae_handle*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct net_device *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_2(VAR_1);
 struct hnae_handle *VAR_3 = VAR_2->ae_handle;

 while (FUNC_3(VAR_0, &VAR_2->state))
  FUNC_4(1000, 2000);

 (void)FUNC_1(VAR_3);

 FUNC_0(VAR_0, &VAR_2->state);
}
