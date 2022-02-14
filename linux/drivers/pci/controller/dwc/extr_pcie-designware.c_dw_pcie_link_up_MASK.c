
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dw_pcie {scalar_t__ dbi_base; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* link_up ) (struct dw_pcie*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dw_pcie*) ;

int FUNC_2(struct dw_pcie *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->ops->link_up)
  return VAR_3->ops->link_up(VAR_3);

 VAR_4 = FUNC_0(VAR_3->dbi_base + VAR_0);
 return ((VAR_4 & VAR_2) &&
  (!(VAR_4 & VAR_1)));
}
