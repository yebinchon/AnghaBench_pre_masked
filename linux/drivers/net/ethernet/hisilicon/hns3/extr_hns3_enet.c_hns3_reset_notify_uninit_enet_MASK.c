
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {int ae_handle; int state; } ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct hnae3_handle*,int) ;
 int FUNC_1 (struct hns3_nic_priv*) ;
 int FUNC_2 (struct hns3_nic_priv*) ;
 int FUNC_3 (struct hns3_nic_priv*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hns3_nic_priv*) ;
 int FUNC_6 (struct hns3_nic_priv*) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct hns3_nic_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct hnae3_handle *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->kinfo.netdev;
 struct hns3_nic_priv *VAR_3 = FUNC_8(VAR_2);
 int VAR_4;

 if (!FUNC_10(VAR_0, &VAR_3->state)) {
  FUNC_9(VAR_2, "already uninitialized\n");
  return 0;
 }

 FUNC_0(VAR_1, 1);
 FUNC_4(VAR_3->ae_handle);

 FUNC_2(VAR_3);

 FUNC_5(VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_7(VAR_2, "dealloc vector error\n");

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  FUNC_7(VAR_2, "uninit ring error\n");

 FUNC_3(VAR_3);

 return VAR_4;
}
