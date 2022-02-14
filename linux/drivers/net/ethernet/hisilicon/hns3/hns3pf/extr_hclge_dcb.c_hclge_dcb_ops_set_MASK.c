
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_knic_private_info {int * dcb_ops; } ;
struct TYPE_2__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {scalar_t__ vport_id; TYPE_1__ nic; } ;
struct hclge_dev {int dcbx_cap; struct hclge_vport* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclge_dev*) ;
 int VAR_2 ;

void FUNC_1(struct hclge_dev *VAR_3)
{
 struct hclge_vport *VAR_4 = VAR_3->vport;
 struct hnae3_knic_private_info *VAR_5;




 if (!FUNC_0(VAR_3) ||
     VAR_4->vport_id != 0)
  return;

 VAR_5 = &VAR_4->nic.kinfo;
 VAR_5->dcb_ops = &VAR_2;
 VAR_3->dcbx_cap = VAR_1 | VAR_0;
}
