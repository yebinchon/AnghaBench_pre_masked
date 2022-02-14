
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_pcwd_private {unsigned char cmd_command; unsigned char cmd_data_msb; unsigned char cmd_data_lsb; int cmd_received; TYPE_1__* interface; int interface_number; int udev; int exists; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,int ,int,int ,unsigned char*,int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_pcwd_private *VAR_4,
  unsigned char VAR_5, unsigned char *VAR_6, unsigned char *VAR_7)
{
 int VAR_8, VAR_9;
 unsigned char *VAR_10;



 if ((!VAR_4) || (!VAR_4->exists))
  return -1;

 VAR_10 = FUNC_4(6, VAR_0);
 if (VAR_10 == ((void*)0))
  return 0;



 VAR_10[0] = VAR_5;
 VAR_10[1] = *VAR_6;
 VAR_10[2] = *VAR_7;
 VAR_10[3] = VAR_10[4] = VAR_10[5] = 0;

 FUNC_2(&VAR_4->interface->dev,
  "sending following data cmd=0x%02x msb=0x%02x lsb=0x%02x",
  VAR_10[0], VAR_10[1], VAR_10[2]);

 FUNC_1(&VAR_4->cmd_received, 0);

 if (FUNC_6(VAR_4->udev, FUNC_7(VAR_4->udev, 0),
   VAR_2, VAR_1,
   0x0200, VAR_4->interface_number, VAR_10, 6,
   VAR_3) != 6) {
  FUNC_2(&VAR_4->interface->dev,
   "usb_pcwd_send_command: error in usb_control_msg for cmd 0x%x 0x%x 0x%x\n",
   VAR_5, *VAR_6, *VAR_7);
 }


 VAR_8 = 0;
 for (VAR_9 = 0; (VAR_9 < VAR_3) && (!VAR_8);
        VAR_9++) {
  FUNC_5(1);
  if (FUNC_0(&VAR_4->cmd_received))
   VAR_8 = 1;
 }

 if ((VAR_8) && (VAR_5 == VAR_4->cmd_command)) {

  *VAR_6 = VAR_4->cmd_data_msb;
  *VAR_7 = VAR_4->cmd_data_lsb;
 }

 FUNC_3(VAR_10);

 return VAR_8;
}
