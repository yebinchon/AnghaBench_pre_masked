
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int * dev; } ;


 struct v4l2_device* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct v4l2_device *VAR_0)
{
 if (VAR_0->dev == ((void*)0))
  return;

 if (FUNC_0(VAR_0->dev) == VAR_0)
  FUNC_1(VAR_0->dev, ((void*)0));
 FUNC_2(VAR_0->dev);
 VAR_0->dev = ((void*)0);
}
