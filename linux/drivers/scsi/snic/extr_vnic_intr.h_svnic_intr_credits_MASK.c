
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_intr {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int int_credits; } ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct vnic_intr *VAR_0)
{
 return FUNC_0(&VAR_0->ctrl->int_credits);
}
