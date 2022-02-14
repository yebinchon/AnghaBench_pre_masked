
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbctlx_completor {int dummy; } ;
struct usbctlx_cmd_completor {int result; int cmdresp; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct usbctlx_completor *VAR_0)
{
 struct usbctlx_cmd_completor *VAR_1;

 VAR_1 = (struct usbctlx_cmd_completor *)VAR_0;
 return FUNC_0(VAR_1->cmdresp, VAR_1->result);
}
