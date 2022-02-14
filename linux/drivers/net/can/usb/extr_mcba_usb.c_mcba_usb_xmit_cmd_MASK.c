
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcba_usb_msg {int cmd_id; } ;
struct mcba_usb_ctx {int dummy; } ;
struct mcba_priv {int netdev; } ;


 struct mcba_usb_ctx* FUNC_0 (struct mcba_priv*,int *) ;
 int FUNC_1 (struct mcba_priv*,struct mcba_usb_msg*,struct mcba_usb_ctx*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct mcba_priv *VAR_0,
         struct mcba_usb_msg *VAR_1)
{
 struct mcba_usb_ctx *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0, ((void*)0));
 if (!VAR_2) {
  FUNC_2(VAR_0->netdev,
      "Lack of free ctx. Sending (%d) cmd aborted",
      VAR_1->cmd_id);

  return;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_0->netdev, "Failed to send cmd (%d)",
      VAR_1->cmd_id);
}
