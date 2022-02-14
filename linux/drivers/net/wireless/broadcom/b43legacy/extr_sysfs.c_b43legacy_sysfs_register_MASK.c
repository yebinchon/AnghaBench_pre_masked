
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct b43legacy_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43legacy_wldev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;

int FUNC_4(struct b43legacy_wldev *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev->dev;
 int VAR_5;

 FUNC_0(FUNC_1(VAR_3) !=
     VAR_0);

 VAR_5 = FUNC_2(VAR_4, &VAR_1);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_2(VAR_4, &VAR_2);
 if (VAR_5)
  goto err_remove_interfmode;

out:
 return VAR_5;
err_remove_interfmode:
 FUNC_3(VAR_4, &VAR_1);
 goto out;
}
