
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int ctx_lock; int * ctx; int * ctx_ops; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct ntb_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->ctx_lock, VAR_1);
 {
  VAR_0->ctx_ops = ((void*)0);
  VAR_0->ctx = ((void*)0);
 }
 FUNC_1(&VAR_0->ctx_lock, VAR_1);
}
