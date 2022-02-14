
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {TYPE_1__* rdev; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;

struct regmap *FUNC_1(struct regulator *VAR_1)
{
 struct regmap *VAR_2 = VAR_1->rdev->regmap;

 return VAR_2 ? VAR_2 : FUNC_0(-VAR_0);
}
