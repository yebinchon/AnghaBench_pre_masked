
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct cx23885_kernel_ir* priv; } ;
struct cx23885_kernel_ir {int * cx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_1)
{
 struct cx23885_kernel_ir *VAR_2 = VAR_1->priv;

 if (VAR_2->cx == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_2->cx);
}
