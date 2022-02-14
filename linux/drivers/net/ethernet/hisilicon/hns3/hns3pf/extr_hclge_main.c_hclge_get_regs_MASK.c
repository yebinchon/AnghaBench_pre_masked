
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hnae3_knic_private_info {int dummy; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int fw_version; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*,int*,struct hnae3_knic_private_info*) ;
 int FUNC_2 (struct hclge_dev*,int,int*) ;
 int FUNC_3 (struct hclge_dev*,int,int*) ;
 int FUNC_4 (struct hclge_dev*,int*) ;
 int FUNC_5 (struct hclge_dev*,int*,int*) ;
 struct hclge_vport* FUNC_6 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_7(struct hnae3_handle *VAR_3, u32 *VAR_4,
      void *VAR_5)
{
 struct hnae3_knic_private_info *VAR_6 = &VAR_3->kinfo;
 struct hclge_vport *VAR_7 = FUNC_6(VAR_3);
 struct hclge_dev *VAR_8 = VAR_7->back;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u32 *VAR_15 = VAR_5;

 *VAR_4 = VAR_8->fw_version;

 VAR_14 = FUNC_5(VAR_8, &VAR_9, &VAR_10);
 if (VAR_14) {
  FUNC_0(&VAR_8->pdev->dev,
   "Get register number failed, ret = %d.\n", VAR_14);
  return;
 }

 VAR_15 += FUNC_1(VAR_8, VAR_15, VAR_6);

 VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_15);
 if (VAR_14) {
  FUNC_0(&VAR_8->pdev->dev,
   "Get 32 bit register failed, ret = %d.\n", VAR_14);
  return;
 }
 VAR_12 = VAR_9;
 VAR_15 += VAR_12;
 VAR_13 = VAR_0 - (VAR_12 & VAR_1);
 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
  *VAR_15++ = VAR_2;

 VAR_14 = FUNC_3(VAR_8, VAR_10, VAR_15);
 if (VAR_14) {
  FUNC_0(&VAR_8->pdev->dev,
   "Get 64 bit register failed, ret = %d.\n", VAR_14);
  return;
 }
 VAR_12 = VAR_10 * 2;
 VAR_15 += VAR_12;
 VAR_13 = VAR_0 - (VAR_12 & VAR_1);
 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
  *VAR_15++ = VAR_2;

 VAR_14 = FUNC_4(VAR_8, VAR_15);
 if (VAR_14)
  FUNC_0(&VAR_8->pdev->dev,
   "Get dfx register failed, ret = %d.\n", VAR_14);
}
