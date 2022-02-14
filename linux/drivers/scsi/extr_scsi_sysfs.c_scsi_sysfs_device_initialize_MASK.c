
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_target {int reap_ref; int devices; int scsi_level; } ;
struct TYPE_5__ {int * class; int parent; int * type; int * bus; } ;
struct scsi_device {int lun_in_cdb; int siblings; int same_target_siblings; TYPE_1__ sdev_gendev; int scsi_level; int lun; int id; int channel; struct Scsi_Host* host; TYPE_1__ sdev_dev; struct scsi_target* sdev_target; } ;
struct Scsi_Host {int host_lock; int __devices; int no_scsi2_lun_in_cdb; int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(struct scsi_device *VAR_5)
{
 unsigned long VAR_6;
 struct Scsi_Host *VAR_7 = VAR_5->host;
 struct scsi_target *VAR_8 = VAR_5->sdev_target;

 FUNC_1(&VAR_5->sdev_gendev);
 VAR_5->sdev_gendev.bus = &VAR_2;
 VAR_5->sdev_gendev.type = &VAR_3;
 FUNC_0(&VAR_5->sdev_gendev, "%d:%d:%d:%llu",
       VAR_5->host->host_no, VAR_5->channel, VAR_5->id, VAR_5->lun);

 FUNC_1(&VAR_5->sdev_dev);
 VAR_5->sdev_dev.parent = FUNC_2(&VAR_5->sdev_gendev);
 VAR_5->sdev_dev.class = &VAR_4;
 FUNC_0(&VAR_5->sdev_dev, "%d:%d:%d:%llu",
       VAR_5->host->host_no, VAR_5->channel, VAR_5->id, VAR_5->lun);







 VAR_5->scsi_level = VAR_8->scsi_level;
 if (VAR_5->scsi_level <= VAR_0 &&
   VAR_5->scsi_level != VAR_1 &&
   !VAR_7->no_scsi2_lun_in_cdb)
  VAR_5->lun_in_cdb = 1;

 FUNC_7(&VAR_5->sdev_gendev);
 FUNC_5(VAR_7->host_lock, VAR_6);
 FUNC_4(&VAR_5->same_target_siblings, &VAR_8->devices);
 FUNC_4(&VAR_5->siblings, &VAR_7->__devices);
 FUNC_6(VAR_7->host_lock, VAR_6);





 FUNC_3(&VAR_8->reap_ref);
}
