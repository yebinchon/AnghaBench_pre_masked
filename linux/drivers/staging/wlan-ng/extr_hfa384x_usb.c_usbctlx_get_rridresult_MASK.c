
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfa384x_usb_rridresp {int frmlen; int data; int rid; } ;
struct hfa384x_rridresult {int rid; int riddata_len; int riddata; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct hfa384x_usb_rridresp *VAR_0,
         struct hfa384x_rridresult *VAR_1)
{
 VAR_1->rid = FUNC_0(VAR_0->rid);
 VAR_1->riddata = VAR_0->data;
 VAR_1->riddata_len = ((FUNC_0(VAR_0->frmlen) - 1) * 2);
}
