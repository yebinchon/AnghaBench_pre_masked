
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {unsigned int flags2; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, u32 VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7 = VAR_6->flags2;

 VAR_7 &= ~VAR_0;
 if (VAR_5 & VAR_2)
  VAR_7 |= VAR_0;

 VAR_7 &= ~VAR_1;
 if (VAR_5 & VAR_3)
  VAR_7 |= VAR_1;

 if (VAR_7 != VAR_6->flags2) {
  VAR_6->flags2 = VAR_7;


  if (FUNC_2(VAR_4))
   FUNC_0(VAR_6);
 }

 return 0;
}
