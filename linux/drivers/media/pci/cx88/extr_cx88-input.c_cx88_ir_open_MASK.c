
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {struct cx88_core* priv; } ;
struct cx88_core {TYPE_1__* ir; } ;
struct TYPE_2__ {int users; } ;


 int FUNC_0 (struct cx88_core*) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0)
{
 struct cx88_core *VAR_1 = VAR_0->priv;

 VAR_1->ir->users++;
 return FUNC_0(VAR_1);
}
