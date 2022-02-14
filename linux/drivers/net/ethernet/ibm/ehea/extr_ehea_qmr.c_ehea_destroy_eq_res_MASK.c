
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_eq {int hw_queue; int spinlock; int fw_handle; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ehea_eq*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_5(struct ehea_eq *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_1->spinlock, VAR_4);

 VAR_3 = FUNC_0(VAR_1->adapter->handle, VAR_1->fw_handle, VAR_2);
 FUNC_4(&VAR_1->spinlock, VAR_4);

 if (VAR_3 != VAR_0)
  return VAR_3;

 FUNC_1(&VAR_1->hw_queue);
 FUNC_2(VAR_1);

 return VAR_3;
}
