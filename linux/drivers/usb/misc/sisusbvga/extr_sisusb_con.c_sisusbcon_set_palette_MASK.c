
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int* vc_palette; int vc_num; } ;
struct sisusb_usb_data {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int *) ;
 struct sisusb_usb_data* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vc_data*,struct sisusb_usb_data*) ;
 scalar_t__ FUNC_4 (struct sisusb_usb_data*,int ,unsigned char const) ;

__attribute__((used)) static void
FUNC_5(struct vc_data *VAR_2, const unsigned char *VAR_3)
{
 struct sisusb_usb_data *VAR_4;
 int VAR_5, VAR_6;



 if (!FUNC_0(VAR_2))
  return;

 VAR_4 = FUNC_2(VAR_2->vc_num);
 if (!VAR_4)
  return;



 if (FUNC_3(VAR_2, VAR_4)) {
  FUNC_1(&VAR_4->lock);
  return;
 }

 for (VAR_5 = VAR_6 = 0; VAR_5 < 16; VAR_5++) {
  if (FUNC_4(VAR_4, VAR_1, VAR_3[VAR_5]))
   break;
  if (FUNC_4(VAR_4, VAR_0, VAR_2->vc_palette[VAR_6++] >> 2))
   break;
  if (FUNC_4(VAR_4, VAR_0, VAR_2->vc_palette[VAR_6++] >> 2))
   break;
  if (FUNC_4(VAR_4, VAR_0, VAR_2->vc_palette[VAR_6++] >> 2))
   break;
 }

 FUNC_1(&VAR_4->lock);
}
