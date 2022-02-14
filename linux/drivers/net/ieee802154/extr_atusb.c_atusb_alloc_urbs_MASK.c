
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct atusb {int idle_urbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atusb*) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct urb*,int *) ;

__attribute__((used)) static int FUNC_3(struct atusb *VAR_2, int VAR_3)
{
 struct urb *VAR_4;

 while (VAR_3) {
  VAR_4 = FUNC_1(0, VAR_1);
  if (!VAR_4) {
   FUNC_0(VAR_2);
   return -VAR_0;
  }
  FUNC_2(VAR_4, &VAR_2->idle_urbs);
  VAR_3--;
 }
 return 0;
}
