
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ep_shm_info; } ;
struct fjes_adapter {TYPE_2__ hw; } ;
struct TYPE_3__ {int rx; } ;


 void* FUNC_0 (int *,size_t*) ;
 int FUNC_1 (struct fjes_adapter*,int) ;

__attribute__((used)) static void *FUNC_2(struct fjes_adapter *VAR_0, size_t *VAR_1,
         int *VAR_2)
{
 void *VAR_3;

 *VAR_2 = FUNC_1(VAR_0, *VAR_2);
 if (*VAR_2 < 0)
  return ((void*)0);

 VAR_3 =
 FUNC_0(
  &VAR_0->hw.ep_shm_info[*VAR_2].rx, VAR_1);

 return VAR_3;
}
