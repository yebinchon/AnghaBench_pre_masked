
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int * device; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct sonic_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct platform_device*,struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct net_device *VAR_2;
 struct sonic_local *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(sizeof(struct sonic_local));
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_2);
 VAR_3->device = &VAR_1->dev;
 FUNC_0(VAR_2, &VAR_1->dev);
 FUNC_5(VAR_1, VAR_2);

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto out;

 FUNC_7(VAR_2);

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto out;

 return 0;

out:
 FUNC_2(VAR_2);

 return VAR_4;
}
