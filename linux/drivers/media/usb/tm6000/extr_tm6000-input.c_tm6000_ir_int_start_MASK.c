
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {struct tm6000_IR* ir; } ;
struct tm6000_IR {int rc; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct tm6000_core *VAR_0)
{
 struct tm6000_IR *VAR_1 = VAR_0->ir;

 if (!VAR_1)
  return 0;

 return FUNC_0(VAR_1->rc);
}
