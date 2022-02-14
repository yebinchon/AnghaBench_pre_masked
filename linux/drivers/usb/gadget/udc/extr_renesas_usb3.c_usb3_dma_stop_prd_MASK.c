
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_ep {int num; struct renesas_usb3_dma* dma; } ;
struct renesas_usb3_dma {int num; } ;
struct renesas_usb3 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct renesas_usb3*,int ) ;
 struct renesas_usb3* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct renesas_usb3_ep *VAR_0)
{
 struct renesas_usb3 *VAR_1 = FUNC_2(VAR_0);
 struct renesas_usb3_dma *VAR_2 = VAR_0->dma;

 FUNC_1(VAR_1, VAR_0->num);
 FUNC_3(VAR_1, 0, FUNC_0(VAR_2->num));
}
