
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; } ;
struct uwb_dev {struct device dev; } ;


 int FUNC_0 (struct device*,struct uwb_dev*) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct uwb_dev *VAR_0, struct device *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = &VAR_0->dev;
 VAR_2->parent = VAR_1;
 FUNC_0(VAR_2, VAR_0);

 return FUNC_1(VAR_2);
}
