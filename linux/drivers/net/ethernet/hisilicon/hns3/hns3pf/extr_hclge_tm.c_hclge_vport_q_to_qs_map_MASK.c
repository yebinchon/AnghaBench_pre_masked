
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct hnae3_tc_info {size_t tqp_count; size_t tqp_offset; } ;
struct hnae3_queue {int dummy; } ;
struct hnae3_knic_private_info {size_t num_tc; struct hnae3_tc_info* tc_info; struct hnae3_queue** tqp; } ;
struct TYPE_2__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {size_t qs_offset; TYPE_1__ nic; } ;
struct hclge_dev {int dummy; } ;


 int FUNC_0 (struct hnae3_queue*) ;
 int FUNC_1 (struct hclge_dev*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_0,
       struct hclge_vport *VAR_1)
{
 struct hnae3_knic_private_info *VAR_2 = &VAR_1->nic.kinfo;
 struct hnae3_queue **VAR_3 = VAR_2->tqp;
 struct hnae3_tc_info *VAR_4;
 u32 VAR_5, VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_tc; VAR_5++) {
  VAR_4 = &VAR_2->tc_info[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_4->tqp_count; VAR_6++) {
   struct hnae3_queue *VAR_8 = VAR_3[VAR_4->tqp_offset + VAR_6];

   VAR_7 = FUNC_1(VAR_0,
             FUNC_0(VAR_8),
             VAR_1->qs_offset + VAR_5);
   if (VAR_7)
    return VAR_7;
  }
 }

 return 0;
}
