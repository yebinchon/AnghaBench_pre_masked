
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_visible_origin; int vc_origin; int vc_num; } ;
struct sisusb_usb_data {int lock; scalar_t__ con_rolled_over; int scrbuf; scalar_t__ con_blanked; } ;


 int FUNC_0 (int *) ;
 struct sisusb_usb_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vc_data*,struct sisusb_usb_data*) ;
 int FUNC_3 (struct sisusb_usb_data*,struct vc_data*) ;

__attribute__((used)) static int
FUNC_4(struct vc_data *VAR_0)
{
 struct sisusb_usb_data *VAR_1;






 VAR_1 = FUNC_1(VAR_0->vc_num);
 if (!VAR_1)
  return 0;



 if (FUNC_2(VAR_0, VAR_1) || VAR_1->con_blanked) {
  FUNC_0(&VAR_1->lock);
  return 0;
 }

 VAR_0->vc_origin = VAR_0->vc_visible_origin = VAR_1->scrbuf;

 FUNC_3(VAR_1, VAR_0);

 VAR_1->con_rolled_over = 0;

 FUNC_0(&VAR_1->lock);

 return 1;
}
