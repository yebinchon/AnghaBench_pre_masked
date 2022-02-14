
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int flags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6 = 0;

 if (VAR_5->flags2 & VAR_0)
  VAR_6 |= VAR_2;

 if (VAR_5->flags2 & VAR_1)
  VAR_6 |= VAR_3;

 return VAR_6;
}
