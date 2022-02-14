
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {int ae_handle; } ;
struct hnae3_knic_private_info {int * prio_tc; } ;
struct hnae3_handle {TYPE_2__* ae_algo; struct hnae3_knic_private_info kinfo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_timer_task ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hns3_nic_priv*) ;
 struct hnae3_handle* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 struct hns3_nic_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct hnae3_handle*,int ,struct net_device*,char*) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3)
{
 struct hns3_nic_priv *VAR_4 = FUNC_6(VAR_3);
 struct hnae3_handle *VAR_5 = FUNC_1(VAR_3);
 struct hnae3_knic_private_info *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_3(VAR_3))
  return -VAR_0;

 FUNC_8(VAR_3);

 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8) {
  FUNC_5(VAR_3, "net up fail, ret=%d!\n", VAR_8);
  return VAR_8;
 }

 VAR_6 = &VAR_5->kinfo;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_7(VAR_3, VAR_7, VAR_6->prio_tc[VAR_7]);

 if (VAR_5->ae_algo->ops->set_timer_task)
  VAR_5->ae_algo->ops->set_timer_task(VAR_4->ae_handle, 1);

 FUNC_0(VAR_4);

 FUNC_9(VAR_5, VAR_2, VAR_3, "net open\n");

 return 0;
}
