
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_vsock {int send_pkt_work; int send_pkt_list; int send_pkt_list_lock; struct vhost_virtqueue* vqs; int dev; int queued_replies; scalar_t__ guest_cid; } ;
struct vhost_virtqueue {int handle_kick; } ;
struct inode {int dummy; } ;
struct file {struct vhost_vsock* private_data; } ;


 int FUNC_0 (struct vhost_virtqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 struct vhost_virtqueue** FUNC_3 (int ,int,int) ;
 struct vhost_vsock* FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct vhost_virtqueue**,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_7 (struct vhost_vsock*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_11, struct file *VAR_12)
{
 struct vhost_virtqueue **VAR_13;
 struct vhost_vsock *VAR_14;
 int VAR_15;




 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_1 | VAR_7);
 if (!VAR_14)
  return -VAR_0;

 VAR_13 = FUNC_3(FUNC_0(VAR_14->vqs), sizeof(*VAR_13), VAR_1);
 if (!VAR_13) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_14->guest_cid = 0;

 FUNC_2(&VAR_14->queued_replies, 0);

 VAR_13[VAR_6] = &VAR_14->vqs[VAR_6];
 VAR_13[VAR_5] = &VAR_14->vqs[VAR_5];
 VAR_14->vqs[VAR_6].handle_kick = VAR_10;
 VAR_14->vqs[VAR_5].handle_kick = VAR_9;

 FUNC_6(&VAR_14->dev, VAR_13, FUNC_0(VAR_14->vqs),
         VAR_2, VAR_3,
         VAR_4);

 VAR_12->private_data = VAR_14;
 FUNC_5(&VAR_14->send_pkt_list_lock);
 FUNC_1(&VAR_14->send_pkt_list);
 FUNC_8(&VAR_14->send_pkt_work, VAR_8);
 return 0;

out:
 FUNC_7(VAR_14);
 return VAR_15;
}
