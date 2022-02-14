
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_wait_queue {int db; int mu; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct optee_wait_queue *VAR_0)
{
 FUNC_1(&VAR_0->mu);
 FUNC_0(&VAR_0->db);
}
