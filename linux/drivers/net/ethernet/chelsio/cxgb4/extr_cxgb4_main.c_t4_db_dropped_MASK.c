
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip; } ;
struct adapter {int db_drop_task; int workq; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct adapter *VAR_1)
{
 if (FUNC_1(VAR_1->params.chip)) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, VAR_0);
 }
 FUNC_3(VAR_1->workq, &VAR_1->db_drop_task);
}
