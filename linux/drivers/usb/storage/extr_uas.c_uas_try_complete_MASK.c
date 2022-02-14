
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uas_dev_info {int ** cmnd; int lock; } ;
struct uas_cmd_info {int state; int uas_tag; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; int SCp; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_5, const char *VAR_6)
{
 struct uas_cmd_info *VAR_7 = (void *)&VAR_5->SCp;
 struct uas_dev_info *VAR_8 = (void *)VAR_5->device->hostdata;

 FUNC_0(&VAR_8->lock);
 if (VAR_7->state & (VAR_1 |
         VAR_2 |
         VAR_3 |
         VAR_0))
  return -VAR_4;
 VAR_8->cmnd[VAR_7->uas_tag - 1] = ((void*)0);
 FUNC_2(VAR_5);
 VAR_5->scsi_done(VAR_5);
 return 0;
}
