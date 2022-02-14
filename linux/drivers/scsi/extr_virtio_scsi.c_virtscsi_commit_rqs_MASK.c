
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct virtio_scsi {int * req_vqs; } ;
struct Scsi_Host {int dummy; } ;


 struct virtio_scsi* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_0, u16 VAR_1)
{
 struct virtio_scsi *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->req_vqs[VAR_1]);
}
