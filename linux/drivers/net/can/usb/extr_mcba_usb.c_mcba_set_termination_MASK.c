
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct mcba_usb_msg_termination {int termination; int cmd_id; } ;
struct mcba_usb_msg {int dummy; } ;
struct mcba_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mcba_priv*,struct mcba_usb_msg*) ;
 struct mcba_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u16 VAR_3)
{
 struct mcba_priv *VAR_4 = FUNC_1(VAR_2);
 struct mcba_usb_msg_termination VAR_5 = {
  .cmd_id = VAR_0
 };

 if (VAR_3 == VAR_1)
  VAR_5.termination = 1;
 else
  VAR_5.termination = 0;

 FUNC_0(VAR_4, (struct mcba_usb_msg *)&VAR_5);

 return 0;
}
