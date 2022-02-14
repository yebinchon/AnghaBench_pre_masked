
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int lock; } ;


 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct v4l2_ctrl_handler *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return 0;

 FUNC_1(VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_0->lock);

 return VAR_1;
}
