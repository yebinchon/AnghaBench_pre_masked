
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vhost_virtqueue {int dummy; } ;
struct TYPE_3__ {void* reason; void* event; } ;
struct vhost_scsi_evt {TYPE_1__ event; } ;
struct vhost_scsi {scalar_t__ vs_events_nr; int vs_events_missed; TYPE_2__* vqs; } ;
struct TYPE_4__ {struct vhost_virtqueue vq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (struct vhost_virtqueue*,int ) ;
 struct vhost_scsi_evt* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vhost_virtqueue*,char*) ;

__attribute__((used)) static struct vhost_scsi_evt *
FUNC_3(struct vhost_scsi *VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 struct vhost_virtqueue *VAR_6 = &VAR_3->vqs[VAR_2].vq;
 struct vhost_scsi_evt *VAR_7;

 if (VAR_3->vs_events_nr > VAR_1) {
  VAR_3->vs_events_missed = 1;
  return ((void*)0);
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_2(VAR_6, "Failed to allocate vhost_scsi_evt\n");
  VAR_3->vs_events_missed = 1;
  return ((void*)0);
 }

 VAR_7->event.event = FUNC_0(VAR_6, VAR_4);
 VAR_7->event.reason = FUNC_0(VAR_6, VAR_5);
 VAR_3->vs_events_nr++;

 return VAR_7;
}
