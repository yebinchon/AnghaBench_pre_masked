
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int handle; } ;
struct tc_cls_u32_offload {TYPE_1__ hnode; } ;
struct ixgbe_adapter {int tables; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_2,
         struct tc_cls_u32_offload *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->hnode.handle);

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 FUNC_1(VAR_4 - 1, &VAR_2->tables);
 return 0;
}
