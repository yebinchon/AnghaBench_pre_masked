
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int context; } ;
struct atusb {int idle_urbs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct urb*) ;
 struct urb* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct atusb *VAR_0)
{
 struct urb *VAR_1;

 while (1) {
  VAR_1 = FUNC_2(&VAR_0->idle_urbs);
  if (!VAR_1)
   break;
  FUNC_0(VAR_1->context);
  FUNC_1(VAR_1);
 }
}
