
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; scalar_t__ t_task_cdb; scalar_t__ __t_task_cdb; int se_tmr_req; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct se_cmd*) ;

__attribute__((used)) static void FUNC_3(struct se_cmd *VAR_1)
{
 FUNC_2(VAR_1);

 if (VAR_1->se_cmd_flags & VAR_0)
  FUNC_0(VAR_1->se_tmr_req);
 if (VAR_1->t_task_cdb != VAR_1->__t_task_cdb)
  FUNC_1(VAR_1->t_task_cdb);
}
