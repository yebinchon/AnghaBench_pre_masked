
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vhost_virtqueue {struct vhost_dev* dev; } ;
struct vhost_iotlb_msg {int perm; int iova; int type; } ;
struct TYPE_4__ {struct vhost_iotlb_msg iotlb; } ;
struct TYPE_3__ {struct vhost_iotlb_msg iotlb; int type; } ;
struct vhost_msg_node {TYPE_2__ msg; TYPE_1__ msg_v2; } ;
struct vhost_dev {int read_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vhost_virtqueue*,int ) ;
 int FUNC_1 (struct vhost_dev*,int *,struct vhost_msg_node*) ;
 struct vhost_msg_node* FUNC_2 (struct vhost_virtqueue*,int ) ;

__attribute__((used)) static int FUNC_3(struct vhost_virtqueue *VAR_5, u64 VAR_6, int VAR_7)
{
 struct vhost_dev *VAR_8 = VAR_5->dev;
 struct vhost_msg_node *VAR_9;
 struct vhost_iotlb_msg *VAR_10;
 bool VAR_11 = FUNC_0(VAR_5, VAR_1);

 VAR_9 = FUNC_2(VAR_5, VAR_11 ? VAR_4 : VAR_3);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_11) {
  VAR_9->msg_v2.type = VAR_4;
  VAR_10 = &VAR_9->msg_v2.iotlb;
 } else {
  VAR_10 = &VAR_9->msg.iotlb;
 }

 VAR_10->type = VAR_2;
 VAR_10->iova = VAR_6;
 VAR_10->perm = VAR_7;

 FUNC_1(VAR_8, &VAR_8->read_list, VAR_9);

 return 0;
}
