
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max17042_platform_data {int dummy; } ;
struct max17042_chip {TYPE_1__* client; } ;
struct device {struct max17042_platform_data* platform_data; scalar_t__ of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 struct max17042_platform_data* FUNC_0 (struct max17042_chip*) ;
 struct max17042_platform_data* FUNC_1 (struct max17042_chip*) ;

__attribute__((used)) static struct max17042_platform_data *
FUNC_2(struct max17042_chip *VAR_0)
{
 struct device *VAR_1 = &VAR_0->client->dev;





 if (VAR_1->platform_data)
  return VAR_1->platform_data;

 return FUNC_0(VAR_0);
}
