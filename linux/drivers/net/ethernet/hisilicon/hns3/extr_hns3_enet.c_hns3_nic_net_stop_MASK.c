
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {int ae_handle; int state; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct TYPE_4__ {int (* set_timer_task ) (int ,int) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct hns3_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hnae3_handle*,int ,struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct hns3_nic_priv *VAR_3 = FUNC_2(VAR_2);
 struct hnae3_handle *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_7(VAR_0, &VAR_3->state))
  return 0;

 FUNC_4(VAR_4, VAR_1, VAR_2, "net stop\n");

 if (VAR_4->ae_algo->ops->set_timer_task)
  VAR_4->ae_algo->ops->set_timer_task(VAR_3->ae_handle, 0);

 FUNC_5(VAR_2);
 FUNC_3(VAR_2);

 FUNC_1(VAR_2);

 return 0;
}
