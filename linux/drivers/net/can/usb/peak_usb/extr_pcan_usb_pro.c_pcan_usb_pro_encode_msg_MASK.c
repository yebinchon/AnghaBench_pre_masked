
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct peak_usb_device {int ctrl_idx; } ;
struct pcan_usb_pro_msg {size_t rec_buffer_len; } ;
struct can_frame {int can_id; int can_dlc; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcan_usb_pro_msg*,int,int ,int,int,int,int ) ;
 int FUNC_1 (struct pcan_usb_pro_msg*,int*,size_t) ;

__attribute__((used)) static int FUNC_2(struct peak_usb_device *VAR_5,
       struct sk_buff *VAR_6, u8 *VAR_7, size_t *VAR_8)
{
 struct can_frame *VAR_9 = (struct can_frame *)VAR_6->data;
 u8 VAR_10, VAR_11, VAR_12;
 struct pcan_usb_pro_msg VAR_13;

 FUNC_1(&VAR_13, VAR_7, *VAR_8);

 if ((VAR_9->can_id & VAR_1) || (VAR_9->can_dlc == 0))
  VAR_10 = VAR_2;
 else if (VAR_9->can_dlc <= 4)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_4;

 VAR_11 = (VAR_5->ctrl_idx << 4) | (VAR_9->can_dlc & 0x0f);

 VAR_12 = 0;
 if (VAR_9->can_id & VAR_0)
  VAR_12 |= 0x02;
 if (VAR_9->can_id & VAR_1)
  VAR_12 |= 0x01;

 FUNC_0(&VAR_13, VAR_10, 0, VAR_12, VAR_11, VAR_9->can_id,
    VAR_9->data);

 *VAR_8 = VAR_13.rec_buffer_len;

 return 0;
}
