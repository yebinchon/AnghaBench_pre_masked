
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt9455_info {int * regmap_fields; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct rt9455_info *VAR_2)
{
 struct device *VAR_3 = &VAR_2->client->dev;
 unsigned int VAR_4;
 int VAR_5, VAR_6 = 100;

 VAR_5 = FUNC_2(VAR_2->regmap_fields[VAR_1], 0x01);
 if (VAR_5) {
  FUNC_0(VAR_3, "Failed to set RST bit\n");
  return VAR_5;
 }





 do {
  VAR_5 = FUNC_1(VAR_2->regmap_fields[VAR_1], &VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_3, "Failed to read RST bit\n");
   return VAR_5;
  }

  if (!VAR_4)
   break;

  FUNC_3(10, 100);
 } while (--VAR_6);

 if (!VAR_6)
  return -VAR_0;

 return 0;
}
