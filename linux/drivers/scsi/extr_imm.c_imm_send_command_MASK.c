
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int * cmnd; TYPE_1__* device; } ;
typedef int imm_struct ;
struct TYPE_2__ {int host; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct scsi_cmnd *VAR_0)
{
 imm_struct *VAR_1 = FUNC_0(VAR_0->device->host);
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->cmd_len; VAR_2 += 2)
  if (!FUNC_1(VAR_1, &VAR_0->cmnd[VAR_2], 2))
   return 0;
 return 1;
}
