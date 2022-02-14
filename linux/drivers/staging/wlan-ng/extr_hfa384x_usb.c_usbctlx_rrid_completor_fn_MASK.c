
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbctlx_rrid_completor {scalar_t__ riddatalen; int riddata; int rridresp; } ;
struct usbctlx_completor {int dummy; } ;
struct hfa384x_rridresult {scalar_t__ riddata_len; int riddata; int rid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,struct hfa384x_rridresult*) ;

__attribute__((used)) static int FUNC_3(struct usbctlx_completor *VAR_1)
{
 struct usbctlx_rrid_completor *VAR_2;
 struct hfa384x_rridresult VAR_3;

 VAR_2 = (struct usbctlx_rrid_completor *)VAR_1;
 FUNC_2(VAR_2->rridresp, &VAR_3);


 if (VAR_3.riddata_len != VAR_2->riddatalen) {
  FUNC_1("RID len mismatch, rid=0x%04x hlen=%d fwlen=%d\n",
   VAR_3.rid,
   VAR_2->riddatalen, VAR_3.riddata_len);
  return -VAR_0;
 }

 FUNC_0(VAR_2->riddata, VAR_3.riddata, VAR_2->riddatalen);
 return 0;
}
