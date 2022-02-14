
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct timespec64 {int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec64*) ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_1)
{
 struct timespec64 VAR_2;

 FUNC_0(&VAR_2);
 return VAR_2 / VAR_0;
}
