
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_3__ {int issue; int disconnected; } ;
struct TYPE_4__ {TYPE_1__ queues; } ;
typedef TYPE_2__ FAS216_Info ;


 int FUNC_0 (int *) ;

void FUNC_1(struct Scsi_Host *VAR_0)
{
 FAS216_Info *VAR_1 = (FAS216_Info *)VAR_0->hostdata;

 FUNC_0(&VAR_1->queues.disconnected);
 FUNC_0(&VAR_1->queues.issue);
}
