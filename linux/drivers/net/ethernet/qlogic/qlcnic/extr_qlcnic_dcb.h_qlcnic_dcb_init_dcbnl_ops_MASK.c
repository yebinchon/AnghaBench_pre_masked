
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_dcb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* init_dcbnl_ops ) (struct qlcnic_dcb*) ;} ;


 int FUNC_0 (struct qlcnic_dcb*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_dcb *VAR_0)
{
 if (VAR_0 && VAR_0->ops->init_dcbnl_ops)
  VAR_0->ops->init_dcbnl_ops(VAR_0);
}
