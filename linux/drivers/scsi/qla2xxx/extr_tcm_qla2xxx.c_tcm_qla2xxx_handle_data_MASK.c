
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_tgt_cmd {int cmd_in_wq; int work; int trc_flags; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct qla_tgt_cmd *VAR_3)
{
 VAR_3->trc_flags |= VAR_0;
 VAR_3->cmd_in_wq = 1;
 FUNC_0(&VAR_3->work, VAR_2);
 FUNC_1(FUNC_2(), VAR_1, &VAR_3->work);
}
