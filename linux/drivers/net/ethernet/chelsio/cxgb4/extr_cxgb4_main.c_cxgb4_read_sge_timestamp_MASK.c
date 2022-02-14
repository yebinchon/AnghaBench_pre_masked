
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct adapter*,int ) ;

u64 FUNC_3(struct net_device *VAR_2)
{
 u32 VAR_3, VAR_4;
 struct adapter *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_5, VAR_1);
 VAR_3 = FUNC_0(FUNC_2(VAR_5, VAR_0));

 return ((u64)VAR_3 << 32) | (u64)VAR_4;
}
