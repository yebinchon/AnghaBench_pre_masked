
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6105x {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct tps6105x *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;
 switch (VAR_4 >> VAR_0) {
 case 131:
  FUNC_0(&VAR_2->client->dev,
    "TPS6105x found in SHUTDOWN mode\n");
  break;
 case 130:
  FUNC_0(&VAR_2->client->dev,
    "TPS6105x found in TORCH mode\n");
  break;
 case 129:
  FUNC_0(&VAR_2->client->dev,
    "TPS6105x found in FLASH mode\n");
  break;
 case 128:
  FUNC_0(&VAR_2->client->dev,
    "TPS6105x found in VOLTAGE mode\n");
  break;
 default:
  break;
 }

 return VAR_3;
}
