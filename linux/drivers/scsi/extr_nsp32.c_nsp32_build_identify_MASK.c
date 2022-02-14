
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_6__ {int msgout_len; int * msgoutbuf; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_5__ {int lun; TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_2)
{
 nsp32_hw_data *VAR_3 = (nsp32_hw_data *)VAR_2->device->host->hostdata;
 int VAR_4 = VAR_3->msgout_len;
 int VAR_5 = VAR_0;


 if (VAR_1 == 0) {

 }

 VAR_3->msgoutbuf[VAR_4] = FUNC_0(VAR_5, VAR_2->device->lun); VAR_4++;

 VAR_3->msgout_len = VAR_4;
}
