
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {int state; int netdev; TYPE_1__* ae_handle; } ;
typedef enum hnae_port_type { ____Placeholder_hnae_port_type } hnae_port_type ;
struct TYPE_2__ {int port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct hns_nic_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int) ;

void FUNC_8(struct net_device *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_4(VAR_2);
 enum hnae_port_type VAR_4 = VAR_3->ae_handle->port_type;

 FUNC_5(VAR_3->netdev);
 while (FUNC_6(VAR_1, &VAR_3->state))
  FUNC_7(1000, 2000);

 FUNC_1(VAR_2);




 if (VAR_4 == VAR_0)
  FUNC_2(VAR_2);

 (void)FUNC_3(VAR_2);
 FUNC_0(VAR_1, &VAR_3->state);
}
