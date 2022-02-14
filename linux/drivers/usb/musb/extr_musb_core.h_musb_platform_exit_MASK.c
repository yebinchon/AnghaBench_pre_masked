
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* exit ) (struct musb*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct musb*) ;

__attribute__((used)) static inline int FUNC_1(struct musb *VAR_1)
{
 if (!VAR_1->ops->exit)
  return -VAR_0;

 return VAR_1->ops->exit(VAR_1);
}
