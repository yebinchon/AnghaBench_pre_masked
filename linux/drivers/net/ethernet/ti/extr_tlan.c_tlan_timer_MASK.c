
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ expires; int * function; } ;
struct tlan_priv {int timer_type; int lock; TYPE_1__ timer; scalar_t__ timer_set_at; struct net_device* dev; } ;
struct timer_list {int dummy; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;






 int FUNC_0 (TYPE_1__*) ;
 struct tlan_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 struct tlan_priv* VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_6)
{
 struct tlan_priv *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 struct net_device *VAR_8 = VAR_7->dev;
 u32 VAR_9;
 unsigned long VAR_10 = 0;

 VAR_7->timer.function = ((void*)0);

 switch (VAR_7->timer_type) {
 case 131:
  FUNC_7(VAR_8);
  break;
 case 130:
  FUNC_8(VAR_8);
  break;
 case 129:
  FUNC_9(VAR_8);
  break;
 case 128:
  FUNC_10(VAR_8);
  break;
 case 132:
  FUNC_6(VAR_8);
  break;
 case 133:
  FUNC_5(VAR_8);
  break;
 case 134:
  FUNC_2(&VAR_7->lock, VAR_10);
  if (VAR_7->timer.function == ((void*)0)) {
   VAR_9 = VAR_3 - VAR_7->timer_set_at;
   if (VAR_9 >= VAR_2) {
    FUNC_4(VAR_8->base_addr,
      VAR_1, VAR_0);
   } else {
    VAR_7->timer.expires = VAR_7->timer_set_at
     + VAR_2;
    FUNC_3(&VAR_7->lock, VAR_10);
    FUNC_0(&VAR_7->timer);
    break;
   }
  }
  FUNC_3(&VAR_7->lock, VAR_10);
  break;
 default:
  break;
 }

}
