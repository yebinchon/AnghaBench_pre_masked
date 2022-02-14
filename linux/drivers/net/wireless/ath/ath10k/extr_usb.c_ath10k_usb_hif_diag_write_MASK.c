
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath10k_usb_ctrl_diag_cmd_write {int value; void* address; void* cmd; } ;
struct ath10k_usb {scalar_t__ diag_cmd_buffer; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,int *,int,int ,int *,int *) ;
 struct ath10k_usb* FUNC_1 (struct ath10k*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,void const*,int) ;
 int FUNC_4 (struct ath10k_usb_ctrl_diag_cmd_write*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_3, u32 VAR_4,
         const void *VAR_5, int VAR_6)
{
 struct ath10k_usb *VAR_7 = FUNC_1(VAR_3);
 struct ath10k_usb_ctrl_diag_cmd_write *VAR_8;
 int VAR_9;

 if (VAR_6 != sizeof(VAR_8->value))
  return -VAR_2;

 VAR_8 = (struct ath10k_usb_ctrl_diag_cmd_write *)VAR_7->diag_cmd_buffer;
 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->cmd = FUNC_2(VAR_1);
 VAR_8->address = FUNC_2(VAR_4);
 FUNC_3(&VAR_8->value, VAR_5, VAR_6);

 VAR_9 = FUNC_0(VAR_3,
        VAR_0,
        (u8 *)VAR_8,
        sizeof(*VAR_8),
        0, ((void*)0), ((void*)0));
 if (VAR_9)
  return VAR_9;

 return 0;
}
