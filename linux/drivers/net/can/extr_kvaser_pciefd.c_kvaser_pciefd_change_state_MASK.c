
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int restart_ms; struct net_device* dev; } ;
struct kvaser_pciefd_can {TYPE_1__ can; int lock; } ;
struct can_frame {int dummy; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct can_frame*,int,int) ;
 int FUNC_2 (struct kvaser_pciefd_can*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct kvaser_pciefd_can *VAR_1,
           struct can_frame *VAR_2,
           enum can_state VAR_3,
           enum can_state VAR_4,
           enum can_state VAR_5)
{
 FUNC_1(VAR_1->can.dev, VAR_2, VAR_4, VAR_5);

 if (VAR_3 == VAR_0) {
  struct net_device *VAR_6 = VAR_1->can.dev;
  unsigned long VAR_7;

  FUNC_4(&VAR_1->lock, VAR_7);
  FUNC_3(VAR_1->can.dev);
  FUNC_5(&VAR_1->lock, VAR_7);


  if (!VAR_1->can.restart_ms) {
   FUNC_2(VAR_1);
   FUNC_0(VAR_6);
  }
 }
}
