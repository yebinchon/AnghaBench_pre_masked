
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct peak_usb_device {int ctrl_idx; int cmd_buf; } ;
struct pcan_usb_pro_msg {int dummy; } ;
struct pcan_usb_pro_devid {int serial_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pcan_usb_pro_msg*,int ,int ) ;
 int * FUNC_2 (struct pcan_usb_pro_msg*,int ,int ) ;
 int FUNC_3 (struct peak_usb_device*,struct pcan_usb_pro_msg*) ;
 int FUNC_4 (struct peak_usb_device*,struct pcan_usb_pro_msg*) ;

__attribute__((used)) static int FUNC_5(struct peak_usb_device *VAR_2,
          u32 *VAR_3)
{
 struct pcan_usb_pro_devid *VAR_4;
 struct pcan_usb_pro_msg VAR_5;
 int VAR_6;
 u8 *VAR_7;

 VAR_7 = FUNC_2(&VAR_5, VAR_2->cmd_buf, VAR_1);
 FUNC_1(&VAR_5, VAR_0, VAR_2->ctrl_idx);

 VAR_6 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = (struct pcan_usb_pro_devid *)VAR_7;
 if (VAR_3)
  *VAR_3 = FUNC_0(VAR_4->serial_num);

 return VAR_6;
}
