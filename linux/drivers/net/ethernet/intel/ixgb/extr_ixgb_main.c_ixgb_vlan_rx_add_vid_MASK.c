
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ixgb_adapter {int active_vlans; int hw; } ;
typedef int __be16 ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 struct ixgb_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct ixgb_adapter *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5, VAR_6;



 VAR_6 = (VAR_3 >> 5) & 0x7F;
 VAR_5 = FUNC_0(&VAR_4->hw, VAR_0, VAR_6);
 VAR_5 |= (1 << (VAR_3 & 0x1F));
 FUNC_1(&VAR_4->hw, VAR_6, VAR_5);
 FUNC_3(VAR_3, VAR_4->active_vlans);

 return 0;
}
