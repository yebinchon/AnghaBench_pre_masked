
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dev_priv {int mii_if; struct dev_info* adapter; } ;
struct dev_info {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct dev_priv *VAR_1 = FUNC_3(VAR_0);
 struct dev_info *VAR_2 = VAR_1->adapter;
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(&VAR_1->mii_if);
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
