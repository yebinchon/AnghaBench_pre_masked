
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int * int_urb; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,int ) ;

int FUNC_1(struct uvc_device *VAR_0, gfp_t VAR_1)
{
 if (VAR_0->int_urb == ((void*)0))
  return 0;

 return FUNC_0(VAR_0->int_urb, VAR_1);
}
