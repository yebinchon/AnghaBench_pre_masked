
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vhost_scsi_tpg {int tport_tpgt; } ;
struct TYPE_2__ {int* lun; } ;
struct vhost_scsi_evt {int list; TYPE_1__ event; } ;
struct vhost_scsi {int vs_event_work; int dev; int vs_event_list; } ;
struct se_lun {int unpacked_lun; } ;


 int FUNC_0 (int *,int *) ;
 struct vhost_scsi_evt* FUNC_1 (struct vhost_scsi*,int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct vhost_scsi *VAR_0,
     struct vhost_scsi_tpg *VAR_1,
     struct se_lun *VAR_2,
     u32 VAR_3,
     u32 VAR_4)
{
 struct vhost_scsi_evt *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);
 if (!VAR_5)
  return;

 if (VAR_1 && VAR_2) {





  VAR_5->event.lun[0] = 0x01;
  VAR_5->event.lun[1] = VAR_1->tport_tpgt;
  if (VAR_2->unpacked_lun >= 256)
   VAR_5->event.lun[2] = VAR_2->unpacked_lun >> 8 | 0x40 ;
  VAR_5->event.lun[3] = VAR_2->unpacked_lun & 0xFF;
 }

 FUNC_0(&VAR_5->list, &VAR_0->vs_event_list);
 FUNC_2(&VAR_0->dev, &VAR_0->vs_event_work);
}
