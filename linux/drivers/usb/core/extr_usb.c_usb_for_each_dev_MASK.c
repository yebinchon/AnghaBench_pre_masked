
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct each_dev_arg {void* member_0; int (* member_1 ) (struct usb_device*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct each_dev_arg*,int ) ;
 int VAR_1 ;

int FUNC_1(void *VAR_2, int (*VAR_3)(struct usb_device *, void *))
{
 struct each_dev_arg VAR_4 = {VAR_2, VAR_3};

 return FUNC_0(&VAR_1, ((void*)0), &VAR_4, VAR_0);
}
