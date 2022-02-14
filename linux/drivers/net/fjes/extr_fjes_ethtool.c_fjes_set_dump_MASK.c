
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct fjes_hw {TYPE_1__ hw_info; scalar_t__ debug_mode; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
struct ethtool_dump {scalar_t__ flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct fjes_hw*) ;
 int FUNC_1 (struct fjes_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fjes_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_dump *VAR_2)
{
 struct fjes_adapter *VAR_3 = FUNC_4(VAR_1);
 struct fjes_hw *VAR_4 = &VAR_3->hw;
 int VAR_5 = 0;

 if (VAR_2->flag) {
  if (VAR_4->debug_mode)
   return -VAR_0;

  VAR_4->debug_mode = VAR_2->flag;


  FUNC_2(&VAR_4->hw_info.lock);
  VAR_5 = FUNC_0(VAR_4);
  FUNC_3(&VAR_4->hw_info.lock);

  if (VAR_5)
   VAR_4->debug_mode = 0;
 } else {
  if (!VAR_4->debug_mode)
   return -VAR_0;


  FUNC_2(&VAR_4->hw_info.lock);
  VAR_5 = FUNC_1(VAR_4);
  FUNC_3(&VAR_4->hw_info.lock);
 }

 return VAR_5;
}
