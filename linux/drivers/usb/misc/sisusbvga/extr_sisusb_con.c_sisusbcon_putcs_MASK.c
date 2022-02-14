
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_num; } ;
struct sisusb_usb_data {int lock; } ;


 int FUNC_0 (int ,unsigned short const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sisusb_usb_data*,int ,int ,int) ;
 struct sisusb_usb_data* FUNC_3 (int ) ;
 int FUNC_4 (struct sisusb_usb_data*,struct vc_data*,int,int) ;
 scalar_t__ FUNC_5 (struct vc_data*,struct sisusb_usb_data*) ;
 int FUNC_6 (struct sisusb_usb_data*,struct vc_data*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct vc_data *VAR_0, const unsigned short *VAR_1,
           int VAR_2, int VAR_3, int VAR_4)
{
 struct sisusb_usb_data *VAR_5;

 VAR_5 = FUNC_3(VAR_0->vc_num);
 if (!VAR_5)
  return;







 FUNC_0(FUNC_6(VAR_5, VAR_0, VAR_4, VAR_3), VAR_1, VAR_2 * 2);

 if (FUNC_5(VAR_0, VAR_5)) {
  FUNC_1(&VAR_5->lock);
  return;
 }

 FUNC_2(VAR_5, FUNC_6(VAR_5, VAR_0, VAR_4, VAR_3),
   FUNC_4(VAR_5, VAR_0, VAR_4, VAR_3), VAR_2 * 2);

 FUNC_1(&VAR_5->lock);
}
