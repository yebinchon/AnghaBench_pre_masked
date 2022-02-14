
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_sec; int tv_nsec; } ;
struct vudc {TYPE_1__ start_time; } ;
struct usb_gadget {int dummy; } ;
struct timespec64 {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 struct vudc* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_1)
{
 struct timespec64 VAR_2;
 struct vudc *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2);
 return ((VAR_2.tv_sec - VAR_3->start_time.tv_sec) * 1000 +
  (VAR_2.tv_nsec - VAR_3->start_time.tv_nsec) / VAR_0)
   & 0x7FF;
}
