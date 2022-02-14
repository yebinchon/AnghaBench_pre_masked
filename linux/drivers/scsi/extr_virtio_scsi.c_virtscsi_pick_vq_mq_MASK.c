
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct virtio_scsi_vq {int dummy; } ;
struct virtio_scsi {struct virtio_scsi_vq* req_vqs; } ;
struct scsi_cmnd {int request; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static struct virtio_scsi_vq *FUNC_2(struct virtio_scsi *VAR_0,
        struct scsi_cmnd *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->request);
 u16 VAR_3 = FUNC_1(VAR_2);

 return &VAR_0->req_vqs[VAR_3];
}
