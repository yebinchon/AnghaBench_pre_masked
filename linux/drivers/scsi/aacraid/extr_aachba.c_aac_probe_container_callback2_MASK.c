
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct fsa_dev_info {int valid; } ;
struct aac_dev {struct fsa_dev_info* fsa_dev; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 size_t FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd * VAR_1)
{
 struct fsa_dev_info *VAR_2 = ((struct aac_dev *)(VAR_1->device->host->hostdata))->fsa_dev;

 if ((VAR_2[FUNC_1(VAR_1)].valid & 1))
  return FUNC_0(VAR_1);

 VAR_1->result = VAR_0 << 16;
 VAR_1->scsi_done(VAR_1);
 return 0;
}
