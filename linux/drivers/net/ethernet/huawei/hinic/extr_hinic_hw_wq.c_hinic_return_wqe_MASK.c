
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wq {int wqebb_size; int delta; int prod_idx; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(struct hinic_wq *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0->wqebb_size) / VAR_0->wqebb_size;

 FUNC_2(VAR_2, &VAR_0->prod_idx);

 FUNC_1(VAR_2, &VAR_0->delta);
}
