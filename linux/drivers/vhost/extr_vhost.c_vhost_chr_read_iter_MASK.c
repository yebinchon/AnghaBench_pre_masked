
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vhost_iotlb_msg {scalar_t__ type; } ;
struct TYPE_4__ {struct vhost_iotlb_msg iotlb; } ;
struct TYPE_3__ {int type; struct vhost_iotlb_msg iotlb; } ;
struct vhost_msg_node {TYPE_2__ msg_v2; TYPE_1__ msg; } ;
struct vhost_msg {int dummy; } ;
struct vhost_dev {int pending_list; int wait; int iotlb; int read_list; } ;
struct iov_iter {int dummy; } ;
typedef unsigned int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 unsigned int FUNC_2 (void*,unsigned int,struct iov_iter*) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (struct vhost_msg_node*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 struct vhost_msg_node* FUNC_9 (struct vhost_dev*,int *) ;
 int FUNC_10 (struct vhost_dev*,int *,struct vhost_msg_node*) ;
 int VAR_6 ;

ssize_t FUNC_11(struct vhost_dev *VAR_7, struct iov_iter *VAR_8,
       int VAR_9)
{
 FUNC_1(VAR_6);
 struct vhost_msg_node *VAR_10;
 ssize_t VAR_11 = 0;
 unsigned VAR_12 = sizeof(struct vhost_msg);

 if (FUNC_4(VAR_8) < VAR_12)
  return 0;

 while (1) {
  if (!VAR_9)
   FUNC_6(&VAR_7->wait, &VAR_6,
     VAR_3);

  VAR_10 = FUNC_9(VAR_7, &VAR_7->read_list);
  if (VAR_10)
   break;
  if (VAR_9) {
   VAR_11 = -VAR_0;
   break;
  }
  if (FUNC_8(VAR_5)) {
   VAR_11 = -VAR_2;
   break;
  }
  if (!VAR_7->iotlb) {
   VAR_11 = -VAR_1;
   break;
  }

  FUNC_7();
 }

 if (!VAR_9)
  FUNC_3(&VAR_7->wait, &VAR_6);

 if (VAR_10) {
  struct vhost_iotlb_msg *VAR_13;
  void *VAR_14 = &VAR_10->msg;

  switch (VAR_10->msg.type) {
  case 129:
   VAR_12 = sizeof(VAR_10->msg);
   VAR_13 = &VAR_10->msg.iotlb;
   break;
  case 128:
   VAR_12 = sizeof(VAR_10->msg_v2);
   VAR_13 = &VAR_10->msg_v2.iotlb;
   break;
  default:
   FUNC_0();
   break;
  }

  VAR_11 = FUNC_2(VAR_14, VAR_12, VAR_8);
  if (VAR_11 != VAR_12 || VAR_13->type != VAR_4) {
   FUNC_5(VAR_10);
   return VAR_11;
  }
  FUNC_10(VAR_7, &VAR_7->pending_list, VAR_10);
 }

 return VAR_11;
}
