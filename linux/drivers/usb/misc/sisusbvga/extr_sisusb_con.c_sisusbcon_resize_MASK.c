
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_scan_lines; int vc_num; } ;
struct sisusb_usb_data {int current_font_height; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sisusb_usb_data* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct vc_data *VAR_2, unsigned int VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 struct sisusb_usb_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2->vc_num);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = VAR_6->current_font_height;

 FUNC_0(&VAR_6->lock);
 if (VAR_3 != 80 || VAR_2->vc_scan_lines / VAR_7 != VAR_4)
  return -VAR_0;

 return 0;
}
