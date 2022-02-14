
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct peak_usb_device {int ctrl_idx; } ;
struct pcan_ufd_options {void* usb_mask; void* ucan_mask; int opcode_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct pcan_ufd_options* FUNC_1 (struct peak_usb_device*) ;
 int FUNC_2 (struct peak_usb_device*,struct pcan_ufd_options*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct peak_usb_device *VAR_2,
       bool VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct pcan_ufd_options *VAR_6 = FUNC_1(VAR_2);

 VAR_6->opcode_channel = FUNC_3(VAR_2->ctrl_idx,
     (VAR_3) ? VAR_1 :
        VAR_0);

 VAR_6->ucan_mask = FUNC_0(VAR_4);
 VAR_6->usb_mask = FUNC_0(VAR_5);


 return FUNC_2(VAR_2, ++VAR_6);
}
