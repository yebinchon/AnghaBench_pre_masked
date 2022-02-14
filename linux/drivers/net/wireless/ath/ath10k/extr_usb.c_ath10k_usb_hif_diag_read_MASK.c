
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath10k_usb_ctrl_diag_resp_read {int dummy; } ;
struct ath10k_usb_ctrl_diag_cmd_read {int address; int cmd; } ;
struct ath10k_usb {int diag_resp_buffer; scalar_t__ diag_cmd_buffer; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,int ,int *,int,int ,int ,int*) ;
 struct ath10k_usb* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (struct ath10k_usb_ctrl_diag_cmd_read*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_5, u32 VAR_6, void *VAR_7,
        size_t VAR_8)
{
 struct ath10k_usb *VAR_9 = FUNC_1(VAR_5);
 struct ath10k_usb_ctrl_diag_cmd_read *VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (VAR_8 < sizeof(struct ath10k_usb_ctrl_diag_resp_read))
  return -VAR_3;

 VAR_10 = (struct ath10k_usb_ctrl_diag_cmd_read *)VAR_9->diag_cmd_buffer;
 FUNC_4(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->cmd = VAR_2;
 VAR_10->address = FUNC_2(VAR_6);
 VAR_11 = sizeof(struct ath10k_usb_ctrl_diag_resp_read);

 VAR_12 = FUNC_0(VAR_5,
        VAR_0,
        (u8 *)VAR_10,
        sizeof(*VAR_10),
        VAR_1,
        VAR_9->diag_resp_buffer, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 != sizeof(struct ath10k_usb_ctrl_diag_resp_read))
  return -VAR_4;

 FUNC_3(VAR_7, VAR_9->diag_resp_buffer,
        sizeof(struct ath10k_usb_ctrl_diag_resp_read));

 return 0;
}
