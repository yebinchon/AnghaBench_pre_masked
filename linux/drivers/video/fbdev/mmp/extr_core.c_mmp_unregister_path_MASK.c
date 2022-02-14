
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_path {int overlay_num; int access_ok; TYPE_1__* overlays; int node; } ;
struct TYPE_2__ {int access_ok; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmp_path*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mmp_path *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_3(&VAR_0);

 FUNC_1(&VAR_1->node);


 for (VAR_2 = 0; VAR_2 < VAR_1->overlay_num; VAR_2++)
  FUNC_2(&VAR_1->overlays[VAR_2].access_ok);

 FUNC_2(&VAR_1->access_ok);

 FUNC_0(VAR_1);
 FUNC_4(&VAR_0);
}
