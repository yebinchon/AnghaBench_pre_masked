
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {unsigned int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3)
{
 struct ixgbevf_adapter *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = VAR_4->flags;

 VAR_5 &= ~VAR_0;
 if (VAR_3 & VAR_1)
  VAR_5 |= VAR_0;

 if (VAR_5 != VAR_4->flags) {
  VAR_4->flags = VAR_5;


  if (FUNC_2(VAR_2))
   FUNC_0(VAR_4);
 }

 return 0;
}
