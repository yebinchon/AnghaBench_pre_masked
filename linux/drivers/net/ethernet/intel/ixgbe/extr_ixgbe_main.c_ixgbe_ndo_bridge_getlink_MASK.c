
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int flags; int bridge_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ,struct net_device*,int ,int ,int ,int,int ,int *) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, u32 VAR_2, u32 VAR_3,
        struct net_device *VAR_4,
        u32 VAR_5, int VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_1(VAR_4);

 if (!(VAR_7->flags & VAR_0))
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_7->bridge_mode, 0, 0, VAR_6,
           VAR_5, ((void*)0));
}
