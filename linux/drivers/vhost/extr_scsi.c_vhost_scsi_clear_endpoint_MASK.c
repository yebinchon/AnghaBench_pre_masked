
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct vhost_virtqueue {int mutex; int * private_data; } ;
struct vhost_scsi_tport {int tport_name; } ;
struct TYPE_4__ {int cg_item; } ;
struct se_portal_group {TYPE_1__ tpg_group; } ;
struct vhost_scsi_tpg {int tv_tpg_mutex; struct se_portal_group se_tpg; int * vhost_scsi; int tv_tpg_vhost_count; int tport_tpgt; struct vhost_scsi_tport* tport; } ;
struct vhost_scsi_target {int vhost_tpgt; int vhost_wwpn; } ;
struct TYPE_6__ {int nvqs; int mutex; } ;
struct vhost_scsi {TYPE_3__ dev; int vs_events_nr; struct vhost_scsi_tpg** vs_tpg; TYPE_2__* vqs; } ;
struct TYPE_5__ {struct vhost_virtqueue vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vhost_scsi_tpg**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vhost_scsi*) ;
 int VAR_5 ;
 int FUNC_8 (struct vhost_virtqueue*) ;

__attribute__((used)) static int
FUNC_9(struct vhost_scsi *VAR_6,
     struct vhost_scsi_target *VAR_7)
{
 struct se_portal_group *VAR_8;
 struct vhost_scsi_tport *VAR_9;
 struct vhost_scsi_tpg *VAR_10;
 struct vhost_virtqueue *VAR_11;
 bool VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15;
 u8 VAR_16;

 FUNC_2(&VAR_5);
 FUNC_2(&VAR_6->dev.mutex);

 for (VAR_13 = 0; VAR_13 < VAR_6->dev.nvqs; ++VAR_13) {
  if (!FUNC_8(&VAR_6->vqs[VAR_13].vq)) {
   VAR_14 = -VAR_0;
   goto err_dev;
  }
 }

 if (!VAR_6->vs_tpg) {
  VAR_14 = 0;
  goto err_dev;
 }

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_16 = VAR_15;
  VAR_10 = VAR_6->vs_tpg[VAR_16];
  if (!VAR_10)
   continue;

  FUNC_2(&VAR_10->tv_tpg_mutex);
  VAR_9 = VAR_10->tport;
  if (!VAR_9) {
   VAR_14 = -VAR_2;
   goto err_tpg;
  }

  if (FUNC_5(VAR_9->tport_name, VAR_7->vhost_wwpn)) {
   FUNC_4("tv_tport->tport_name: %s, tpg->tport_tpgt: %hu"
    " does not match t->vhost_wwpn: %s, t->vhost_tpgt: %hu\n",
    VAR_9->tport_name, VAR_10->tport_tpgt,
    VAR_7->vhost_wwpn, VAR_7->vhost_tpgt);
   VAR_14 = -VAR_1;
   goto err_tpg;
  }
  VAR_10->tv_tpg_vhost_count--;
  VAR_10->vhost_scsi = ((void*)0);
  VAR_6->vs_tpg[VAR_16] = ((void*)0);
  VAR_12 = 1;
  FUNC_3(&VAR_10->tv_tpg_mutex);




  VAR_8 = &VAR_10->se_tpg;
  FUNC_6(&VAR_8->tpg_group.cg_item);
 }
 if (VAR_12) {
  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   VAR_11 = &VAR_6->vqs[VAR_15].vq;
   FUNC_2(&VAR_11->mutex);
   VAR_11->private_data = ((void*)0);
   FUNC_3(&VAR_11->mutex);
  }
 }




 FUNC_7(VAR_6);
 FUNC_1(VAR_6->vs_tpg);
 VAR_6->vs_tpg = ((void*)0);
 FUNC_0(VAR_6->vs_events_nr);
 FUNC_3(&VAR_6->dev.mutex);
 FUNC_3(&VAR_5);
 return 0;

err_tpg:
 FUNC_3(&VAR_10->tv_tpg_mutex);
err_dev:
 FUNC_3(&VAR_6->dev.mutex);
 FUNC_3(&VAR_5);
 return VAR_14;
}
