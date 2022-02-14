
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_event_node {int work; } ;
struct virtio_scsi {int stop_events; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct virtio_scsi *VAR_1, void *VAR_2)
{
 struct virtio_scsi_event_node *VAR_3 = VAR_2;

 if (!VAR_1->stop_events)
  FUNC_0(VAR_0, &VAR_3->work);
}
