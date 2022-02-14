
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int active_vlans; int flags; struct e1000_hw hw; } ;
typedef int __be16 ;


 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*,int) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (struct e1000_hw*,int,int) ;
 struct e1000_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2,
      __be16 VAR_3, u16 VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_7(VAR_2);
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7, VAR_8;

 if (!FUNC_8(VAR_1, &VAR_5->flags))
  FUNC_2(VAR_5);
 if (!FUNC_8(VAR_1, &VAR_5->flags))
  FUNC_3(VAR_5);


 VAR_8 = (VAR_4 >> 5) & 0x7F;
 VAR_7 = FUNC_0(VAR_6, VAR_0, VAR_8);
 VAR_7 &= ~(1 << (VAR_4 & 0x1F));
 FUNC_6(VAR_6, VAR_8, VAR_7);

 FUNC_1(VAR_4, VAR_5->active_vlans);

 if (!FUNC_5(VAR_5))
  FUNC_4(VAR_5, 0);

 return 0;
}
