
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_handle {int port_base_vlan_state; } ;
struct hclgevf_dev {TYPE_1__* pdev; struct hnae3_handle nic; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hclgevf_dev *VAR_2)
{
 struct hnae3_handle *VAR_3 = &VAR_2->nic;
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1,
       VAR_0,
       ((void*)0), 0, 1, &VAR_4, sizeof(u8));
 if (VAR_5) {
  FUNC_0(&VAR_2->pdev->dev,
   "VF request to get port based vlan state failed %d",
   VAR_5);
  return VAR_5;
 }

 VAR_3->port_base_vlan_state = VAR_4;

 return 0;
}
