
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int index; int vdev; } ;
struct virtio_scsi_vq {int dummy; } ;
struct virtio_scsi {struct virtio_scsi_vq* req_vqs; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct virtio_scsi* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct virtio_scsi*,struct virtio_scsi_vq*,int ) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_2->vdev);
 struct virtio_scsi *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_2->index - VAR_0;
 struct virtio_scsi_vq *VAR_6 = &VAR_4->req_vqs[VAR_5];

 FUNC_2(VAR_4, VAR_6, VAR_1);
}
