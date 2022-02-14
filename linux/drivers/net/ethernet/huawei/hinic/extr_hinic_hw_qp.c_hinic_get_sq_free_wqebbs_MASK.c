
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wq {int delta; } ;
struct hinic_sq {struct hinic_wq* wq; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct hinic_sq *VAR_0)
{
 struct hinic_wq *VAR_1 = VAR_0->wq;

 return FUNC_0(&VAR_1->delta) - 1;
}
