
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int handle_kick; } ;
struct vhost_scsi {int vs_events_missed; int dev; TYPE_1__* vqs; scalar_t__ vs_events_nr; int vs_event_work; int vs_completion_work; } ;
struct inode {int dummy; } ;
struct file {struct vhost_scsi* private_data; } ;
struct TYPE_2__ {struct vhost_virtqueue vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct vhost_virtqueue** FUNC_0 (int,int,int) ;
 int FUNC_1 (struct vhost_scsi*) ;
 struct vhost_scsi* FUNC_2 (int,int) ;
 int FUNC_3 (int *,struct vhost_virtqueue**,int,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct vhost_scsi*,int *) ;
 int FUNC_5 (int *,int ) ;
 struct vhost_scsi* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_15, struct file *VAR_16)
{
 struct vhost_scsi *VAR_17;
 struct vhost_virtqueue **VAR_18;
 int VAR_19 = -VAR_0, VAR_20;

 VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_1 | VAR_8 | VAR_9);
 if (!VAR_17) {
  VAR_17 = FUNC_6(sizeof(*VAR_17));
  if (!VAR_17)
   goto err_vs;
 }

 VAR_18 = FUNC_0(VAR_3, sizeof(*VAR_18), VAR_1);
 if (!VAR_18)
  goto err_vqs;

 FUNC_5(&VAR_17->vs_completion_work, VAR_10);
 FUNC_5(&VAR_17->vs_event_work, VAR_13);

 VAR_17->vs_events_nr = 0;
 VAR_17->vs_events_missed = 0;

 VAR_18[VAR_4] = &VAR_17->vqs[VAR_4].vq;
 VAR_18[VAR_5] = &VAR_17->vqs[VAR_5].vq;
 VAR_17->vqs[VAR_4].vq.handle_kick = VAR_11;
 VAR_17->vqs[VAR_5].vq.handle_kick = VAR_12;
 for (VAR_20 = VAR_6; VAR_20 < VAR_3; VAR_20++) {
  VAR_18[VAR_20] = &VAR_17->vqs[VAR_20].vq;
  VAR_17->vqs[VAR_20].vq.handle_kick = VAR_14;
 }
 FUNC_3(&VAR_17->dev, VAR_18, VAR_3, VAR_2,
         VAR_7, 0);

 FUNC_4(VAR_17, ((void*)0));

 VAR_16->private_data = VAR_17;
 return 0;

err_vqs:
 FUNC_1(VAR_17);
err_vs:
 return VAR_19;
}
