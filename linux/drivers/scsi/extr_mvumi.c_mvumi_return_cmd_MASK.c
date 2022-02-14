
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hba {int cmd_pool; } ;
struct mvumi_cmd {int queue_pointer; int * scmd; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct mvumi_hba *VAR_0,
      struct mvumi_cmd *VAR_1)
{
 VAR_1->scmd = ((void*)0);
 FUNC_0(&VAR_1->queue_pointer, &VAR_0->cmd_pool);
}
