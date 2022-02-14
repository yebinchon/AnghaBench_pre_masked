
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ems_usb {int dummy; } ;
struct TYPE_2__ {int * generic; } ;
struct ems_cpc_msg {TYPE_1__ msg; scalar_t__ msgid; scalar_t__ length; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ems_usb*,struct ems_cpc_msg*) ;

__attribute__((used)) static int FUNC_1(struct ems_usb *VAR_2, u8 VAR_3)
{
 struct ems_cpc_msg VAR_4;

 VAR_4.type = VAR_0;
 VAR_4.length = VAR_1 + 1;

 VAR_4.msgid = 0;

 VAR_4.msg.generic[0] = VAR_3;

 return FUNC_0(VAR_2, &VAR_4);
}
