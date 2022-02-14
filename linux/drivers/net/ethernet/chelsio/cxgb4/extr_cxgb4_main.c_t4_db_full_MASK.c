
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip; } ;
struct adapter {int db_full_task; int workq; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct adapter*,int ,int,int ) ;

void FUNC_5(struct adapter *VAR_4)
{
 if (FUNC_1(VAR_4->params.chip)) {
  FUNC_0(VAR_4);
  FUNC_2(VAR_4, VAR_0);
  FUNC_4(VAR_4, VAR_3,
     VAR_1 | VAR_2, 0);
  FUNC_3(VAR_4->workq, &VAR_4->db_full_task);
 }
}
