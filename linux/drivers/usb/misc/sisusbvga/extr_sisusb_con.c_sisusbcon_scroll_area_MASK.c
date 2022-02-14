
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_video_erase_char; } ;
struct sisusb_usb_data {int sisusb_num_columns; int lock; } ;
typedef enum con_scroll { ____Placeholder_con_scroll } con_scroll ;




 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sisusb_usb_data*,int ,int ,int) ;
 int FUNC_3 (struct sisusb_usb_data*,struct vc_data*,int ,unsigned int) ;
 int FUNC_4 (struct sisusb_usb_data*,struct vc_data*,int ,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static bool
FUNC_6(struct vc_data *VAR_0, struct sisusb_usb_data *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, enum con_scroll VAR_4,
  unsigned int VAR_5)
{
 int VAR_6 = VAR_1->sisusb_num_columns;
 int VAR_7 = ((VAR_3 - VAR_2) * VAR_6) * 2;
 u16 VAR_8 = VAR_0->vc_video_erase_char;
 switch (VAR_4) {

  case 128:
   FUNC_0(FUNC_4(VAR_1, VAR_0, 0, VAR_2),
        FUNC_4(VAR_1, VAR_0, 0, VAR_2 + VAR_5),
        (VAR_3 - VAR_2 - VAR_5) * VAR_6 * 2);
   FUNC_5(FUNC_4(VAR_1, VAR_0, 0, VAR_3 - VAR_5),
     VAR_8, VAR_5 * VAR_6 * 2);
   break;

  case 129:
   FUNC_0(FUNC_4(VAR_1, VAR_0, 0, VAR_2 + VAR_5),
        FUNC_4(VAR_1, VAR_0, 0, VAR_2),
        (VAR_3 - VAR_2 - VAR_5) * VAR_6 * 2);
   FUNC_5(FUNC_4(VAR_1, VAR_0, 0, VAR_2), VAR_8,
       VAR_5 * VAR_6 * 2);
   break;
 }

 FUNC_2(VAR_1, FUNC_4(VAR_1, VAR_0, 0, VAR_2),
   FUNC_3(VAR_1, VAR_0, 0, VAR_2), VAR_7);

 FUNC_1(&VAR_1->lock);

 return 1;
}
