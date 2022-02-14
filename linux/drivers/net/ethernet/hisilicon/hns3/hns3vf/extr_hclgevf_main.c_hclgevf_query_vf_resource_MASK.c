
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclgevf_query_res_cmd {int vf_intr_vector_number; int msixcap_localid_ba_rocee; } ;
struct hclgevf_dev {int roce_base_msix_offset; int num_roce_msix; int num_nic_msix; int num_msi; TYPE_1__* pdev; int hw; } ;
struct hclgevf_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclgevf_desc*,int) ;
 int FUNC_3 (struct hclgevf_desc*,int ,int) ;
 scalar_t__ FUNC_4 (struct hclgevf_dev*) ;
 void* FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hclgevf_dev *VAR_7)
{
 struct hclgevf_query_res_cmd *VAR_8;
 struct hclgevf_desc VAR_9;
 int VAR_10;

 FUNC_3(&VAR_9, VAR_3, 1);
 VAR_10 = FUNC_2(&VAR_7->hw, &VAR_9, 1);
 if (VAR_10) {
  FUNC_1(&VAR_7->pdev->dev,
   "query vf resource failed, ret = %d.\n", VAR_10);
  return VAR_10;
 }

 VAR_8 = (struct hclgevf_query_res_cmd *)VAR_9.data;

 if (FUNC_4(VAR_7)) {
  VAR_7->roce_base_msix_offset =
  FUNC_5(FUNC_0(VAR_8->msixcap_localid_ba_rocee),
    VAR_1,
    VAR_2);
  VAR_7->num_roce_msix =
  FUNC_5(FUNC_0(VAR_8->vf_intr_vector_number),
    VAR_4, VAR_5);


  VAR_7->num_nic_msix = VAR_7->num_roce_msix;




  VAR_7->num_msi = VAR_7->num_roce_msix +
    VAR_7->roce_base_msix_offset;
 } else {
  VAR_7->num_msi =
  FUNC_5(FUNC_0(VAR_8->vf_intr_vector_number),
    VAR_4, VAR_5);

  VAR_7->num_nic_msix = VAR_7->num_msi;
 }

 if (VAR_7->num_nic_msix < VAR_6) {
  FUNC_1(&VAR_7->pdev->dev,
   "Just %u msi resources, not enough for vf(min:2).\n",
   VAR_7->num_nic_msix);
  return -VAR_0;
 }

 return 0;
}
