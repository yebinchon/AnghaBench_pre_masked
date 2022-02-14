
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct vc_data {TYPE_1__ vc_font; int vc_num; } ;
struct sisusb_usb_data {int lock; int font_backup; } ;
struct console_font {int width; int charcount; int data; int height; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 struct sisusb_usb_data* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vc_data *VAR_1, struct console_font *VAR_2)
{
 struct sisusb_usb_data *VAR_3;

 VAR_3 = FUNC_2(VAR_1->vc_num);
 if (!VAR_3)
  return -VAR_0;



 VAR_2->width = 8;
 VAR_2->height = VAR_1->vc_font.height;
 VAR_2->charcount = 256;

 if (!VAR_2->data) {
  FUNC_1(&VAR_3->lock);
  return 0;
 }

 if (!VAR_3->font_backup) {
  FUNC_1(&VAR_3->lock);
  return -VAR_0;
 }


 FUNC_0(VAR_2->data, VAR_3->font_backup, 256 * 32);

 FUNC_1(&VAR_3->lock);

 return 0;
}
