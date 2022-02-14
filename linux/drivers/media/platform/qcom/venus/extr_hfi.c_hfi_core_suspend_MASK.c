
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {scalar_t__ state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* suspend ) (struct venus_core*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct venus_core*) ;

int FUNC_1(struct venus_core *VAR_1)
{
 if (VAR_1->state != VAR_0)
  return 0;

 return VAR_1->ops->suspend(VAR_1);
}
