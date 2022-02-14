
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int debug_mask; } ;
struct iavf_adapter {int msg_enable; TYPE_1__ hw; } ;


 int VAR_0 ;
 struct iavf_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, u32 VAR_2)
{
 struct iavf_adapter *VAR_3 = FUNC_0(VAR_1);

 if (VAR_0 & VAR_2)
  VAR_3->hw.debug_mask = VAR_2;
 VAR_3->msg_enable = VAR_2;
}
