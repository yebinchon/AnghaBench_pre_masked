
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ phydev; int dev_addr; } ;
struct hns_nic_priv {int state; int service_timer; struct hnae_handle* ae_handle; } ;
struct hnae_handle {int q_num; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_mac_addr ) (struct hnae_handle*,int ) ;int (* start ) (struct hnae_handle*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,struct hns_nic_priv*) ;
 int FUNC_2 (struct hns_nic_priv*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 struct hns_nic_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct hnae_handle*,int ) ;
 int FUNC_12 (struct hnae_handle*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_3)
{
 struct hns_nic_priv *VAR_4 = FUNC_7(VAR_3);
 struct hnae_handle *VAR_5 = VAR_4->ae_handle;
 int VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_13(VAR_0, &VAR_4->state))
  return 0;

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 != 0) {
  FUNC_6(VAR_3, "hns init irq failed! ret=%d\n", VAR_8);
  return VAR_8;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->q_num * 2; VAR_6++) {
  VAR_8 = FUNC_4(VAR_3, VAR_6);
  if (VAR_8)
   goto out_has_some_queues;
 }

 VAR_8 = VAR_5->dev->ops->set_mac_addr(VAR_5, VAR_3->dev_addr);
 if (VAR_8)
  goto out_set_mac_addr_err;

 VAR_8 = VAR_5->dev->ops->start ? VAR_5->dev->ops->start(VAR_5) : 0;
 if (VAR_8)
  goto out_start_err;

 if (VAR_3->phydev)
  FUNC_9(VAR_3->phydev);

 FUNC_0(VAR_0, &VAR_4->state);
 (void)FUNC_5(&VAR_4->service_timer, VAR_2 + VAR_1);

 return 0;

out_start_err:
 FUNC_8(VAR_3);
out_set_mac_addr_err:
out_has_some_queues:
 for (VAR_7 = VAR_6 - 1; VAR_7 >= 0; VAR_7--)
  FUNC_3(VAR_3, VAR_7);

 FUNC_1(VAR_5->q_num, VAR_4);
 FUNC_10(VAR_0, &VAR_4->state);

 return VAR_8;
}
