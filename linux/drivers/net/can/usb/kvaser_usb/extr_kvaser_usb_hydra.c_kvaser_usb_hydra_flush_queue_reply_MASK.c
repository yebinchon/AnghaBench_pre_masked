
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_usb_net_priv {int flush_comp; } ;
struct kvaser_usb {int dummy; } ;
struct kvaser_cmd {int dummy; } ;


 int FUNC_0 (int *) ;
 struct kvaser_usb_net_priv* FUNC_1 (struct kvaser_usb const*,struct kvaser_cmd const*) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb *VAR_0,
            const struct kvaser_cmd *VAR_1)
{
 struct kvaser_usb_net_priv *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->flush_comp);
}
