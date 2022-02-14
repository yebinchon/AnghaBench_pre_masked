
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int driver_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct lbs_private*,int ,int ) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct lbs_private *VAR_2 = VAR_1->ml_priv;

 FUNC_1(VAR_2, VAR_0,
  FUNC_2(VAR_2));

 FUNC_7(&VAR_2->driver_lock);

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 FUNC_8(&VAR_2->driver_lock);

 FUNC_4(VAR_2);
 if (!FUNC_0(VAR_2))
  FUNC_3(VAR_2);

 return 0;
}
