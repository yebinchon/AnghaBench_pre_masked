
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct mailbox {scalar_t__ status; int ccbptr; } ;
struct ccb {int op; int idlun; scalar_t__ commlinkid; scalar_t__* linkptr; } ;
struct aha1542_hostdata {int aha1542_last_mbo_used; scalar_t__ ccb_handle; struct scsi_cmnd** int_cmds; struct ccb* ccb; struct mailbox* mb; } ;
struct Scsi_Host {int host_lock; int io_port; } ;
struct TYPE_2__ {int id; int lun; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ccb*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*) ;
 struct aha1542_hostdata* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4->device->host;
 struct aha1542_hostdata *VAR_6 = FUNC_5(VAR_5);
 unsigned long VAR_7;
 struct mailbox *VAR_8 = VAR_6->mb;
 u8 VAR_9 = VAR_4->device->id;
 u8 VAR_10 = VAR_4->device->lun;
 int VAR_11;
 struct ccb *VAR_12 = VAR_6->ccb;

 FUNC_6(VAR_5->host_lock, VAR_7);
 VAR_11 = VAR_6->aha1542_last_mbo_used + 1;
 if (VAR_11 >= VAR_0)
  VAR_11 = 0;

 do {
  if (VAR_8[VAR_11].status == 0 && VAR_6->int_cmds[VAR_11] == ((void*)0))
   break;
  VAR_11++;
  if (VAR_11 >= VAR_0)
   VAR_11 = 0;
 } while (VAR_11 != VAR_6->aha1542_last_mbo_used);

 if (VAR_8[VAR_11].status || VAR_6->int_cmds[VAR_11])
  FUNC_3("Unable to find empty mailbox for aha1542.\n");

 VAR_6->int_cmds[VAR_11] = VAR_4;



 VAR_6->aha1542_last_mbo_used = VAR_11;


 FUNC_1(VAR_8[VAR_11].ccbptr, VAR_6->ccb_handle + VAR_11 * sizeof(*VAR_12));

 FUNC_2(&VAR_12[VAR_11], 0, sizeof(struct ccb));

 VAR_12[VAR_11].op = 0x81;

 VAR_12[VAR_11].idlun = (VAR_9 & 7) << 5 | (VAR_10 & 7);

 VAR_12[VAR_11].linkptr[0] = VAR_12[VAR_11].linkptr[1] = VAR_12[VAR_11].linkptr[2] = 0;
 VAR_12[VAR_11].commlinkid = 0;





 FUNC_0(VAR_5->io_port, VAR_1);
 FUNC_7(VAR_5->host_lock, VAR_7);

 FUNC_4(VAR_2, VAR_4,
  "Trying device reset for target\n");

 return VAR_3;
}
