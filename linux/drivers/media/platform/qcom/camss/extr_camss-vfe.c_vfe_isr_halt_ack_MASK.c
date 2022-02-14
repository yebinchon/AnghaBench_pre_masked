
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_device {TYPE_1__* ops; int halt_complete; } ;
struct TYPE_2__ {int (* halt_clear ) (struct vfe_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vfe_device*) ;

__attribute__((used)) static inline void FUNC_2(struct vfe_device *VAR_0)
{
 FUNC_0(&VAR_0->halt_complete);
 VAR_0->ops->halt_clear(VAR_0);
}
