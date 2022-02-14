
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_nic_priv {int state; } ;
struct hnae3_knic_private_info {int netdev; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct hns3_nic_priv* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hnae3_handle *VAR_1)
{
 struct hnae3_knic_private_info *VAR_2 = &VAR_1->kinfo;
 struct hns3_nic_priv *VAR_3 = FUNC_3(VAR_2->netdev);
 int VAR_4 = 0;

 FUNC_0(VAR_0, &VAR_3->state);

 if (FUNC_4(VAR_2->netdev)) {
  VAR_4 = FUNC_1(VAR_2->netdev);
  if (VAR_4) {
   FUNC_5(VAR_0, &VAR_3->state);
   FUNC_2(VAR_2->netdev,
       "net up fail, ret=%d!\n", VAR_4);
   return VAR_4;
  }
 }

 return VAR_4;
}
