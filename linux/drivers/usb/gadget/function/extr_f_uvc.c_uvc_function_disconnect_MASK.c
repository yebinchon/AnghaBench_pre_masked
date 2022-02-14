
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int func; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;

void
FUNC_2(struct uvc_device *VAR_0)
{
 int VAR_1;

 if ((VAR_1 = FUNC_0(&VAR_0->func)) < 0)
  FUNC_1(&VAR_0->func, "UVC disconnect failed with %d\n", VAR_1);
}
