
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi {int num_queues; int * req_vqs; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_scsi*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct virtio_scsi *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = VAR_1->num_queues;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_0(VAR_1, &VAR_1->req_vqs[VAR_2],
     VAR_0);
}
