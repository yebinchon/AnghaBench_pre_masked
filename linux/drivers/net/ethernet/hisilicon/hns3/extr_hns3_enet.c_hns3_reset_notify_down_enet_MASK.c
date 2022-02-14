
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hns3_nic_priv {int state; } ;
struct hnae3_knic_private_info {struct net_device* netdev; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; int pdev; } ;
struct hnae3_ae_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct hnae3_ae_dev*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct hns3_nic_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct hnae3_ae_dev* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct hnae3_handle *VAR_1)
{
 struct hnae3_ae_dev *VAR_2 = FUNC_6(VAR_1->pdev);
 struct hnae3_knic_private_info *VAR_3 = &VAR_1->kinfo;
 struct net_device *VAR_4 = VAR_3->netdev;
 struct hns3_nic_priv *VAR_5 = FUNC_4(VAR_4);

 if (FUNC_7(VAR_0, &VAR_5->state))
  return 0;





 if (FUNC_1(VAR_2)) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_4, 0);
 }

 if (!FUNC_5(VAR_4))
  return 0;

 return FUNC_2(VAR_4);
}
