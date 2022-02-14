
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct phonet_port {int lock; } ;
struct f_phonet {int dev; } ;


 int FUNC_0 (struct usb_function*) ;
 struct f_phonet* FUNC_1 (struct usb_function*) ;
 struct phonet_port* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct usb_function *VAR_0)
{
 struct f_phonet *VAR_1 = FUNC_1(VAR_0);
 struct phonet_port *VAR_2 = FUNC_2(VAR_1->dev);
 unsigned long VAR_3;


 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_2->lock, VAR_3);
}
