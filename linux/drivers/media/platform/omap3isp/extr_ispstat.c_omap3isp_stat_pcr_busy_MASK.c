
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ispstat {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* busy ) (struct ispstat*) ;} ;


 int FUNC_0 (struct ispstat*) ;

int FUNC_1(struct ispstat *VAR_0)
{
 return VAR_0->ops->busy(VAR_0);
}
