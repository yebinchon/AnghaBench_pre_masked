
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int trace_size; } ;
struct fjes_hw {int debug_mode; TYPE_1__ hw_info; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
struct ethtool_dump {int version; int flag; int len; } ;


 struct fjes_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct ethtool_dump *VAR_1)
{
 struct fjes_adapter *VAR_2 = FUNC_0(VAR_0);
 struct fjes_hw *VAR_3 = &VAR_2->hw;

 VAR_1->len = VAR_3->hw_info.trace_size;
 VAR_1->version = 1;
 VAR_1->flag = VAR_3->debug_mode;

 return 0;
}
