
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int family; } ;
struct TYPE_5__ {TYPE_1__ leaf; } ;
struct kvaser_usb {TYPE_3__* intf; TYPE_2__ card_data; } ;
struct kvaser_cmd {int id; } ;
struct TYPE_6__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_2 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_3 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_4 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_5 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_6 (struct kvaser_usb const*,struct kvaser_cmd const*) ;

__attribute__((used)) static void FUNC_7(const struct kvaser_usb *VAR_2,
        const struct kvaser_cmd *VAR_3)
{
 switch (VAR_3->id) {
 case 131:
  FUNC_3(VAR_2, VAR_3);
  break;

 case 130:
  FUNC_4(VAR_2, VAR_3);
  break;

 case 132:
 case 133:
  FUNC_2(VAR_2, VAR_3);
  break;

 case 134:
  if (VAR_2->card_data.leaf.family != VAR_0)
   goto warn;
  FUNC_2(VAR_2, VAR_3);
  break;

 case 136:
 case 137:
  if (VAR_2->card_data.leaf.family == VAR_0)
   FUNC_1(VAR_2, VAR_3);
  else
   FUNC_6(VAR_2, VAR_3);
  break;

 case 129:
  FUNC_5(VAR_2, VAR_3);
  break;


 case 128:
  if (VAR_2->card_data.leaf.family != VAR_1)
   goto warn;
  break;

 case 135:
  if (VAR_2->card_data.leaf.family != VAR_0)
   goto warn;
  break;

 default:
warn: FUNC_0(&VAR_2->intf->dev, "Unhandled command (%d)\n", VAR_3->id);
  break;
 }
}
