
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcba_usb_msg_fw_ver {int pic; int cmd_id; } ;
struct mcba_usb_msg {int dummy; } ;
struct mcba_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mcba_priv*,struct mcba_usb_msg*) ;

__attribute__((used)) static void FUNC_1(struct mcba_priv *VAR_1, u8 VAR_2)
{
 struct mcba_usb_msg_fw_ver VAR_3 = {
  .cmd_id = VAR_0,
  .pic = VAR_2
 };

 FUNC_0(VAR_1, (struct mcba_usb_msg *)&VAR_3);
}
