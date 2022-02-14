
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct vhost_msg_node {TYPE_1__ msg; struct vhost_virtqueue* vq; } ;


 int VAR_0 ;
 struct vhost_msg_node* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

struct vhost_msg_node *FUNC_2(struct vhost_virtqueue *VAR_1, int VAR_2)
{
 struct vhost_msg_node *VAR_3 = FUNC_0(sizeof *VAR_3, VAR_0);
 if (!VAR_3)
  return ((void*)0);


 FUNC_1(&VAR_3->msg, 0, sizeof VAR_3->msg);
 VAR_3->vq = VAR_1;
 VAR_3->msg.type = VAR_2;
 return VAR_3;
}
