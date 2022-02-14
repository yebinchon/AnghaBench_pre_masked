
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int dummy; } ;


 struct mwifiex_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mwifiex_private*) ;
 int FUNC_2 (struct wiphy*,char*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
         struct net_device *VAR_1, u64 VAR_2)
{
 struct mwifiex_private *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, "sched scan stop!");
 FUNC_1(VAR_3);

 return 0;
}
