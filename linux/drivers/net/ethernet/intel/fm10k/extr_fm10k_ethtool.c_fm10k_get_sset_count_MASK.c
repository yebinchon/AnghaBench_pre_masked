
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int max_queues; int type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7, int VAR_8)
{
 struct fm10k_intfc *VAR_9 = FUNC_0(VAR_7);
 struct fm10k_hw *VAR_10 = &VAR_9->hw;
 int VAR_11 = VAR_4;

 switch (VAR_8) {
 case 128:
  return VAR_5;
 case 129:
  VAR_11 += VAR_10->mac.max_queues * 2 * VAR_3;

  if (VAR_10->mac.type != VAR_6)
   VAR_11 += VAR_1;

  return VAR_11;
 case 130:
  return VAR_2;
 default:
  return -VAR_0;
 }
}
