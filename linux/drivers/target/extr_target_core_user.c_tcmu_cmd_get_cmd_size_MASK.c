
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_cmd {struct se_cmd* se_cmd; } ;
struct se_cmd {int t_task_cdb; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline size_t FUNC_3(struct tcmu_cmd *VAR_1,
        size_t VAR_2)
{
 struct se_cmd *VAR_3 = VAR_1->se_cmd;
 size_t VAR_4;

 VAR_4 = VAR_2 +
  FUNC_1(FUNC_2(VAR_3->t_task_cdb),
    VAR_0);

 FUNC_0(VAR_4 & (VAR_0-1));

 return VAR_4;
}
