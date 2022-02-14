
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum nsim_resource_id { ____Placeholder_nsim_resource_id } nsim_resource_id ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct devlink*,int,int *) ;
 struct net* FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*) ;
 int FUNC_4 (struct net*,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct devlink *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 enum nsim_resource_id VAR_6[] = {
  VAR_0, VAR_1,
  VAR_2, VAR_3
 };
 struct net *VAR_7 = FUNC_2(VAR_4);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); ++VAR_8) {
  int VAR_9;
  u64 VAR_10;

  VAR_9 = FUNC_1(VAR_4, VAR_6[VAR_8], &VAR_10);
  if (!VAR_9) {
   VAR_9 = FUNC_4(VAR_7, VAR_6[VAR_8], VAR_10, VAR_5);
   if (VAR_9)
    return VAR_9;
  }
 }
 FUNC_3(VAR_4);

 return 0;
}
