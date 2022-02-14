
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ connect_status; int dev; scalar_t__ scan_req; int scan_work; int driver_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lbs_private*,int ) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2)
{
 struct lbs_private *VAR_3 = VAR_2->ml_priv;

 if (VAR_3->connect_status == VAR_0)
  FUNC_1(VAR_3, VAR_1);

 FUNC_8(&VAR_3->driver_lock);
 FUNC_7(VAR_2);
 FUNC_9(&VAR_3->driver_lock);

 FUNC_5(VAR_3);
 FUNC_0(&VAR_3->scan_work);
 if (VAR_3->scan_req)
  FUNC_3(VAR_3);

 FUNC_6(VAR_3->dev);

 if (!FUNC_2(VAR_3))
  FUNC_4(VAR_3);

 return 0;
}
