
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int dummy; } ;
struct usb_function {int free_func; int disable; int set_alt; int setup; int unbind; int bind; int name; } ;
struct fsg_opts {int lock; int refcnt; struct fsg_common* common; } ;
struct fsg_dev {struct usb_function function; struct fsg_common* common; } ;
struct fsg_common {int dummy; } ;


 int VAR_0 ;
 struct usb_function* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fsg_opts* FUNC_1 (struct usb_function_instance*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fsg_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct usb_function *FUNC_6(struct usb_function_instance *VAR_9)
{
 struct fsg_opts *VAR_10 = FUNC_1(VAR_9);
 struct fsg_common *VAR_11 = VAR_10->common;
 struct fsg_dev *VAR_12;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_2);
 if (FUNC_5(!VAR_12))
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_10->lock);
 VAR_10->refcnt++;
 FUNC_4(&VAR_10->lock);

 VAR_12->function.name = VAR_1;
 VAR_12->function.bind = VAR_3;
 VAR_12->function.unbind = VAR_8;
 VAR_12->function.setup = VAR_7;
 VAR_12->function.set_alt = VAR_6;
 VAR_12->function.disable = VAR_4;
 VAR_12->function.free_func = VAR_5;

 VAR_12->common = VAR_11;

 return &VAR_12->function;
}
