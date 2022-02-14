
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int * cmnd; TYPE_1__* device; } ;
struct TYPE_6__ {int base; } ;
typedef TYPE_2__ ppa_struct ;
struct TYPE_5__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct scsi_cmnd *VAR_0)
{
 ppa_struct *VAR_1 = FUNC_0(VAR_0->device->host);
 int VAR_2;

 FUNC_2(VAR_1->base, 0x0c);

 for (VAR_2 = 0; VAR_2 < VAR_0->cmd_len; VAR_2++)
  if (!FUNC_1(VAR_1, &VAR_0->cmnd[VAR_2], 1))
   return 0;
 return 1;
}
