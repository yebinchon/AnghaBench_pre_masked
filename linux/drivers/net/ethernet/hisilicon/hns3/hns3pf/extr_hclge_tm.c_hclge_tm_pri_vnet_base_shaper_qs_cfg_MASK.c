
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct hnae3_knic_private_info {size_t num_tc; } ;
struct TYPE_6__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {struct hclge_dev* back; TYPE_3__ nic; } ;
struct TYPE_5__ {TYPE_1__* tc_info; } ;
struct hclge_dev {TYPE_2__ tm_info; } ;
struct TYPE_4__ {int bw_limit; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct hclge_vport *VAR_1)
{
 struct hnae3_knic_private_info *VAR_2 = &VAR_1->nic.kinfo;
 struct hclge_dev *VAR_3 = VAR_1->back;
 u8 VAR_4, VAR_5, VAR_6;
 u32 VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_tc; VAR_7++) {
  VAR_8 = FUNC_0(
     VAR_3->tm_info.tc_info[VAR_7].bw_limit,
     VAR_0,
     &VAR_5, &VAR_4, &VAR_6);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
