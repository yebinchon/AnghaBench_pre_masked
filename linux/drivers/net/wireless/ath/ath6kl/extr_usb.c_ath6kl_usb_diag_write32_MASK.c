
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl_usb_ctrl_diag_cmd_write {int value; void* address; void* cmd; } ;
struct ath6kl_usb {scalar_t__ diag_cmd_buffer; } ;
struct ath6kl {struct ath6kl_usb* hif_priv; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath6kl_usb*,int ,int *,int,int ,int *,int *) ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath6kl_usb_ctrl_diag_cmd_write*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_2, u32 VAR_3, __le32 VAR_4)
{
 struct ath6kl_usb *VAR_5 = VAR_2->hif_priv;
 struct ath6kl_usb_ctrl_diag_cmd_write *VAR_6;
 int VAR_7;

 VAR_6 = (struct ath6kl_usb_ctrl_diag_cmd_write *) VAR_5->diag_cmd_buffer;

 FUNC_3(VAR_6, 0, sizeof(struct ath6kl_usb_ctrl_diag_cmd_write));
 VAR_6->cmd = FUNC_2(VAR_1);
 VAR_6->address = FUNC_2(VAR_3);
 VAR_6->value = VAR_4;

 VAR_7 = FUNC_0(VAR_5,
        VAR_0,
        (u8 *) VAR_6,
        sizeof(*VAR_6),
        0, ((void*)0), ((void*)0));
 if (VAR_7) {
  FUNC_1("diag_write32 failed: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
