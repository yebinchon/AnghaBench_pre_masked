
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {scalar_t__ dir_in; } ;
struct renesas_usb3 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct renesas_usb3*,int ,int ) ;
 struct renesas_usb3_ep* FUNC_3 (struct renesas_usb3*,int) ;
 struct renesas_usb3_request* FUNC_4 (struct renesas_usb3_ep*) ;
 scalar_t__ FUNC_5 (struct renesas_usb3*,int) ;
 int FUNC_6 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;
 int FUNC_7 (struct renesas_usb3*,struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;
 int FUNC_8 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;

__attribute__((used)) static void FUNC_9(struct renesas_usb3 *VAR_4, int VAR_5)
{
 struct renesas_usb3_ep *VAR_6 = FUNC_3(VAR_4, VAR_5);
 struct renesas_usb3_request *VAR_7 = FUNC_4(VAR_6);
 bool VAR_8 = 0;

 if (!VAR_7)
  return;

 FUNC_0(&VAR_4->lock);
 if (FUNC_5(VAR_4, VAR_5))
  goto out;

 if (VAR_6->dir_in) {

  if (!FUNC_8(VAR_6, VAR_7, VAR_3))
   FUNC_2(VAR_4, VAR_0, VAR_1);
 } else {
  if (!FUNC_6(VAR_6, VAR_7, VAR_2))
   VAR_8 = 1;
 }

out:

 FUNC_1(&VAR_4->lock);

 if (VAR_8)
  FUNC_7(VAR_4, VAR_6, VAR_7, 0);
}
