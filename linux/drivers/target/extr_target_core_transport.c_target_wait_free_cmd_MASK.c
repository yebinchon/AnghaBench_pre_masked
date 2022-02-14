
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int t_state_lock; } ;


 int FUNC_0 (struct se_cmd*,int,int*,int*,unsigned long*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct se_cmd *VAR_0, bool *VAR_1, bool *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->t_state_lock, VAR_3);
 FUNC_0(VAR_0, 1, VAR_1, VAR_2, &VAR_3);
 FUNC_2(&VAR_0->t_state_lock, VAR_3);
}
