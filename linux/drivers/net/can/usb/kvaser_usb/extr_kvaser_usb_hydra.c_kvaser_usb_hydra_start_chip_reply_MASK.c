
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_usb_net_priv {int start_comp; int netdev; } ;
struct kvaser_usb {int dummy; } ;
struct kvaser_cmd {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct kvaser_usb_net_priv* FUNC_2 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct kvaser_usb *VAR_0,
           const struct kvaser_cmd *VAR_1)
{
 struct kvaser_usb_net_priv *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 if (FUNC_1(&VAR_2->start_comp) &&
     FUNC_3(VAR_2->netdev)) {
  FUNC_5(VAR_2->netdev);
 } else {
  FUNC_4(VAR_2->netdev);
  FUNC_0(&VAR_2->start_comp);
 }
}
