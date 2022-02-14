
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct TYPE_3__ {int (* up ) (struct r8152*) ;} ;
struct r8152 {int intf; int control; TYPE_2__ pm_notifier; int tx_tl; int napi; int netdev; int intr_urb; int flags; TYPE_1__ rtl_ops; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*) ;
 int FUNC_1 (struct r8152*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct r8152* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct r8152*,int ,struct net_device*,char*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct r8152*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_5)
{
 struct r8152 *VAR_6 = FUNC_5(VAR_5);
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_14(VAR_6->intf);
 if (VAR_7 < 0)
  goto out_free;

 FUNC_2(&VAR_6->control);

 VAR_6->rtl_ops.up(VAR_6);

 FUNC_6(VAR_5);
 FUNC_8(VAR_5);
 FUNC_11(VAR_2, &VAR_6->flags);

 VAR_7 = FUNC_16(VAR_6->intr_urb, VAR_1);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   FUNC_7(VAR_6->netdev);
  FUNC_9(VAR_6, VAR_3, VAR_5, "intr_urb submit failed: %d\n",
      VAR_7);
  goto out_unlock;
 }
 FUNC_4(&VAR_6->napi);
 FUNC_13(&VAR_6->tx_tl);

 FUNC_3(&VAR_6->control);

 FUNC_15(VAR_6->intf);




 return 0;

out_unlock:
 FUNC_3(&VAR_6->control);
 FUNC_15(VAR_6->intf);
out_free:
 FUNC_1(VAR_6);
out:
 return VAR_7;
}
