
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_ctrl*,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(struct v4l2_ctrl *VAR_1, bool VAR_2)
{

 bool VAR_3 = !VAR_2;
 bool VAR_4;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_3)

  VAR_4 = FUNC_2(4, &VAR_1->flags);
 else

  VAR_4 = FUNC_1(4, &VAR_1->flags);
 if (VAR_4 != VAR_3)
  FUNC_0(((void*)0), VAR_1, VAR_0);
}
