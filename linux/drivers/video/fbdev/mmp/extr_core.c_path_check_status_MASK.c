
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_path {int overlay_num; TYPE_1__* overlays; } ;
struct TYPE_2__ {scalar_t__ status; } ;



__attribute__((used)) static int FUNC_0(struct mmp_path *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->overlay_num; VAR_1++)
  if (VAR_0->overlays[VAR_1].status)
   return 1;

 return 0;
}
