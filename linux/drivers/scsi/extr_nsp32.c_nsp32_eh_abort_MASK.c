
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_2__* device; } ;
struct TYPE_10__ {TYPE_6__* cur_target; TYPE_3__* cur_lunt; } ;
typedef TYPE_4__ nsp32_hw_data ;
struct TYPE_11__ {int sync_flag; } ;
struct TYPE_9__ {int * SCpnt; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
struct TYPE_7__ {unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_4 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_9)
{
 nsp32_hw_data *VAR_10 = (nsp32_hw_data *)VAR_9->device->host->hostdata;
 unsigned int VAR_11 = VAR_9->device->host->io_port;

 FUNC_1(VAR_3, "abort");

 if (VAR_10->cur_lunt->SCpnt == ((void*)0)) {
  FUNC_0(VAR_4, "abort failed");
  return VAR_2;
 }

 if (VAR_10->cur_target->sync_flag & (VAR_5 | VAR_6)) {

  VAR_10->cur_target->sync_flag = 0;
  FUNC_3(VAR_10, VAR_10->cur_target);
 }

 FUNC_4(VAR_11, VAR_8, 0);
 FUNC_4(VAR_11, VAR_0, 0);

 VAR_9->result = VAR_1 << 16;
 FUNC_2(VAR_9);

 FUNC_0(VAR_4, "abort success");
 return VAR_7;
}
