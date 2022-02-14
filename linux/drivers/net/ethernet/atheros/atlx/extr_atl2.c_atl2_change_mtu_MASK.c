
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct atl2_hw {int max_frame_size; } ;
struct atl2_adapter {struct atl2_hw hw; } ;


 int FUNC_0 (struct atl2_hw*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct atl2_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct atl2_adapter *VAR_6 = FUNC_1(VAR_4);
 struct atl2_hw *VAR_7 = &VAR_6->hw;


 VAR_4->mtu = VAR_5;
 VAR_7->max_frame_size = VAR_5;
 FUNC_0(VAR_7, VAR_2, VAR_5 + VAR_1 +
         VAR_3 + VAR_0);

 return 0;
}
