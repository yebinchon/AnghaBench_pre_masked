
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct board_info {int wake_state; int irq_wake; int addr_lock; int lock; int wake_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct board_info*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct board_info* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 struct board_info *VAR_7 = FUNC_6(VAR_5);
 unsigned long VAR_8;
 u32 VAR_9 = VAR_6->wolopts;
 u32 VAR_10 = 0;

 if (!VAR_7->wake_supported)
  return -VAR_2;

 if (VAR_9 & ~VAR_3)
  return -VAR_1;

 if (VAR_9 & VAR_3)
  VAR_10 |= VAR_4;

 FUNC_2(&VAR_7->addr_lock);

 FUNC_4(&VAR_7->lock, VAR_8);
 FUNC_0(VAR_7, VAR_0, VAR_10);
 FUNC_5(&VAR_7->lock, VAR_8);

 FUNC_3(&VAR_7->addr_lock);

 if (VAR_7->wake_state != VAR_9) {


  if (!VAR_7->wake_state)
   FUNC_1(VAR_7->irq_wake, 1);
  else if (VAR_7->wake_state && !VAR_9)
   FUNC_1(VAR_7->irq_wake, 0);
 }

 VAR_7->wake_state = VAR_9;
 return 0;
}
