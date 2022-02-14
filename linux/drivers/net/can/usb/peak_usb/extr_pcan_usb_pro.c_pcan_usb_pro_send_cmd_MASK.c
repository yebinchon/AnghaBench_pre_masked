
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct peak_usb_device {int state; int netdev; int udev; } ;
struct TYPE_2__ {int rec_buffer; } ;
struct pcan_usb_pro_msg {int rec_buffer_len; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct peak_usb_device *VAR_3,
     struct pcan_usb_pro_msg *VAR_4)
{
 int VAR_5;
 int VAR_6;


 if (!(VAR_3->state & VAR_2))
  return 0;

 VAR_6 = FUNC_1(VAR_3->udev,
  FUNC_2(VAR_3->udev, VAR_1),
  VAR_4->u.rec_buffer, VAR_4->rec_buffer_len,
  &VAR_5, VAR_0);
 if (VAR_6)
  FUNC_0(VAR_3->netdev, "sending command failure: %d\n", VAR_6);

 return VAR_6;
}
