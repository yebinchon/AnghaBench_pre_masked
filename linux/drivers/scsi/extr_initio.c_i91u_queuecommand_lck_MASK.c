
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_ctrl_blk {int dummy; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct initio_host {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 struct scsi_ctrl_blk* FUNC_0 (struct initio_host*) ;
 int FUNC_1 (struct initio_host*,struct scsi_ctrl_blk*,struct scsi_cmnd*) ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1,
  void (*VAR_2)(struct scsi_cmnd *))
{
 struct initio_host *VAR_3 = (struct initio_host *) VAR_1->device->host->hostdata;
 struct scsi_ctrl_blk *VAR_4;

 VAR_1->scsi_done = VAR_2;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return VAR_0;

 FUNC_1(VAR_3, VAR_4, VAR_1);
 FUNC_2(VAR_3, VAR_4);
 return 0;
}
