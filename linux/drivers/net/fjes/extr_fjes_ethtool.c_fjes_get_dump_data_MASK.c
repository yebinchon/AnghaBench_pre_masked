
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int trace_size; scalar_t__ trace; } ;
struct fjes_hw {TYPE_1__ hw_info; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
struct ethtool_dump {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,int ) ;
 struct fjes_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct ethtool_dump *VAR_2, void *VAR_3)
{
 struct fjes_adapter *VAR_4 = FUNC_1(VAR_1);
 struct fjes_hw *VAR_5 = &VAR_4->hw;
 int VAR_6 = 0;

 if (VAR_5->hw_info.trace)
  FUNC_0(VAR_3, VAR_5->hw_info.trace, VAR_5->hw_info.trace_size);
 else
  VAR_6 = -VAR_0;

 return VAR_6;
}
