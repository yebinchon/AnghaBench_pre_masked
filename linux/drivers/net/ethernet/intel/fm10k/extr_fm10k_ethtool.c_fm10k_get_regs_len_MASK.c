
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_0(VAR_2);
 struct fm10k_hw *VAR_4 = &VAR_3->hw;

 switch (VAR_4->mac.type) {
 case 129:
  return VAR_0 * sizeof(u32);
 case 128:
  return VAR_1 * sizeof(u32);
 default:
  return 0;
 }
}
