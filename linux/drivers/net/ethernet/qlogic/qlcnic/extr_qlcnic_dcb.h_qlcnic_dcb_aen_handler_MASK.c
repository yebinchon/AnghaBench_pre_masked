
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_dcb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* aen_handler ) (struct qlcnic_dcb*,void*) ;} ;


 int FUNC_0 (struct qlcnic_dcb*,void*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_dcb *VAR_0, void *VAR_1)
{
 if (VAR_0 && VAR_0->ops->aen_handler)
  VAR_0->ops->aen_handler(VAR_0, VAR_1);
}
