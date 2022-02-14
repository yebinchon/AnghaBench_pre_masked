
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {unsigned int ncontrols; int flags; int has_volatiles; struct v4l2_ctrl** cluster; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(unsigned VAR_1, struct v4l2_ctrl **VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;


 if (FUNC_0(VAR_1 == 0 || VAR_2[0] == ((void*)0)))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4]) {
   VAR_2[VAR_4]->cluster = VAR_2;
   VAR_2[VAR_4]->ncontrols = VAR_1;
   if (VAR_2[VAR_4]->flags & VAR_0)
    VAR_3 = 1;
  }
 }
 VAR_2[0]->has_volatiles = VAR_3;
}
