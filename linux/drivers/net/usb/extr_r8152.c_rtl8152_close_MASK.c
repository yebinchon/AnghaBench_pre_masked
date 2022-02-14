
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* down ) (struct r8152*) ;} ;
struct r8152 {int intf; int control; TYPE_1__ rtl_ops; int flags; int schedule; int intr_urb; int napi; int tx_tl; int pm_notifier; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct r8152*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct r8152* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct r8152*) ;
 int FUNC_9 (struct r8152*) ;
 int FUNC_10 (struct r8152*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_2)
{
 struct r8152 *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = 0;




 FUNC_11(&VAR_3->tx_tl);
 FUNC_5(&VAR_3->napi);
 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_16(VAR_3->intr_urb);
 FUNC_0(&VAR_3->schedule);
 FUNC_7(VAR_2);

 VAR_4 = FUNC_14(VAR_3->intf);
 if (VAR_4 < 0 || FUNC_12(VAR_0, &VAR_3->flags)) {
  FUNC_8(VAR_3);
  FUNC_9(VAR_3);
 } else {
  FUNC_3(&VAR_3->control);

  VAR_3->rtl_ops.down(VAR_3);

  FUNC_4(&VAR_3->control);

  FUNC_15(VAR_3->intf);
 }

 FUNC_2(VAR_3);

 return VAR_4;
}
