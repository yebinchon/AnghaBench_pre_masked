
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {int state; int dev; } ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hns3_nic_priv*) ;
 int FUNC_3 (struct hns3_nic_priv*) ;
 int FUNC_4 (struct hns3_nic_priv*) ;
 int FUNC_5 (struct hns3_nic_priv*) ;
 int FUNC_6 (struct hns3_nic_priv*) ;
 int FUNC_7 (struct hns3_nic_priv*) ;
 int FUNC_8 (struct hns3_nic_priv*) ;
 int FUNC_9 (struct hns3_nic_priv*) ;
 int FUNC_10 (struct hns3_nic_priv*) ;
 struct hns3_nic_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct hnae3_handle *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->kinfo.netdev;
 struct hns3_nic_priv *VAR_3 = FUNC_11(VAR_2);
 int VAR_4;


 FUNC_12(VAR_2);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto err_put_ring;

 FUNC_9(VAR_3);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  goto err_dealloc_vector;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto err_uninit_vector;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "hns3_client_start fail! ret=%d\n", VAR_4);
  goto err_uninit_ring;
 }

 FUNC_13(VAR_0, &VAR_3->state);

 return VAR_4;

err_uninit_ring:
 FUNC_10(VAR_3);
err_uninit_vector:
 FUNC_7(VAR_3);
err_dealloc_vector:
 FUNC_5(VAR_3);
err_put_ring:
 FUNC_8(VAR_3);

 return VAR_4;
}
