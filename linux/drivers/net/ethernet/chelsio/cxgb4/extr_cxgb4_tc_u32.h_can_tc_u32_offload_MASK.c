
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct adapter {scalar_t__ tc_u32; } ;


 int VAR_0 ;
 struct adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline bool FUNC_1(struct net_device *VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_1);

 return (VAR_1->features & VAR_0) && VAR_2->tc_u32 ? 1 : 0;
}
