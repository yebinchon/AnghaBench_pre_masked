
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int tqp_intr_reg_addr_list ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int num_msi_used; TYPE_1__* pdev; } ;
typedef int ring_reg_addr_list ;
typedef int common_reg_addr_list ;
typedef int cmdq_reg_addr_list ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*,int*) ;
 int FUNC_2 (struct hclge_dev*,int*,int*) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 struct hnae3_knic_private_info *VAR_7 = &VAR_2->kinfo;
 struct hclge_vport *VAR_8 = FUNC_3(VAR_2);
 struct hclge_dev *VAR_9 = VAR_8->back;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_9, &VAR_10, &VAR_11);
 if (VAR_15) {
  FUNC_0(&VAR_9->pdev->dev,
   "Get register number failed, ret = %d.\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_9, &VAR_12);
 if (VAR_15) {
  FUNC_0(&VAR_9->pdev->dev,
   "Get dfx reg len failed, ret = %d.\n", VAR_15);
  return VAR_15;
 }

 VAR_3 = sizeof(cmdq_reg_addr_list) / VAR_0 +
  VAR_1;
 VAR_4 = sizeof(common_reg_addr_list) / VAR_0 +
  VAR_1;
 VAR_5 = sizeof(ring_reg_addr_list) / VAR_0 +
  VAR_1;
 VAR_6 = sizeof(tqp_intr_reg_addr_list) / VAR_0 +
  VAR_1;
 VAR_13 = VAR_10 * sizeof(u32) / VAR_0 +
  VAR_1;
 VAR_14 = VAR_11 * sizeof(u64) / VAR_0 +
  VAR_1;

 return (VAR_3 + VAR_4 + VAR_5 * VAR_7->num_tqps +
  VAR_6 * (VAR_9->num_msi_used - 1) + VAR_13 +
  VAR_14) * VAR_0 + VAR_12;
}
