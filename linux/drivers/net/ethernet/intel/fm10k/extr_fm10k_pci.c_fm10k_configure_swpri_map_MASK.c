
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {int flags; struct fm10k_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct fm10k_hw*,int ,int ) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_4(struct fm10k_intfc *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct fm10k_hw *VAR_5 = &VAR_3->hw;
 int VAR_6;


 FUNC_1(VAR_0, VAR_3->flags);


 if (VAR_5->mac.type != VAR_2)
  return;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(VAR_5, FUNC_0(VAR_6),
    FUNC_3(VAR_4, VAR_6));
}
