
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mcba_usb_msg_change_bitrate {int bitrate; int cmd_id; } ;
struct mcba_usb_msg {int dummy; } ;
struct mcba_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mcba_priv*,struct mcba_usb_msg*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mcba_priv *VAR_1, u16 VAR_2)
{
 struct mcba_usb_msg_change_bitrate VAR_3 = {
  .cmd_id = VAR_0
 };

 FUNC_1(VAR_2, &VAR_3.bitrate);

 FUNC_0(VAR_1, (struct mcba_usb_msg *)&VAR_3);
}
