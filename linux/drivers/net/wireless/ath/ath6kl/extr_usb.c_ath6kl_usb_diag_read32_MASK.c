
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl_usb_ctrl_diag_resp_read {int value; } ;
struct ath6kl_usb_ctrl_diag_cmd_write {int dummy; } ;
struct ath6kl_usb_ctrl_diag_cmd_read {int address; int cmd; } ;
struct ath6kl_usb {scalar_t__ diag_resp_buffer; scalar_t__ diag_cmd_buffer; } ;
struct ath6kl {struct ath6kl_usb* hif_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath6kl_usb*,int ,int *,int,int ,scalar_t__,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath6kl_usb_ctrl_diag_cmd_read*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 struct ath6kl_usb *VAR_6 = VAR_3->hif_priv;
 struct ath6kl_usb_ctrl_diag_resp_read *VAR_7;
 struct ath6kl_usb_ctrl_diag_cmd_read *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8 = (struct ath6kl_usb_ctrl_diag_cmd_read *) VAR_6->diag_cmd_buffer;

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->cmd = VAR_2;
 VAR_8->address = FUNC_2(VAR_4);
 VAR_9 = sizeof(*VAR_7);

 VAR_10 = FUNC_0(VAR_6,
    VAR_0,
    (u8 *) VAR_8,
    sizeof(struct ath6kl_usb_ctrl_diag_cmd_write),
    VAR_1,
    VAR_6->diag_resp_buffer, &VAR_9);

 if (VAR_10) {
  FUNC_1("diag read32 failed: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_7 = (struct ath6kl_usb_ctrl_diag_resp_read *)
  VAR_6->diag_resp_buffer;

 *VAR_5 = FUNC_3(VAR_7->value);

 return VAR_10;
}
