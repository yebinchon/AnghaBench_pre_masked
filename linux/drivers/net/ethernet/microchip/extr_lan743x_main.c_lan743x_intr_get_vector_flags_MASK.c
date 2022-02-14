
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* vector_list; } ;
struct lan743x_adapter {TYPE_2__ intr; } ;
struct TYPE_3__ {int int_mask; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct lan743x_adapter *VAR_1,
      u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->intr.vector_list[VAR_3].int_mask & VAR_2)
   return VAR_1->intr.vector_list[VAR_3].flags;
 }
 return 0;
}
