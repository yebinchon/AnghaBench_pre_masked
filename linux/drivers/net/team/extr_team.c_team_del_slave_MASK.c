
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team {int team_lock_key; int lock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 struct team* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct team*,struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0, struct net_device *VAR_1)
{
 struct team *VAR_2 = FUNC_6(VAR_0);
 int VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_8(VAR_2, VAR_1);
 FUNC_4(&VAR_2->lock);

 if (VAR_3)
  return VAR_3;

 if (FUNC_7(VAR_1)) {
  FUNC_2(&VAR_2->team_lock_key);
  FUNC_0(&VAR_2->team_lock_key);
  FUNC_1(&VAR_2->lock, &VAR_2->team_lock_key);
 }
 FUNC_5(VAR_0);

 return VAR_3;
}
