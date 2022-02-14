
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct pcan_usb* context; } ;
struct pcan_usb {int restart_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_2)
{
 struct pcan_usb *VAR_3 = VAR_2->context;


 FUNC_0(&VAR_3->restart_timer,
   VAR_1 + FUNC_1(VAR_0));


 FUNC_2(VAR_2);
}
