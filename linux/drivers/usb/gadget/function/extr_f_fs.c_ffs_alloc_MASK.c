
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int dummy; } ;
struct usb_function {char* name; int free_func; int resume; int suspend; int req_match; int setup; int disable; int set_alt; int unbind; int bind; } ;
struct ffs_function {struct usb_function function; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct usb_function* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ffs_function* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct usb_function *FUNC_4(struct usb_function_instance *VAR_11)
{
 struct ffs_function *VAR_12;

 FUNC_0();

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
 if (FUNC_3(!VAR_12))
  return FUNC_1(-VAR_0);

 VAR_12->function.name = "Function FS Gadget";

 VAR_12->function.bind = VAR_3;
 VAR_12->function.unbind = VAR_10;
 VAR_12->function.set_alt = VAR_7;
 VAR_12->function.disable = VAR_4;
 VAR_12->function.setup = VAR_8;
 VAR_12->function.req_match = VAR_5;
 VAR_12->function.suspend = VAR_9;
 VAR_12->function.resume = VAR_6;
 VAR_12->function.free_func = VAR_2;

 return &VAR_12->function;
}
