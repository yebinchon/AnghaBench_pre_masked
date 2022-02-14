
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__* cmnd; scalar_t__* sense_buffer; int result; TYPE_2__* device; } ;
struct adpt_device {int state; TYPE_2__* pScsi_dev; } ;
struct TYPE_8__ {int state; } ;
typedef TYPE_3__ adpt_hba ;
struct TYPE_7__ {struct adpt_device* hostdata; int lun; scalar_t__ id; scalar_t__ channel; TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct adpt_device* FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,struct scsi_cmnd*,struct adpt_device*) ;
 int FUNC_2 () ;
 void FUNC_3 (struct scsi_cmnd*) ;
 void FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd * VAR_7, void (*VAR_8) (struct scsi_cmnd *))
{
 adpt_hba* VAR_9 = ((void*)0);
 struct adpt_device* VAR_10 = ((void*)0);

 VAR_7->scsi_done = VAR_8;







 if ((VAR_7->cmnd[0] == VAR_5) && (VAR_7->sense_buffer[0] != 0)) {
  VAR_7->result = (VAR_1 << 16);
  VAR_7->scsi_done(VAR_7);
  return 0;
 }

 VAR_9 = (adpt_hba*)VAR_7->device->host->hostdata[0];
 if (!VAR_9) {
  return VAR_4;
 }

 FUNC_2();
 if ((VAR_9->state) & VAR_3)
  return VAR_6;



 if((VAR_10 = (struct adpt_device*) (VAR_7->device->hostdata)) == ((void*)0)) {





  if ((VAR_10 = FUNC_0(VAR_9, (u32)VAR_7->device->channel, (u32)VAR_7->device->id, VAR_7->device->lun)) == ((void*)0)) {


   VAR_7->result = (VAR_0 << 16);
   VAR_7->scsi_done(VAR_7);
   return 0;
  }
  VAR_7->device->hostdata = VAR_10;
 }
 VAR_10->pScsi_dev = VAR_7->device;





 if (VAR_10->state & VAR_2 ) {
  return VAR_4;
 }
 return FUNC_1(VAR_9, VAR_7, VAR_10);
}
