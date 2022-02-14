
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_cols; int vc_num; int vc_video_erase_char; } ;
struct sisusb_usb_data {int sisusb_num_columns; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sisusb_usb_data*,int *,int ,int) ;
 struct sisusb_usb_data* FUNC_2 (int ) ;
 int FUNC_3 (struct sisusb_usb_data*,struct vc_data*,int,int) ;
 scalar_t__ FUNC_4 (struct vc_data*,struct sisusb_usb_data*) ;
 int * FUNC_5 (struct sisusb_usb_data*,struct vc_data*,int,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct vc_data *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct sisusb_usb_data *VAR_5;
 u16 VAR_6 = VAR_0->vc_video_erase_char;
 int VAR_7, VAR_8, VAR_9;
 u16 *VAR_10;

 if (VAR_4 <= 0 || VAR_3 <= 0)
  return;

 VAR_5 = FUNC_2(VAR_0->vc_num);
 if (!VAR_5)
  return;







 VAR_10 = FUNC_5(VAR_5, VAR_0, VAR_2, VAR_1);

 VAR_9 = VAR_5->sisusb_num_columns;

 if (VAR_4 > VAR_9)
  VAR_4 = VAR_9;

 if (VAR_2 == 0 && VAR_4 >= VAR_0->vc_cols) {

  FUNC_6(VAR_10, VAR_6, VAR_3 * VAR_9 * 2);

 } else {

  for (VAR_7 = VAR_3; VAR_7 > 0; VAR_7--, VAR_10 += VAR_9)
   FUNC_6(VAR_10, VAR_6, VAR_4 * 2);

 }

 if (FUNC_4(VAR_0, VAR_5)) {
  FUNC_0(&VAR_5->lock);
  return;
 }

 VAR_8 = ((VAR_3 * VAR_9) - VAR_2 - (VAR_9 - VAR_4 - VAR_2)) * 2;


 FUNC_1(VAR_5, FUNC_5(VAR_5, VAR_0, VAR_2, VAR_1),
   FUNC_3(VAR_5, VAR_0, VAR_2, VAR_1), VAR_8);

 FUNC_0(&VAR_5->lock);
}
