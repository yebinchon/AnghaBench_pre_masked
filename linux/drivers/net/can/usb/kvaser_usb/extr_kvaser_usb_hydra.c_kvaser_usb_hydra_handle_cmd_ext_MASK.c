
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb {TYPE_1__* intf; } ;
struct TYPE_4__ {int cmd_no; } ;
struct kvaser_cmd_ext {int cmd_no_ext; TYPE_2__ header; } ;
struct kvaser_cmd {int dummy; } ;
struct TYPE_3__ {int dev; } ;




 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_cmd_ext const*) ;
 int FUNC_2 (struct kvaser_usb const*,struct kvaser_cmd*) ;

__attribute__((used)) static void FUNC_3(const struct kvaser_usb *VAR_0,
         const struct kvaser_cmd_ext *VAR_1)
{
 switch (VAR_1->cmd_no_ext) {
 case 128:
  FUNC_2(VAR_0, (struct kvaser_cmd *)VAR_1);
  break;

 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;

 default:
  FUNC_0(&VAR_0->intf->dev, "Unhandled extended command (%d)\n",
    VAR_1->header.cmd_no);
  break;
 }
}
