
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_ep {int halt; int wedge; int num; } ;
struct renesas_usb3 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct renesas_usb3* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*,int ) ;
 int FUNC_4 (struct renesas_usb3*) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3*) ;
 int FUNC_7 (struct renesas_usb3*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct renesas_usb3_ep *VAR_2, bool VAR_3,
       bool VAR_4)
{
 struct renesas_usb3 *VAR_5 = FUNC_2(VAR_2);
 unsigned long VAR_6;

 FUNC_0(&VAR_5->lock, VAR_6);
 if (!FUNC_3(VAR_5, VAR_2->num)) {
  VAR_2->halt = VAR_3;
  if (VAR_3) {
   FUNC_5(VAR_5);
  } else if (!VAR_4 || !VAR_2->wedge) {
   FUNC_4(VAR_5);
   FUNC_7(VAR_5, VAR_0, VAR_1);
   FUNC_6(VAR_5);
  }
 }
 FUNC_1(&VAR_5->lock, VAR_6);

 return 0;
}
