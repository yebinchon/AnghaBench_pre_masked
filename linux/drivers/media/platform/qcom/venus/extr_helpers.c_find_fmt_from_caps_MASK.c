
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_caps {unsigned int num_fmts; TYPE_1__* fmts; } ;
struct TYPE_2__ {scalar_t__ buftype; scalar_t__ fmt; } ;



__attribute__((used)) static bool FUNC_0(struct venus_caps *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_fmts; VAR_3++) {
  if (VAR_0->fmts[VAR_3].buftype == VAR_1 &&
      VAR_0->fmts[VAR_3].fmt == VAR_2)
   return 1;
 }

 return 0;
}
