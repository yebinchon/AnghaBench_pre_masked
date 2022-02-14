
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct fsg_dev {int common; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 struct fsg_dev* FUNC_1 (struct usb_function*) ;

__attribute__((used)) static void FUNC_2(struct usb_function *VAR_1)
{
 struct fsg_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->common, VAR_0, ((void*)0));
}
