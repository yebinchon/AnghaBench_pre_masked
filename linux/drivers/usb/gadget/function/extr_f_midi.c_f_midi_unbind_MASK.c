
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_configuration {int dummy; } ;
struct usb_composite_dev {int dummy; } ;
struct snd_card {int dummy; } ;
struct f_midi {struct snd_card* card; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 int FUNC_1 (struct usb_function*) ;
 struct f_midi* FUNC_2 (struct usb_function*) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (struct usb_function*) ;

__attribute__((used)) static void FUNC_5(struct usb_configuration *VAR_0, struct usb_function *VAR_1)
{
 struct usb_composite_dev *VAR_2 = VAR_1->config->cdev;
 struct f_midi *VAR_3 = FUNC_2(VAR_1);
 struct snd_card *VAR_4;

 FUNC_0(VAR_2, "unbind\n");


 FUNC_1(VAR_1);

 VAR_4 = VAR_3->card;
 VAR_3->card = ((void*)0);
 if (VAR_4)
  FUNC_3(VAR_4);

 FUNC_4(VAR_1);
}
