
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_dcb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* query_hw_capability ) (struct qlcnic_dcb*,char*) ;} ;


 int FUNC_0 (struct qlcnic_dcb*,char*) ;

__attribute__((used)) static inline int
FUNC_1(struct qlcnic_dcb *VAR_0, char *VAR_1)
{
 if (VAR_0 && VAR_0->ops->query_hw_capability)
  return VAR_0->ops->query_hw_capability(VAR_0, VAR_1);

 return 0;
}
