
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct twl_client {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_4__ {struct twl_client* twl_modules; TYPE_1__* twl_map; int ready; } ;
struct TYPE_3__ {int sid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 size_t FUNC_1 () ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct regmap *FUNC_3(u8 VAR_2)
{
 int VAR_3;
 struct twl_client *VAR_4;

 if (FUNC_2(!VAR_1 || !VAR_1->ready)) {
  FUNC_0("%s: not initialized\n", VAR_0);
  return ((void*)0);
 }
 if (FUNC_2(VAR_2 >= FUNC_1())) {
  FUNC_0("%s: invalid module number %d\n", VAR_0, VAR_2);
  return ((void*)0);
 }

 VAR_3 = VAR_1->twl_map[VAR_2].sid;
 VAR_4 = &VAR_1->twl_modules[VAR_3];

 return VAR_4->regmap;
}
