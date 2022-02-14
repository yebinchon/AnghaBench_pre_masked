
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int vdev; } ;
struct virtio_scsi {int ctrl_vq; } ;
struct Scsi_Host {int dummy; } ;


 struct virtio_scsi* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct virtio_scsi*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_1->vdev);
 struct virtio_scsi *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_3, &VAR_3->ctrl_vq, VAR_0);
}
