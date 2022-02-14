
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dx_root_info {unsigned int indirect_levels; } ;
struct dx_root {struct dx_root_info info; } ;
struct dx_frame {TYPE_1__* bh; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct dx_frame *VAR_0)
{
 struct dx_root_info *VAR_1;
 int VAR_2;
 unsigned int VAR_3;

 if (VAR_0[0].bh == ((void*)0))
  return;

 VAR_1 = &((struct dx_root *)VAR_0[0].bh->b_data)->info;

 VAR_3 = VAR_1->indirect_levels;
 for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++) {
  if (VAR_0[VAR_2].bh == ((void*)0))
   break;
  FUNC_0(VAR_0[VAR_2].bh);
  VAR_0[VAR_2].bh = ((void*)0);
 }
}
