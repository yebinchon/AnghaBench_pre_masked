
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pucan_command {int opcode_channel; } ;
struct peak_usb_device {int ctrl_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct peak_usb_device*,scalar_t__*) ;
 scalar_t__* FUNC_1 (struct peak_usb_device*) ;
 int FUNC_2 (struct peak_usb_device*,scalar_t__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct peak_usb_device *VAR_1, u8 VAR_2)
{
 u8 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (VAR_2) {

  VAR_4 = FUNC_0(VAR_1, VAR_3);
 } else {
  struct pucan_command *VAR_5 = (struct pucan_command *)VAR_3;


  VAR_5->opcode_channel = FUNC_3(VAR_1->ctrl_idx,
       VAR_0);
  VAR_4 = sizeof(struct pucan_command);
 }


 return FUNC_2(VAR_1, VAR_3 + VAR_4);
}
