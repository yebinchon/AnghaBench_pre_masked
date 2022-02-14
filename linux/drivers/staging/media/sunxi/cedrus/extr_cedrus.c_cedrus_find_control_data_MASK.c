
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cedrus_ctx {TYPE_2__** ctrls; } ;
struct TYPE_3__ {void* p; } ;
struct TYPE_4__ {scalar_t__ id; TYPE_1__ p_cur; } ;



void *FUNC_0(struct cedrus_ctx *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_0->ctrls[VAR_2]; VAR_2++)
  if (VAR_0->ctrls[VAR_2]->id == VAR_1)
   return VAR_0->ctrls[VAR_2]->p_cur.p;

 return ((void*)0);
}
