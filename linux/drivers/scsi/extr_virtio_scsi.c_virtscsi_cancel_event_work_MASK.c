
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vq_lock; } ;
struct virtio_scsi {int stop_events; TYPE_2__* event_list; TYPE_1__ event_vq; } ;
struct TYPE_4__ {int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct virtio_scsi *VAR_1)
{
 int VAR_2;


 FUNC_1(&VAR_1->event_vq.vq_lock);
 VAR_1->stop_events = 1;
 FUNC_2(&VAR_1->event_vq.vq_lock);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->event_list[VAR_2].work);
}
