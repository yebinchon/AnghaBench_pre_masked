
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct peak_usb_device {int ctrl_idx; } ;
struct pcan_ufd_clock {int mode; int opcode_channel; } ;


 int VAR_0 ;
 struct pcan_ufd_clock* FUNC_0 (struct peak_usb_device*) ;
 int FUNC_1 (struct peak_usb_device*,struct pcan_ufd_clock*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct peak_usb_device *VAR_1,
     u8 VAR_2)
{
 struct pcan_ufd_clock *VAR_3 = FUNC_0(VAR_1);

 VAR_3->opcode_channel = FUNC_2(VAR_1->ctrl_idx,
             VAR_0);
 VAR_3->mode = VAR_2;


 return FUNC_1(VAR_1, ++VAR_3);
}
