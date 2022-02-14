
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rio_dev {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,int *) ;

__attribute__((used)) static int FUNC_3(struct rio_dev *VAR_1, bool VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 int VAR_4 = 0;

 if (VAR_2) {

  VAR_4 = FUNC_1(VAR_3, &VAR_0);
  if (VAR_4)
   FUNC_0(VAR_3, "Unable create sysfs errlog file\n");
 } else
  FUNC_2(VAR_3, &VAR_0);

 return VAR_4;
}
