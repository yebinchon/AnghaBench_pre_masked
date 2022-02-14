
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {scalar_t__ dir_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;
 int FUNC_1 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_2 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;

__attribute__((used)) static void FUNC_3(struct renesas_usb3_ep *VAR_2,
    struct renesas_usb3_request *VAR_3)
{
 int VAR_4;

 if (VAR_2->dir_in)
  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_1);
 else
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);

 if (!VAR_4)
  FUNC_1(VAR_2, VAR_3);
}
