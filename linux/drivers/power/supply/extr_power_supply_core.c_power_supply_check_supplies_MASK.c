
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct power_supply {int num_supplies; scalar_t__ supplied_from; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const**,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_2->dev.parent)
  return 0;

 VAR_3 = FUNC_0(VAR_2->dev.parent,
       "supplied-from", ((void*)0), 0);
 if (VAR_3 <= 0)
  return 0;

 VAR_2->supplied_from = FUNC_1(&VAR_2->dev, VAR_3,
      sizeof(char *), VAR_1);
 if (!VAR_2->supplied_from)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2->dev.parent,
  "supplied-from", (const char **)VAR_2->supplied_from, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->num_supplies = VAR_3;

 return 0;
}
