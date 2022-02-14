
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {TYPE_1__* hw; int fcport_waitQ; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_6__ {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void
FUNC_4(scsi_qla_host_t *VAR_1)
{
 u8 VAR_2;

 FUNC_1(VAR_1, 0);

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  if (FUNC_3(VAR_1->fcport_waitQ,
      FUNC_2(VAR_1), VAR_0) > 0)
   break;
 }

 FUNC_0(VAR_1->hw->wq);
}
