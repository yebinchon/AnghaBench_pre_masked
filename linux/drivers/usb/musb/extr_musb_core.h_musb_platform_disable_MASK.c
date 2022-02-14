
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct musb*) ;} ;


 int FUNC_0 (struct musb*) ;

__attribute__((used)) static inline void FUNC_1(struct musb *VAR_0)
{
 if (VAR_0->ops->disable)
  VAR_0->ops->disable(VAR_0);
}
