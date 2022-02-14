
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct cx23885_kernel_ir* priv; } ;
struct cx23885_kernel_ir {int * cx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_0)
{
 struct cx23885_kernel_ir *VAR_1 = VAR_0->priv;

 if (VAR_1->cx != ((void*)0))
  FUNC_0(VAR_1->cx);
}
