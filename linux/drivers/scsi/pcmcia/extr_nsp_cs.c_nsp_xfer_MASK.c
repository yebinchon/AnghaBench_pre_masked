
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ phase; } ;
struct scsi_cmnd {TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_8__ {char* MsgBuffer; int MsgLen; } ;
typedef TYPE_4__ nsp_hw_data ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {unsigned int io_port; scalar_t__ hostdata; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct scsi_cmnd*,int,int ) ;
 char FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ,char) ;
 int FUNC_5 (struct scsi_cmnd*,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_10, int VAR_11)
{
 unsigned int VAR_12 = VAR_10->device->host->io_port;
 nsp_hw_data *VAR_13 = (nsp_hw_data *)VAR_10->device->host->hostdata;
 char *VAR_14 = VAR_13->MsgBuffer;
 int VAR_15 = FUNC_0(VAR_5, VAR_13->MsgLen);
 int VAR_16;
 int VAR_17;


 for (VAR_16 = 0; VAR_15 > 0; VAR_15--, VAR_16++) {

  VAR_17 = FUNC_2(VAR_10, VAR_11, VAR_4);
  if (VAR_17 <= 0) {
   FUNC_1(VAR_6, "xfer quit");
   return 0;
  }


  if (VAR_15 == 1 && VAR_10->SCp.phase == VAR_7) {
   FUNC_4(VAR_12, VAR_8, VAR_1 | VAR_0);
  }


  if (VAR_11 & VAR_3) {
   FUNC_1(VAR_6, "read msg");
   VAR_14[VAR_16] = FUNC_3(VAR_12, VAR_9);
  } else {
   FUNC_1(VAR_6, "write msg");
   FUNC_4(VAR_12, VAR_9, VAR_14[VAR_16]);
  }
  FUNC_5(VAR_10, VAR_2, "xfer<ack>");

 }
 return VAR_15;
}
