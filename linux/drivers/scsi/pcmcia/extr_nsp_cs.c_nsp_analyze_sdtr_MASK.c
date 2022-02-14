
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int SyncPeriod; unsigned int SyncOffset; unsigned int SyncRegister; unsigned int AckWidth; } ;
typedef TYPE_3__ sync_data ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct nsp_sync_table {unsigned int max_period; unsigned int min_period; unsigned int chip_period; unsigned int ack_width; } ;
struct TYPE_8__ {int ScsiClockDiv; TYPE_3__* Sync; } ;
typedef TYPE_4__ nsp_hw_data ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 struct nsp_sync_table* VAR_6 ;
 struct nsp_sync_table* VAR_7 ;
 unsigned char FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_8)
{
 unsigned char VAR_9 = FUNC_2(VAR_8);

 nsp_hw_data *VAR_10 = (nsp_hw_data *)VAR_8->device->host->hostdata;
 sync_data *VAR_11 = &(VAR_10->Sync[VAR_9]);
 struct nsp_sync_table *VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15;


 FUNC_1(VAR_2, "in");

 VAR_13 = VAR_11->SyncPeriod;
 VAR_14 = VAR_11->SyncOffset;

 FUNC_1(VAR_2, "period=0x%x, offset=0x%x", VAR_13, VAR_14);

 if ((VAR_10->ScsiClockDiv & (FUNC_0(0)|FUNC_0(1))) == VAR_0) {
  VAR_12 = VAR_6;
 } else {
  VAR_12 = VAR_7;
 }

 for ( VAR_15 = 0; VAR_12->max_period != 0; VAR_15++, VAR_12++) {
  if ( VAR_13 >= VAR_12->min_period &&
       VAR_13 <= VAR_12->max_period ) {
   break;
  }
 }

 if (VAR_13 != 0 && VAR_12->max_period == 0) {



  FUNC_1(VAR_2, "no proper period/offset");

  VAR_11->SyncPeriod = 0;
  VAR_11->SyncOffset = 0;
  VAR_11->SyncRegister = 0;
  VAR_11->AckWidth = 0;

  return VAR_1;
 }

 VAR_11->SyncRegister = (VAR_12->chip_period << VAR_4) |
                  (VAR_14 & VAR_3);
 VAR_11->AckWidth = VAR_12->ack_width;

 FUNC_1(VAR_2, "sync_reg=0x%x, ack_width=0x%x", VAR_11->SyncRegister, VAR_11->AckWidth);

 return VAR_5;
}
