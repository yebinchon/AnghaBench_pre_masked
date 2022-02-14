
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
struct hclge_vport {scalar_t__ qs_offset; int vport_id; struct hclge_dev* back; TYPE_3__ nic; } ;
struct TYPE_5__ {TYPE_1__* tc_info; } ;
struct hclge_dev {TYPE_2__ tm_info; } ;
struct TYPE_4__ {size_t tc_sch_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclge_dev*,int ) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_2)
{
 struct hnae3_knic_private_info *VAR_3 = &VAR_2->nic.kinfo;
 struct hclge_dev *VAR_4 = VAR_2->back;
 int VAR_5;
 u8 VAR_6;

 if (VAR_2->vport_id >= VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2->vport_id);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_tc; VAR_6++) {
  u8 VAR_7 = VAR_4->tm_info.tc_info[VAR_6].tc_sch_mode;

  VAR_5 = FUNC_1(VAR_4, VAR_2->qs_offset + VAR_6,
      VAR_7);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
