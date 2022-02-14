
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int speed; int width; int type; } ;
struct ixgbe_hw {TYPE_1__ bus; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_adapter*,int,int *) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_adapter *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;
 u16 VAR_3 = 0;
 int VAR_4;

 VAR_2->bus.type = VAR_0;




 VAR_4 = FUNC_2(VAR_1, 18, &VAR_3);


 if (VAR_4)
  return VAR_4;

 VAR_2->bus.width = FUNC_1(VAR_3);
 VAR_2->bus.speed = FUNC_0(VAR_3);

 return 0;
}
