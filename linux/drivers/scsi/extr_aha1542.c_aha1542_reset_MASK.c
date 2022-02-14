
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct aha1542_hostdata {TYPE_2__* mb; struct scsi_cmnd** int_cmds; } ;
struct Scsi_Host {int host_lock; int host_no; int io_port; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_3__ {scalar_t__ soft_reset; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int ,struct Scsi_Host*,char*,int ) ;
 struct aha1542_hostdata* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_12, u8 VAR_13)
{
 struct Scsi_Host *VAR_14 = VAR_12->device->host;
 struct aha1542_hostdata *VAR_15 = FUNC_6(VAR_14);
 unsigned long VAR_16;
 int VAR_17;

 FUNC_7(VAR_14->host_lock, VAR_16);






 FUNC_3(VAR_13, FUNC_0(VAR_12->device->host->io_port));

 if (!FUNC_9(FUNC_1(VAR_12->device->host->io_port),
      VAR_9, VAR_6, VAR_10 | VAR_3 | VAR_7 | VAR_2 | VAR_1, 0)) {
  FUNC_8(VAR_14->host_lock, VAR_16);
  return VAR_4;
 }





 if (VAR_13 & VAR_5)
  FUNC_4(VAR_12->device->host);







 FUNC_5(VAR_8, VAR_12->device->host, "Sent BUS RESET to scsi host %d\n", VAR_12->device->host->host_no);

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  if (VAR_15->int_cmds[VAR_17] != ((void*)0)) {
   struct scsi_cmnd *VAR_18;
   VAR_18 = VAR_15->int_cmds[VAR_17];

   if (VAR_18->device->soft_reset) {






    continue;
   }
   FUNC_2(VAR_18);
   VAR_15->int_cmds[VAR_17] = ((void*)0);
   VAR_15->mb[VAR_17].status = 0;
  }
 }

 FUNC_8(VAR_14->host_lock, VAR_16);
 return VAR_11;
}
