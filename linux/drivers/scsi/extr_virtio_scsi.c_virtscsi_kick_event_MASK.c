
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_scsi_event_node {int event; int work; } ;
struct virtio_scsi_event {int dummy; } ;
struct TYPE_2__ {int vq_lock; int vq; } ;
struct virtio_scsi {TYPE_1__ event_vq; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct scatterlist*,int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,struct scatterlist*,int,struct virtio_scsi_event_node*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct virtio_scsi *VAR_2,
          struct virtio_scsi_event_node *VAR_3)
{
 int VAR_4;
 struct scatterlist VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_3->work, VAR_1);
 FUNC_1(&VAR_5, &VAR_3->event, sizeof(struct virtio_scsi_event));

 FUNC_2(&VAR_2->event_vq.vq_lock, VAR_6);

 VAR_4 = FUNC_4(VAR_2->event_vq.vq, &VAR_5, 1, VAR_3,
      VAR_0);
 if (!VAR_4)
  FUNC_5(VAR_2->event_vq.vq);

 FUNC_3(&VAR_2->event_vq.vq_lock, VAR_6);

 return VAR_4;
}
