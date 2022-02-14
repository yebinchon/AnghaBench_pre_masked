
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_notifier_match {scalar_t__ regulator; scalar_t__ nb; } ;
struct device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1,
      void *VAR_2)
{
 struct regulator_notifier_match *VAR_3 = VAR_1;
 struct regulator_notifier_match *VAR_4 = VAR_2;

 return VAR_3->regulator == VAR_4->regulator && VAR_3->nb == VAR_4->nb;
}
