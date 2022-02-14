
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ phydev; } ;
struct hns_nic_priv {scalar_t__ ring_data; TYPE_2__* ae_handle; scalar_t__ link; int service_timer; int state; } ;
struct hnae_ae_ops {int (* stop ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int q_num; TYPE_1__* dev; } ;
struct TYPE_3__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (scalar_t__) ;
 struct hns_nic_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_1)
{
 int VAR_2;
 struct hnae_ae_ops *VAR_3;
 struct hns_nic_priv *VAR_4 = FUNC_3(VAR_1);

 if (FUNC_9(VAR_0, &VAR_4->state))
  return;

 (void)FUNC_0(&VAR_4->service_timer);
 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 VAR_4->link = 0;

 if (VAR_1->phydev)
  FUNC_7(VAR_1->phydev);

 VAR_3 = VAR_4->ae_handle->dev->ops;

 if (VAR_3->stop)
  VAR_3->stop(VAR_4->ae_handle);

 FUNC_6(VAR_1);

 for (VAR_2 = VAR_4->ae_handle->q_num - 1; VAR_2 >= 0; VAR_2--) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_2 + VAR_4->ae_handle->q_num);


  FUNC_2(VAR_4->ring_data + VAR_2);
 }
}
