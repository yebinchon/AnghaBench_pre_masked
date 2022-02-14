
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* setup_link ) (struct ixgbe_hw*,int,int) ;int (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int state; int link_check_timeout; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8;
 u32 VAR_9;
 bool VAR_10 = 0;

 if (!(VAR_6->flags & VAR_0))
  return;


 if (FUNC_3(VAR_4, &VAR_6->state))
  return;

 VAR_6->flags &= ~VAR_0;

 VAR_7->mac.ops.get_link_capabilities(VAR_7, &VAR_8, &VAR_10);


 if (!VAR_10 && (VAR_8 & VAR_2))
  VAR_9 = VAR_2;
 else
  VAR_9 = VAR_8 & (VAR_2 |
         VAR_3);

 if (VAR_7->mac.ops.setup_link)
  VAR_7->mac.ops.setup_link(VAR_7, VAR_9, 1);

 VAR_6->flags |= VAR_1;
 VAR_6->link_check_timeout = VAR_5;
 FUNC_0(VAR_4, &VAR_6->state);
}
