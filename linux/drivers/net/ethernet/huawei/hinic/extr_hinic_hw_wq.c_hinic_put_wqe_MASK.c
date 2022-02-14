
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wq {int wqebb_size_shift; int delta; int cons_idx; int wqebb_size; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct hinic_wq *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0->wqebb_size)
   >> VAR_0->wqebb_size_shift;

 FUNC_1(VAR_2, &VAR_0->cons_idx);

 FUNC_1(VAR_2, &VAR_0->delta);
}
