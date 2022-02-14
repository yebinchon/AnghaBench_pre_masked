
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ session_type; int delayed_process_work; int delayed_process; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct venus_inst *VAR_2)
{
 if (VAR_2->session_type == VAR_0) {
  FUNC_0(&VAR_2->delayed_process);
  FUNC_1(&VAR_2->delayed_process_work,
     VAR_1);
 }
}
