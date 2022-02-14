
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct hnae3_knic_private_info {size_t num_tc; } ;
struct TYPE_6__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {scalar_t__ qs_offset; int dwrr; int vport_id; struct hclge_dev* back; TYPE_3__ nic; } ;
struct TYPE_5__ {TYPE_1__* pg_info; } ;
struct hclge_dev {TYPE_2__ tm_info; } ;
struct TYPE_4__ {int * tc_dwrr; } ;


 int FUNC_0 (struct hclge_dev*,int ,int ) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_0)
{
 struct hnae3_knic_private_info *VAR_1 = &VAR_0->nic.kinfo;
 struct hclge_dev *VAR_2 = VAR_0->back;
 int VAR_3;
 u8 VAR_4;


 VAR_3 = FUNC_0(VAR_2, VAR_0->vport_id, VAR_0->dwrr);
 if (VAR_3)
  return VAR_3;


 for (VAR_4 = 0; VAR_4 < VAR_1->num_tc; VAR_4++) {
  VAR_3 = FUNC_1(
   VAR_2, VAR_0->qs_offset + VAR_4,
   VAR_2->tm_info.pg_info[0].tc_dwrr[VAR_4]);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
