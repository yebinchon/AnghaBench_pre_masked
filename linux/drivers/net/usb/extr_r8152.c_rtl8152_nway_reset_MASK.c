
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int intf; int control; int mii; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8152* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct r8152 *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->intf);
 if (VAR_2 < 0)
  goto out;

 FUNC_1(&VAR_1->control);

 VAR_2 = FUNC_0(&VAR_1->mii);

 FUNC_2(&VAR_1->control);

 FUNC_5(VAR_1->intf);

out:
 return VAR_2;
}
