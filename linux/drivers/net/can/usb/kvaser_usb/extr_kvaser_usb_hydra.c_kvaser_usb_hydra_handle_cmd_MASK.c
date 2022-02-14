
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvaser_usb {int dummy; } ;
struct kvaser_cmd_ext {int dummy; } ;
struct TYPE_2__ {scalar_t__ cmd_no; } ;
struct kvaser_cmd {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvaser_usb const*,struct kvaser_cmd_ext*) ;
 int FUNC_1 (struct kvaser_usb const*,struct kvaser_cmd const*) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb *VAR_1,
     const struct kvaser_cmd *VAR_2)
{
  if (VAR_2->header.cmd_no == VAR_0)
   FUNC_0
     (VAR_1, (struct kvaser_cmd_ext *)VAR_2);
  else
   FUNC_1(VAR_1, VAR_2);
}
