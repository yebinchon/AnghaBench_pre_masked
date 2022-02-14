
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_1__* intf; int data; } ;
struct huawei_cdc_ncm_state {int pmcount; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_0, int VAR_1)
{
 struct huawei_cdc_ncm_state *VAR_2 = (void *)&VAR_0->data;
 int VAR_3;

 if ((VAR_1 && FUNC_0(1, &VAR_2->pmcount) == 1) ||
   (!VAR_1 && FUNC_1(&VAR_2->pmcount))) {
  VAR_3 = FUNC_2(VAR_0->intf);
  VAR_0->intf->needs_remote_wakeup = VAR_1;
  if (!VAR_3)
   FUNC_3(VAR_0->intf);
 }
 return 0;
}
