
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct hnae3_knic_private_info {size_t num_tc; } ;
struct TYPE_2__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {size_t qs_offset; TYPE_1__ nic; } ;
struct hclge_dev {scalar_t__ tx_sch_mode; size_t num_alloc_vport; struct hclge_vport* vport; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct hclge_dev*,size_t,size_t) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_vport*) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_4)
{
 struct hclge_vport *VAR_5 = VAR_4->vport;
 int VAR_6;
 u32 VAR_7, VAR_8;

 if (VAR_4->tx_sch_mode == VAR_1) {

  for (VAR_8 = 0; VAR_8 < VAR_4->num_alloc_vport; VAR_8++) {
   struct hnae3_knic_private_info *VAR_9 =
    &VAR_5[VAR_8].nic.kinfo;

   for (VAR_7 = 0; VAR_7 < VAR_9->num_tc; VAR_7++) {
    VAR_6 = FUNC_0(
     VAR_4, VAR_5[VAR_8].qs_offset + VAR_7, VAR_7);
    if (VAR_6)
     return VAR_6;
   }
  }
 } else if (VAR_4->tx_sch_mode == VAR_2) {

  for (VAR_8 = 0; VAR_8 < VAR_4->num_alloc_vport; VAR_8++)
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_6 = FUNC_0(
     VAR_4, VAR_5[VAR_8].qs_offset + VAR_7, VAR_8);
    if (VAR_6)
     return VAR_6;
   }
 } else {
  return -VAR_0;
 }


 for (VAR_7 = 0; VAR_7 < VAR_4->num_alloc_vport; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;

  VAR_5++;
 }

 return 0;
}
