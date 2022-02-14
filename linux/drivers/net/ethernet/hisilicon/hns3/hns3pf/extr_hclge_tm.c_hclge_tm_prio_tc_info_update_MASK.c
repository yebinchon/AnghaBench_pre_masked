
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct hnae3_knic_private_info {void** prio_tc; } ;
struct TYPE_4__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {TYPE_2__ nic; } ;
struct TYPE_3__ {void** prio_tc; } ;
struct hclge_dev {size_t num_alloc_vport; TYPE_1__ tm_info; struct hclge_vport* vport; } ;


 size_t VAR_0 ;

void FUNC_0(struct hclge_dev *VAR_1, u8 *VAR_2)
{
 struct hclge_vport *VAR_3 = VAR_1->vport;
 struct hnae3_knic_private_info *VAR_4;
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_1->tm_info.prio_tc[VAR_5] = VAR_2[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_1->num_alloc_vport; VAR_6++) {
   VAR_4 = &VAR_3[VAR_6].nic.kinfo;
   VAR_4->prio_tc[VAR_5] = VAR_2[VAR_5];
  }
 }
}
