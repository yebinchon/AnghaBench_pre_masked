
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2x {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = 0;

 VAR_7 |= (!(VAR_6->flags & VAR_4) ? 1 : 0) << VAR_1;
 VAR_7 |= (!(VAR_6->flags & VAR_3) ? 1 : 0) << VAR_0;
 VAR_7 |= (!!FUNC_0(VAR_6)) << VAR_2;

 return VAR_7;
}
