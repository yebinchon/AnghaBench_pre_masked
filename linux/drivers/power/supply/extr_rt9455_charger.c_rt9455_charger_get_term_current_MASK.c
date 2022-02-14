
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct rt9455_info {TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct rt9455_info*,int ,int ,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct rt9455_info *VAR_4,
        union power_supply_propval *VAR_5)
{
 struct device *VAR_6 = &VAR_4->client->dev;
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_0,
       VAR_2,
       FUNC_0(VAR_2),
       &VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_6, "Failed to read ICHRG value\n");
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_4, VAR_1,
       VAR_3,
       FUNC_0(VAR_3),
       &VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_6, "Failed to read IEOC value\n");
  return VAR_9;
 }

 VAR_5->intval = VAR_7 * VAR_8 / 100;

 return 0;
}
