
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hnae3_client {TYPE_2__* ops; } ;
struct TYPE_7__ {int link; } ;
struct TYPE_8__ {TYPE_3__ mac; } ;
struct hclge_dev {int num_vmdq_vport; TYPE_4__ hw; TYPE_1__* vport; struct hnae3_client* nic_client; struct hnae3_client* roce_client; } ;
struct TYPE_6__ {int (* link_status_change ) (struct hnae3_handle*,int) ;} ;
struct TYPE_5__ {struct hnae3_handle roce; struct hnae3_handle nic; } ;


 int FUNC_0 (struct hclge_dev*,int) ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hnae3_handle*,int) ;
 int FUNC_3 (struct hnae3_handle*,int) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_0)
{
 struct hnae3_client *VAR_1 = VAR_0->roce_client;
 struct hnae3_client *VAR_2 = VAR_0->nic_client;
 struct hnae3_handle *VAR_3;
 struct hnae3_handle *VAR_4;
 int VAR_5;
 int VAR_6;

 if (!VAR_2)
  return;
 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 != VAR_0->hw.mac.link) {
  for (VAR_6 = 0; VAR_6 < VAR_0->num_vmdq_vport + 1; VAR_6++) {
   VAR_4 = &VAR_0->vport[VAR_6].nic;
   VAR_2->ops->link_status_change(VAR_4, VAR_5);
   FUNC_0(VAR_0, VAR_5);
   VAR_3 = &VAR_0->vport[VAR_6].roce;
   if (VAR_1 && VAR_1->ops->link_status_change)
    VAR_1->ops->link_status_change(VAR_3,
         VAR_5);
  }
  VAR_0->hw.mac.link = VAR_5;
 }
}
