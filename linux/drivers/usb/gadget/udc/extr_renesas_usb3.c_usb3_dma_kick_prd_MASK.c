
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3_ep {int num; scalar_t__ dir_in; struct renesas_usb3_dma* dma; } ;
struct renesas_usb3_dma {int prd_dma; int num; } ;
struct renesas_usb3 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct renesas_usb3*,int) ;
 struct renesas_usb3* FUNC_6 (struct renesas_usb3_ep*) ;
 int FUNC_7 (struct renesas_usb3*,int,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct renesas_usb3_ep *VAR_4)
{
 struct renesas_usb3_dma *VAR_5 = VAR_4->dma;
 struct renesas_usb3 *VAR_6 = FUNC_6(VAR_4);
 u32 VAR_7 = FUNC_2(VAR_4->num) | VAR_1;

 if (VAR_4->dir_in)
  VAR_7 |= VAR_0;

 FUNC_8();

 FUNC_7(VAR_6, 1 << VAR_4->num, VAR_3);
 FUNC_7(VAR_6, FUNC_0(VAR_5->num) |
     FUNC_1(VAR_5->num), VAR_2);

 FUNC_7(VAR_6, VAR_5->prd_dma, FUNC_4(VAR_5->num));
 FUNC_7(VAR_6, VAR_7, FUNC_3(VAR_5->num));
 FUNC_5(VAR_6, VAR_4->num);
}
