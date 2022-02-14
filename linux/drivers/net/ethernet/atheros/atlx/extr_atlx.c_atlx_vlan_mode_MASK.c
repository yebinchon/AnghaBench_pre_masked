
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct atlx_adapter {int lock; TYPE_1__ hw; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct atlx_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1,
 netdev_features_t VAR_2)
{
 struct atlx_adapter *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_4(&VAR_3->lock, VAR_4);

 VAR_5 = FUNC_1(VAR_3->hw.hw_addr + VAR_0);
 FUNC_0(VAR_2, &VAR_5);
 FUNC_2(VAR_5, VAR_3->hw.hw_addr + VAR_0);

 FUNC_5(&VAR_3->lock, VAR_4);
}
