
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; int * ptr; } ;
struct cw1200_common {TYPE_1__ wsm_cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cw1200_common *VAR_0, u8 *VAR_1)
{
 if (VAR_1 == VAR_0->wsm_cmd.ptr) {
  FUNC_0(&VAR_0->wsm_cmd.lock);
  VAR_0->wsm_cmd.ptr = ((void*)0);
  FUNC_1(&VAR_0->wsm_cmd.lock);
 }
}
