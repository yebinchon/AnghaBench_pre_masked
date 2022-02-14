
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_msg_node {int node; } ;
struct vhost_dev {int wait; int iotlb_lock; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct vhost_dev *VAR_2, struct list_head *VAR_3,
         struct vhost_msg_node *VAR_4)
{
 FUNC_1(&VAR_2->iotlb_lock);
 FUNC_0(&VAR_4->node, VAR_3);
 FUNC_2(&VAR_2->iotlb_lock);

 FUNC_3(&VAR_2->wait, VAR_0 | VAR_1);
}
