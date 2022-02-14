
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_cq {int hw_queue; int fw_handle; TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ehea_cq*) ;

__attribute__((used)) static u64 FUNC_3(struct ehea_cq *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 u64 VAR_4 = VAR_1->adapter->handle;


 VAR_3 = FUNC_0(VAR_4, VAR_1->fw_handle, VAR_2);
 if (VAR_3 != VAR_0)
  return VAR_3;

 FUNC_1(&VAR_1->hw_queue);
 FUNC_2(VAR_1);

 return VAR_3;
}
