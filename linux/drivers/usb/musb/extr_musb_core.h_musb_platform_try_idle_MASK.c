
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* try_idle ) (struct musb*,unsigned long) ;} ;


 int FUNC_0 (struct musb*,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct musb *VAR_0,
  unsigned long VAR_1)
{
 if (VAR_0->ops->try_idle)
  VAR_0->ops->try_idle(VAR_0, VAR_1);
}
