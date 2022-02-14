
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_6__ {int delay_time; } ;
struct AdapterCtlBlk {scalar_t__ acb_flag; int * active_dcb; TYPE_3__ eeprom; scalar_t__ last_reset; int waiting_timer; } ;
struct TYPE_5__ {scalar_t__ lun; int id; TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct AdapterCtlBlk*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct AdapterCtlBlk*,int ,struct scsi_cmnd*,int ) ;
 int FUNC_5 (int ,char*,struct scsi_cmnd*,int ,int ,struct scsi_cmnd*) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (struct AdapterCtlBlk*) ;
 int FUNC_7 (struct AdapterCtlBlk*) ;
 int FUNC_8 (struct AdapterCtlBlk*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct AdapterCtlBlk*) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_13)
{
 struct AdapterCtlBlk *VAR_14 =
  (struct AdapterCtlBlk *)VAR_13->device->host->hostdata;
 FUNC_5(VAR_5,
  "eh_bus_reset: (0%p) target=<%02i-%i> cmd=%p\n",
  VAR_13, VAR_13->device->id, (u8)VAR_13->device->lun, VAR_13);

 if (FUNC_9(&VAR_14->waiting_timer))
  FUNC_3(&VAR_14->waiting_timer);




 FUNC_1(VAR_14, VAR_8, 0x00);
 FUNC_1(VAR_14, VAR_10, 0x00);
 FUNC_1(VAR_14, VAR_9, VAR_3);
 FUNC_1(VAR_14, VAR_7, VAR_2);

 FUNC_7(VAR_14);
 FUNC_10(500);


 VAR_14->last_reset =
     VAR_12 + 3 * VAR_4 / 2 +
     VAR_4 * VAR_14->eeprom.delay_time;





 FUNC_1(VAR_14, VAR_7, VAR_0);
 FUNC_2(VAR_14, "eh_bus_reset");

 FUNC_0(VAR_14, VAR_11);
 FUNC_8(VAR_14);

 FUNC_6(VAR_14);
 FUNC_4(VAR_14, VAR_1, VAR_13, 0);
 VAR_14->active_dcb = ((void*)0);
 VAR_14->acb_flag = 0;
 FUNC_11(VAR_14);

 return VAR_6;
}
