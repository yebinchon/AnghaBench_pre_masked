
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int mutex; } ;
struct vhost_scsi_inflight {int comp; int kref; } ;
struct vhost_scsi {TYPE_1__* vqs; } ;
struct TYPE_2__ {int inflight_idx; struct vhost_scsi_inflight* inflights; struct vhost_virtqueue vq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vhost_scsi *VAR_1,
        struct vhost_scsi_inflight *VAR_2[])
{
 struct vhost_scsi_inflight *VAR_3;
 struct vhost_virtqueue *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = &VAR_1->vqs[VAR_6].vq;

  FUNC_2(&VAR_4->mutex);


  VAR_5 = VAR_1->vqs[VAR_6].inflight_idx;
  if (VAR_2)
   VAR_2[VAR_6] = &VAR_1->vqs[VAR_6].inflights[VAR_5];


  VAR_1->vqs[VAR_6].inflight_idx = VAR_5 ^ 1;
  VAR_3 = &VAR_1->vqs[VAR_6].inflights[VAR_5 ^ 1];
  FUNC_1(&VAR_3->kref);
  FUNC_0(&VAR_3->comp);

  FUNC_3(&VAR_4->mutex);
 }
}
