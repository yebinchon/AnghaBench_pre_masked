
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {int host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned
FUNC_2(struct scsi_cmnd *VAR_2)
{
 if (FUNC_0(((void*)0), VAR_2) == VAR_0)
  return 0;
 if (FUNC_1(VAR_2->device->host) == VAR_1)
  return 1;
 return 0;
}
