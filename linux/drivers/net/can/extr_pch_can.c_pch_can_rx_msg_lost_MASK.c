
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pch_can_priv {TYPE_2__* regs; TYPE_3__* ndev; } ;
struct net_device_stats {int rx_errors; int rx_over_errors; } ;
struct net_device {int dummy; } ;
struct can_frame {int * data; int can_id; } ;
struct TYPE_6__ {struct net_device_stats stats; } ;
struct TYPE_5__ {TYPE_1__* ifregs; } ;
struct TYPE_4__ {int creq; int cmask; int mcont; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct pch_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5, int VAR_6)
{
 struct pch_can_priv *VAR_7 = FUNC_3(VAR_5);
 struct net_device_stats *VAR_8 = &(VAR_7->ndev->stats);
 struct sk_buff *VAR_9;
 struct can_frame *VAR_10;

 FUNC_2(VAR_7->ndev, "Msg Obj is overwritten.\n");
 FUNC_5(&VAR_7->regs->ifregs[0].mcont,
     VAR_4);
 FUNC_1(VAR_3 | VAR_2,
    &VAR_7->regs->ifregs[0].cmask);
 FUNC_6(&VAR_7->regs->ifregs[0].creq, VAR_6);

 VAR_9 = FUNC_0(VAR_5, &VAR_10);
 if (!VAR_9)
  return;

 VAR_10->can_id |= VAR_0;
 VAR_10->data[1] = VAR_1;
 VAR_8->rx_over_errors++;
 VAR_8->rx_errors++;

 FUNC_4(VAR_9);
}
