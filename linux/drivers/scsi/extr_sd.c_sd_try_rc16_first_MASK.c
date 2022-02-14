
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ scsi_level; scalar_t__ try_rc_10_first; TYPE_1__* host; } ;
struct TYPE_2__ {int max_cmd_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_1)
{
 if (VAR_1->host->max_cmd_len < 16)
  return 0;
 if (VAR_1->try_rc_10_first)
  return 0;
 if (VAR_1->scsi_level > VAR_0)
  return 1;
 if (FUNC_0(VAR_1))
  return 1;
 return 0;
}
