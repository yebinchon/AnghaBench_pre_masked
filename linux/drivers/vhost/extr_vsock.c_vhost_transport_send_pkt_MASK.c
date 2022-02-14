
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst_cid; } ;
struct virtio_vsock_pkt {int len; int list; scalar_t__ reply; TYPE_1__ hdr; } ;
struct vhost_vsock {int send_pkt_work; int dev; int send_pkt_list_lock; int send_pkt_list; int queued_replies; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct vhost_vsock* FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct virtio_vsock_pkt*) ;

__attribute__((used)) static int
FUNC_10(struct virtio_vsock_pkt *VAR_1)
{
 struct vhost_vsock *VAR_2;
 int VAR_3 = VAR_1->len;

 FUNC_3();


 VAR_2 = FUNC_7(FUNC_1(VAR_1->hdr.dst_cid));
 if (!VAR_2) {
  FUNC_4();
  FUNC_9(VAR_1);
  return -VAR_0;
 }

 if (VAR_1->reply)
  FUNC_0(&VAR_2->queued_replies);

 FUNC_5(&VAR_2->send_pkt_list_lock);
 FUNC_2(&VAR_1->list, &VAR_2->send_pkt_list);
 FUNC_6(&VAR_2->send_pkt_list_lock);

 FUNC_8(&VAR_2->dev, &VAR_2->send_pkt_work);

 FUNC_4();
 return VAR_3;
}
