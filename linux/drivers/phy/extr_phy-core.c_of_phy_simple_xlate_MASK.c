
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct of_phandle_args {scalar_t__ np; } ;
struct device {int dummy; } ;
struct class_dev_iter {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 int FUNC_1 (struct class_dev_iter*) ;
 int FUNC_2 (struct class_dev_iter*,int ,int *,int *) ;
 struct device* FUNC_3 (struct class_dev_iter*) ;
 int VAR_1 ;
 struct phy* FUNC_4 (struct device*) ;

struct phy *FUNC_5(struct device *VAR_2, struct of_phandle_args
 *VAR_3)
{
 struct phy *VAR_4;
 struct class_dev_iter VAR_5;

 FUNC_2(&VAR_5, VAR_1, ((void*)0), ((void*)0));
 while ((VAR_2 = FUNC_3(&VAR_5))) {
  VAR_4 = FUNC_4(VAR_2);
  if (VAR_3->np != VAR_4->dev.of_node)
   continue;

  FUNC_1(&VAR_5);
  return VAR_4;
 }

 FUNC_1(&VAR_5);
 return FUNC_0(-VAR_0);
}
