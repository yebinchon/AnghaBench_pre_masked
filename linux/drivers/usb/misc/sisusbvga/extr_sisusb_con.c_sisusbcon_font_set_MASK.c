
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_num; } ;
struct sisusb_usb_data {unsigned int font_backup_size; int font_backup_512; int font_backup_height; int * font_backup; } ;
struct console_font {unsigned int charcount; int width; int height; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 struct sisusb_usb_data* FUNC_2 (int ) ;
 int FUNC_3 (struct sisusb_usb_data*,int,int,int ,int,int,int,struct vc_data*,int ,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct vc_data *VAR_3, struct console_font *VAR_4,
     unsigned int VAR_5)
{
 struct sisusb_usb_data *VAR_6;
 unsigned VAR_7 = VAR_4->charcount;

 if (VAR_4->width != 8 || (VAR_7 != 256 && VAR_7 != 512))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3->vc_num);
 if (!VAR_6)
  return -VAR_1;







 if (VAR_6->font_backup) {
  if (VAR_6->font_backup_size < VAR_7) {
   FUNC_4(VAR_6->font_backup);
   VAR_6->font_backup = ((void*)0);
  }
 }

 if (!VAR_6->font_backup)
  VAR_6->font_backup = FUNC_5(FUNC_0(VAR_7, 32));

 if (VAR_6->font_backup) {
  FUNC_1(VAR_6->font_backup, VAR_4->data, VAR_7 * 32);
  VAR_6->font_backup_size = VAR_7;
  VAR_6->font_backup_height = VAR_4->height;
  VAR_6->font_backup_512 = (VAR_7 == 512) ? 1 : 0;
 }



 return FUNC_3(VAR_6, 1, 2, VAR_4->data,
   8192, (VAR_7 == 512),
   (!(VAR_5 & VAR_2)) ? 1 : 0,
   VAR_3, VAR_4->height, 1);
}
