
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct TYPE_2__ {int associated_bss; } ;
struct wilc_vif {TYPE_1__ priv; } ;
struct station_info {int signal; int filled; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wilc_vif*,int *) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_3, struct net_device *VAR_4,
   int VAR_5, u8 *VAR_6, struct station_info *VAR_7)
{
 struct wilc_vif *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;

 if (VAR_5 != 0)
  return -VAR_0;

 VAR_7->filled |= FUNC_0(VAR_2);

 VAR_9 = FUNC_3(VAR_8, &VAR_7->signal);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_6, VAR_8->priv.associated_bss, VAR_1);
 return 0;
}
