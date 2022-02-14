
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct hnae3_handle {int pdev; TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* reset_event ) (int ,struct hnae3_handle*) ;} ;


 int FUNC_0 (struct net_device*) ;
 struct hns3_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct hns3_nic_priv *VAR_1 = FUNC_1(VAR_0);
 struct hnae3_handle *VAR_2 = VAR_1->ae_handle;

 if (!FUNC_0(VAR_0))
  return;




 if (VAR_2->ae_algo->ops->reset_event)
  VAR_2->ae_algo->ops->reset_event(VAR_2->pdev, VAR_2);
}
