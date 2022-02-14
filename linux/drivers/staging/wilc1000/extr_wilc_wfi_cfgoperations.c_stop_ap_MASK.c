
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wilc_vif {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wilc_vif*) ;
 int FUNC_3 (struct net_device*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_1, struct net_device *VAR_2)
{
 int VAR_3;
 struct wilc_vif *VAR_4 = FUNC_1(VAR_2);

 FUNC_3(VAR_2, ((void*)0), VAR_0);

 VAR_3 = FUNC_2(VAR_4);

 if (VAR_3)
  FUNC_0(VAR_2, "Host delete beacon fail\n");

 return VAR_3;
}
