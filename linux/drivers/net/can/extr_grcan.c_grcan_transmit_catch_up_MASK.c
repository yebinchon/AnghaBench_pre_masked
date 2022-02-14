
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct grcan_priv {int lock; int hang_timer; scalar_t__ need_txbug_workaround; TYPE_1__ can; int closing; int resetting; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int,int) ;
 int FUNC_1 (int *) ;
 struct grcan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct grcan_priv *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_4(&VAR_3->lock, VAR_4);

 VAR_5 = FUNC_0(VAR_1, VAR_2, 1);
 if (VAR_5) {
  if (!VAR_3->resetting && !VAR_3->closing &&
      !(VAR_3->can.ctrlmode & VAR_0))
   FUNC_3(VAR_1);




  if (VAR_3->need_txbug_workaround)
   FUNC_1(&VAR_3->hang_timer);
 }

 FUNC_5(&VAR_3->lock, VAR_4);

 return VAR_5;
}
