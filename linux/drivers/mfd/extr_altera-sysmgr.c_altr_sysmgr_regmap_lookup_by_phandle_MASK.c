
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct altr_sysmgr {struct regmap* regmap; } ;
struct TYPE_2__ {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct regmap* FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 struct altr_sysmgr* FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int *,void*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char const*,int ) ;

struct regmap *FUNC_5(struct device_node *VAR_3,
          const char *VAR_4)
{
 struct device *VAR_5;
 struct altr_sysmgr *VAR_6;
 struct device_node *VAR_7;

 if (VAR_4)
  VAR_7 = FUNC_4(VAR_3, VAR_4, 0);
 else
  VAR_7 = VAR_3;

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(&VAR_2.driver,
         (void *)VAR_7);
 FUNC_3(VAR_7);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_1(VAR_5);

 return VAR_6->regmap;
}
