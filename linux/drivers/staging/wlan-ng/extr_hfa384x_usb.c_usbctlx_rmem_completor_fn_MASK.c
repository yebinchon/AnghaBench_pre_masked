
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbctlx_rmem_completor {int len; TYPE_1__* rmemresp; int data; } ;
struct usbctlx_completor {int dummy; } ;
struct TYPE_2__ {int data; int frmlen; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct usbctlx_completor *VAR_0)
{
 struct usbctlx_rmem_completor *VAR_1 =
  (struct usbctlx_rmem_completor *)VAR_0;

 FUNC_1("rmemresp:len=%d\n", VAR_1->rmemresp->frmlen);
 FUNC_0(VAR_1->data, VAR_1->rmemresp->data, VAR_1->len);
 return 0;
}
