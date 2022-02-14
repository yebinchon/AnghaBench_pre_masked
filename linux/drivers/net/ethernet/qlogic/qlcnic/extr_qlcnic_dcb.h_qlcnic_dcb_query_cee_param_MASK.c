
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_dcb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* query_cee_param ) (struct qlcnic_dcb*,char*,int ) ;} ;


 int FUNC_0 (struct qlcnic_dcb*,char*,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct qlcnic_dcb *VAR_0, char *VAR_1, u8 VAR_2)
{
 if (VAR_0 && VAR_0->ops->query_cee_param)
  return VAR_0->ops->query_cee_param(VAR_0, VAR_1, VAR_2);

 return 0;
}
