
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int gcr_lock; scalar_t__ gcr_mem_base; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(u32 VAR_1, u64 *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0.gcr_lock);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0) {
  FUNC_3(&VAR_0.gcr_lock);
  return VAR_3;
 }

 *VAR_2 = FUNC_1(VAR_0.gcr_mem_base + VAR_1);

 FUNC_3(&VAR_0.gcr_lock);

 return 0;
}
