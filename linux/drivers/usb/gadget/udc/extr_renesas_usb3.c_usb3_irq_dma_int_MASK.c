
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {TYPE_1__* dma; } ;
struct renesas_usb3 {int num_usb3_eps; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 struct renesas_usb3_ep* FUNC_3 (struct renesas_usb3*,int) ;
 struct renesas_usb3_request* FUNC_4 (struct renesas_usb3_ep*) ;
 int FUNC_5 (struct renesas_usb3*,int ) ;
 int FUNC_6 (struct renesas_usb3*,struct renesas_usb3_ep*,struct renesas_usb3_request*,int) ;

__attribute__((used)) static void FUNC_7(struct renesas_usb3 *VAR_1, u32 VAR_2)
{
 struct renesas_usb3_ep *VAR_3;
 struct renesas_usb3_request *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_usb3_eps; VAR_5++) {
  if (!(VAR_2 & FUNC_1(VAR_5)))
   continue;

  VAR_3 = FUNC_3(VAR_1, VAR_5);
  if (!(FUNC_5(VAR_1, VAR_0) &
      FUNC_0(VAR_3->dma->num)))
   continue;

  VAR_4 = FUNC_4(VAR_3);
  VAR_6 = FUNC_2(VAR_3, VAR_4);
  FUNC_6(VAR_1, VAR_3, VAR_4, VAR_6);
 }
}
