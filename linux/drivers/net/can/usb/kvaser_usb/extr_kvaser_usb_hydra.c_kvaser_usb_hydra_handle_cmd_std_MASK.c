
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb {TYPE_1__* intf; } ;
struct TYPE_4__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_2__ header; } ;
struct TYPE_3__ {int dev; } ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_2 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_3 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_4 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_5 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_6 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_7 (struct kvaser_usb const*,struct kvaser_cmd const*) ;

__attribute__((used)) static void FUNC_8(const struct kvaser_usb *VAR_0,
         const struct kvaser_cmd *VAR_1)
{
 switch (VAR_1->header.cmd_no) {
 case 130:
  FUNC_4(VAR_0, VAR_1);
  break;

 case 129:
  FUNC_6(VAR_0, VAR_1);
  break;

 case 134:
  FUNC_2(VAR_0, VAR_1);
  break;

 case 136:
  FUNC_5(VAR_0, VAR_1);
  break;

 case 135:
  FUNC_1(VAR_0, VAR_1);
  break;

 case 128:
  FUNC_7(VAR_0, VAR_1);
  break;

 case 133:
  FUNC_3(VAR_0, VAR_1);
  break;


 case 131:
 case 132:
  break;

 default:
  FUNC_0(&VAR_0->intf->dev, "Unhandled command (%d)\n",
    VAR_1->header.cmd_no);
  break;
 }
}
