
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct peak_usb_device {int ctrl_idx; int cmd_buf; } ;
struct pcan_usb_pro_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcan_usb_pro_msg*,int ,int ,int ) ;
 int FUNC_1 (struct pcan_usb_pro_msg*,int ,int ) ;
 int FUNC_2 (struct peak_usb_device*,struct pcan_usb_pro_msg*) ;

__attribute__((used)) static int FUNC_3(struct peak_usb_device *VAR_2, u16 VAR_3)
{
 struct pcan_usb_pro_msg VAR_4;

 FUNC_1(&VAR_4, VAR_2->cmd_buf, VAR_1);
 FUNC_0(&VAR_4, VAR_0, VAR_2->ctrl_idx, VAR_3);

 return FUNC_2(VAR_2, &VAR_4);
}
