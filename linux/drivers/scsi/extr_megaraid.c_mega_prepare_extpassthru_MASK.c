
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct scsi_cmnd {int* cmnd; TYPE_3__* device; int cmd_len; } ;
struct TYPE_16__ {int dma_direction; TYPE_5__* epthru; } ;
typedef TYPE_4__ scb_t ;
struct TYPE_17__ {int timeout; int ars; int reqsenselen; int channel; int target; int dataxferlen; int dataxferaddr; int numsgelements; int cdb; int logdrv; int cdblen; scalar_t__ islogical; } ;
typedef TYPE_5__ mega_ext_passthru ;
struct TYPE_18__ {int flag; TYPE_2__* host; TYPE_1__* dev; } ;
typedef TYPE_6__ adapter_t ;
struct TYPE_15__ {long channel; int lun; } ;
struct TYPE_14__ {int host_no; } ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int *,char*,int ,long,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*,int *,int *) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;

__attribute__((used)) static mega_ext_passthru *
FUNC_4(adapter_t *VAR_2, scb_t *VAR_3,
    struct scsi_cmnd *VAR_4,
    int VAR_5, int VAR_6)
{
 mega_ext_passthru *VAR_7;

 VAR_7 = VAR_3->epthru;
 FUNC_3(VAR_7, 0, sizeof(mega_ext_passthru));


 VAR_7->timeout = 2;

 VAR_7->ars = 1;
 VAR_7->reqsenselen = 14;
 VAR_7->islogical = 0;

 VAR_7->channel = (VAR_2->flag & VAR_0) ? 0 : VAR_5;
 VAR_7->target = (VAR_2->flag & VAR_0) ?
  (VAR_5 << 4) | VAR_6 : VAR_6;

 VAR_7->cdblen = VAR_4->cmd_len;
 VAR_7->logdrv = VAR_4->device->lun;

 FUNC_2(VAR_7->cdb, VAR_4->cmnd, VAR_4->cmd_len);


 VAR_3->dma_direction = VAR_1;

 switch(VAR_4->cmnd[0]) {
 case 129:
 case 128:
  if(!(VAR_2->flag & (1L << VAR_4->device->channel))) {

   FUNC_0(&VAR_2->dev->dev,
    "scsi%d: scanning scsi channel %d [P%d] "
    "for physical devices\n",
     VAR_2->host->host_no,
     VAR_4->device->channel, VAR_5);

   VAR_2->flag |= (1L << VAR_4->device->channel);
  }

 default:
  VAR_7->numsgelements = FUNC_1(VAR_2, VAR_3,
    &VAR_7->dataxferaddr, &VAR_7->dataxferlen);
  break;
 }

 return VAR_7;
}
