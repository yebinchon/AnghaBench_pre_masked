
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int flags; int addr_assign_type; int dev_addr; } ;
struct TYPE_2__ {int addr; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (int ) ;
 struct fm10k_intfc* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, void *VAR_5)
{
 struct fm10k_intfc *VAR_6 = FUNC_6(VAR_4);
 struct fm10k_hw *VAR_7 = &VAR_6->hw;
 struct sockaddr *VAR_8 = VAR_5;
 s32 VAR_9 = 0;

 if (!FUNC_5(VAR_8->sa_data))
  return -VAR_0;

 if (VAR_4->flags & VAR_2) {

  FUNC_1(VAR_6);

  VAR_9 = FUNC_3(VAR_4, VAR_8->sa_data);
  if (!VAR_9)
   FUNC_4(VAR_4, VAR_7->mac.addr);

  FUNC_2(VAR_6);
 }

 if (!VAR_9) {
  FUNC_0(VAR_4->dev_addr, VAR_8->sa_data);
  FUNC_0(VAR_7->mac.addr, VAR_8->sa_data);
  VAR_4->addr_assign_type &= ~VAR_3;
 }


 return VAR_9 ? -VAR_1 : 0;
}
