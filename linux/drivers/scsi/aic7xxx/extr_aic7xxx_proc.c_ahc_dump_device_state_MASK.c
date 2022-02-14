
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {int dummy; } ;
struct scsi_device {scalar_t__ lun; TYPE_1__* sdev_target; } ;
struct ahc_linux_device {int qfrozen; int maxtags; int openings; int active; int commands_issued; } ;
struct TYPE_2__ {int id; scalar_t__ channel; } ;


 struct ahc_linux_device* FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static void
FUNC_2(struct seq_file *VAR_0, struct scsi_device *VAR_1)
{
 struct ahc_linux_device *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "\tChannel %c Target %d Lun %d Settings\n",
    VAR_1->sdev_target->channel + 'A',
     VAR_1->sdev_target->id, (u8)VAR_1->lun);

 FUNC_1(VAR_0, "\t\tCommands Queued %ld\n", VAR_2->commands_issued);
 FUNC_1(VAR_0, "\t\tCommands Active %d\n", VAR_2->active);
 FUNC_1(VAR_0, "\t\tCommand Openings %d\n", VAR_2->openings);
 FUNC_1(VAR_0, "\t\tMax Tagged Openings %d\n", VAR_2->maxtags);
 FUNC_1(VAR_0, "\t\tDevice Queue Frozen Count %d\n", VAR_2->qfrozen);
}
