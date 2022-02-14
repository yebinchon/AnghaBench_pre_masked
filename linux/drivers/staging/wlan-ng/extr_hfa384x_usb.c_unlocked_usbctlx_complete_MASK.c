
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct hfa384x_usbctlx {int state; TYPE_3__ outbuf; int list; } ;
struct TYPE_4__ {int completing; } ;
struct hfa384x {TYPE_2__* wlandev; int completion_bh; TYPE_1__ ctlxq; } ;
struct TYPE_5__ {int netdev; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hfa384x *VAR_0,
          struct hfa384x_usbctlx *VAR_1)
{




 FUNC_2(&VAR_1->list, &VAR_0->ctlxq.completing);
 FUNC_4(&VAR_0->completion_bh);

 switch (VAR_1->state) {
 case 129:
 case 128:

  break;

 default:
  FUNC_3(VAR_0->wlandev->netdev, "CTLX[%d] not in a terminating state(%s)\n",
      FUNC_1(VAR_1->outbuf.type),
      FUNC_0(VAR_1->state));
  break;
 }
}
