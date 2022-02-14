
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int ncontrols; TYPE_1__** cluster; } ;
struct TYPE_2__ {int is_new; } ;


 int FUNC_0 (struct v4l2_ctrl*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct v4l2_ctrl *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1->ncontrols; VAR_2++)
  FUNC_1(VAR_1->cluster[VAR_2]);
 if (!FUNC_0(VAR_1, VAR_0))
  for (VAR_2 = 1; VAR_2 < VAR_1->ncontrols; VAR_2++)
   if (VAR_1->cluster[VAR_2])
    VAR_1->cluster[VAR_2]->is_new = 1;
}
