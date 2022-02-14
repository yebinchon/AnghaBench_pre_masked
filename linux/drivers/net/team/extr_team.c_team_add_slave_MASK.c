
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int lock; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 struct team* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct team*,struct net_device*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct net_device *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct team *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_0(&VAR_3->lock);
 VAR_4 = FUNC_4(VAR_3, VAR_1, VAR_2);
 FUNC_1(&VAR_3->lock);

 if (!VAR_4)
  FUNC_2(VAR_0);

 return VAR_4;
}
