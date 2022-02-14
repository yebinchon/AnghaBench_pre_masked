
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int num; } ;
struct renesas_usb3 {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct renesas_usb3*,int ) ;
 struct renesas_usb3_request* FUNC_3 (struct renesas_usb3_ep*) ;
 scalar_t__ FUNC_4 (struct renesas_usb3*,int ) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int) ;
 int FUNC_7 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;

__attribute__((used)) static void FUNC_8(struct renesas_usb3 *VAR_0,
        struct renesas_usb3_ep *VAR_1,
        struct renesas_usb3_request *VAR_2,
        int VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_0->lock, VAR_4);
 if (FUNC_4(VAR_0, VAR_1->num))
  FUNC_5(VAR_0);
 FUNC_1(&VAR_0->lock, VAR_4);

 FUNC_2(VAR_0, VAR_1->num);
 FUNC_6(VAR_1, VAR_2, VAR_3);


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_7(VAR_1, VAR_2);
}
