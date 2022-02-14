
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct vc_data {scalar_t__ vc_origin; scalar_t__ vc_visible_origin; int vc_pos; int vc_cursor_type; TYPE_1__ vc_font; int vc_num; } ;
struct sisusb_usb_data {int sisusb_cursor_size_to; int scrbuf; int sisusb_cursor_size_from; int lock; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sisusb_usb_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vc_data*,struct sisusb_usb_data*) ;
 int FUNC_3 (struct sisusb_usb_data*,int) ;
 int FUNC_4 (struct sisusb_usb_data*,int ,int,int) ;
 int FUNC_5 (struct sisusb_usb_data*,int ,int,int,int) ;
 int FUNC_6 (struct sisusb_usb_data*,int ,int,int) ;
 int FUNC_7 (struct sisusb_usb_data*,struct vc_data*) ;

__attribute__((used)) static void
FUNC_8(struct vc_data *VAR_2, int VAR_3)
{
 struct sisusb_usb_data *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_2->vc_num);
 if (!VAR_4)
  return;



 if (FUNC_2(VAR_2, VAR_4)) {
  FUNC_0(&VAR_4->lock);
  return;
 }

 if (VAR_2->vc_origin != VAR_2->vc_visible_origin) {
  VAR_2->vc_visible_origin = VAR_2->vc_origin;
  FUNC_7(VAR_4, VAR_2);
 }

 if (VAR_3 == VAR_0) {
  FUNC_6(VAR_4, VAR_1, 0x0a, 0x20);
  VAR_4->sisusb_cursor_size_to = -1;
  FUNC_0(&VAR_4->lock);
  return;
 }

 FUNC_3(VAR_4, (VAR_2->vc_pos - VAR_4->scrbuf) / 2);

 VAR_7 = VAR_2->vc_font.height - (VAR_2->vc_font.height < 10 ? 1 : 2);

 switch (VAR_2->vc_cursor_type & 0x0f) {
  case 133: VAR_5 = 1;
     VAR_6 = VAR_2->vc_font.height;
     break;
  case 129: VAR_5 = VAR_2->vc_font.height / 3;
     VAR_6 = VAR_7;
     break;
  case 132: VAR_5 = VAR_2->vc_font.height / 2;
     VAR_6 = VAR_7;
     break;
  case 131: VAR_5 = (VAR_2->vc_font.height * 2) / 3;
     VAR_6 = VAR_7;
     break;
  case 130: VAR_5 = 31;
     VAR_6 = 30;
     break;
  default:
  case 128: VAR_5 = VAR_7 - 1;
     VAR_6 = VAR_7;
     break;
 }

 if (VAR_4->sisusb_cursor_size_from != VAR_5 ||
     VAR_4->sisusb_cursor_size_to != VAR_6) {

  FUNC_4(VAR_4, VAR_1, 0x0a, VAR_5);
  FUNC_5(VAR_4, VAR_1, 0x0b, 0xe0, VAR_6);

  VAR_4->sisusb_cursor_size_from = VAR_5;
  VAR_4->sisusb_cursor_size_to = VAR_6;
 }

 FUNC_0(&VAR_4->lock);
}
