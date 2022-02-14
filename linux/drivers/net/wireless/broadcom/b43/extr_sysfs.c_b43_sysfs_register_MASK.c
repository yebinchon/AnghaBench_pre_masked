
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,int *) ;

int FUNC_3(struct b43_wldev *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev->dev;

 FUNC_0(FUNC_1(VAR_2) != VAR_0);

 return FUNC_2(VAR_3, &VAR_1);
}
