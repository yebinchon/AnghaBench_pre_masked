
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int lock; } ;
struct net_device {int * netdev_ops; } ;
struct net {int dummy; } ;
struct genl_info {int * attrs; } ;


 size_t VAR_0 ;
 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct net* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (int *) ;
 struct team* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct team *FUNC_6(struct genl_info *VAR_2)
{
 struct net *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;
 struct net_device *VAR_5;
 struct team *VAR_6;

 if (!VAR_2->attrs[VAR_0])
  return ((void*)0);

 VAR_4 = FUNC_5(VAR_2->attrs[VAR_0]);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5 || VAR_5->netdev_ops != &VAR_1) {
  if (VAR_5)
   FUNC_1(VAR_5);
  return ((void*)0);
 }

 VAR_6 = FUNC_4(VAR_5);
 FUNC_3(&VAR_6->lock);
 return VAR_6;
}
