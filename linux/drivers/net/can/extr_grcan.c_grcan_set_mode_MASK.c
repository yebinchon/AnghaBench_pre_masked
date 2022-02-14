
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct grcan_priv {int lock; TYPE_1__ can; scalar_t__ resetting; scalar_t__ closing; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct grcan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, enum can_mode VAR_5)
{
 struct grcan_priv *VAR_6 = FUNC_2(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (VAR_5 == VAR_1) {



  FUNC_4(&VAR_6->lock, VAR_7);
  if (VAR_6->closing || VAR_6->resetting) {
   VAR_8 = -VAR_2;
  } else {
   FUNC_1(VAR_4, "Restarting device\n");
   FUNC_0(VAR_4);
   if (!(VAR_6->can.ctrlmode & VAR_0))
    FUNC_3(VAR_4);
  }
  FUNC_5(&VAR_6->lock, VAR_7);
  return VAR_8;
 }
 return -VAR_3;
}
