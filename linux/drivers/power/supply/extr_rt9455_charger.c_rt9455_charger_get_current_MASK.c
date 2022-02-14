
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct rt9455_info {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct rt9455_info*,int ,int ,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct rt9455_info *VAR_2,
          union power_supply_propval *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0,
       VAR_1,
       FUNC_0(VAR_1),
       &VAR_4);
 if (VAR_5) {
  FUNC_1(&VAR_2->client->dev, "Failed to read ICHRG value\n");
  return VAR_5;
 }

 VAR_3->intval = VAR_4;

 return 0;
}
