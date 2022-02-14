
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__* device; } ;
struct TYPE_8__ {int * CurrentSC; int * cur_target; TYPE_1__* cur_lunt; } ;
typedef TYPE_4__ nsp32_hw_data ;
struct TYPE_7__ {TYPE_2__* host; } ;
struct TYPE_6__ {unsigned int io_port; scalar_t__ hostdata; } ;
struct TYPE_5__ {int * SCpnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct scsi_cmnd *VAR_2)
{
 nsp32_hw_data *VAR_3 = (nsp32_hw_data *)VAR_2->device->host->hostdata;
 unsigned int VAR_4 = VAR_2->device->host->io_port;

 FUNC_2(VAR_2);




 FUNC_0(VAR_4, VAR_1, 0);
 FUNC_1(VAR_4, VAR_0, 0);




 (*VAR_2->scsi_done)(VAR_2);




 VAR_3->cur_lunt->SCpnt = ((void*)0);
 VAR_3->cur_lunt = ((void*)0);
 VAR_3->cur_target = ((void*)0);
 VAR_3->CurrentSC = ((void*)0);
}
