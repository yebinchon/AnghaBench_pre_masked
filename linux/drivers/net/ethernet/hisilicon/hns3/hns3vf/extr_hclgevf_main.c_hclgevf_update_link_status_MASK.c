
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae3_handle {struct hnae3_client* client; } ;
struct hnae3_client {TYPE_1__* ops; } ;
struct TYPE_5__ {int link; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;
struct hclgevf_dev {TYPE_3__ hw; int state; struct hnae3_client* roce_client; struct hnae3_handle nic; struct hnae3_handle roce; } ;
struct TYPE_4__ {int (* link_status_change ) (struct hnae3_handle*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hnae3_handle*,int) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct hclgevf_dev *VAR_1, int VAR_2)
{
 struct hnae3_handle *VAR_3 = &VAR_1->roce;
 struct hnae3_handle *VAR_4 = &VAR_1->nic;
 struct hnae3_client *VAR_5;
 struct hnae3_client *VAR_6;

 VAR_6 = VAR_4->client;
 VAR_5 = VAR_1->roce_client;

 VAR_2 =
  FUNC_2(VAR_0, &VAR_1->state) ? 0 : VAR_2;

 if (VAR_2 != VAR_1->hw.mac.link) {
  VAR_6->ops->link_status_change(VAR_4, !!VAR_2);
  if (VAR_5 && VAR_5->ops->link_status_change)
   VAR_5->ops->link_status_change(VAR_3, !!VAR_2);
  VAR_1->hw.mac.link = VAR_2;
 }
}
