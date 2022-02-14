
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max17042_platform_data {int enable_current_sense; int temp_max; int temp_min; int vmax; int vmin; int num_init_data; int init_data; } ;
struct max17042_chip {scalar_t__ chip_type; int regmap; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct max17042_platform_data* FUNC_1 (struct device*,int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static struct max17042_platform_data *
FUNC_3(struct max17042_chip *VAR_8)
{
 struct device *VAR_9 = &VAR_8->client->dev;
 struct max17042_platform_data *VAR_10;
 int VAR_11, VAR_12;






 VAR_10 = FUNC_1(VAR_9, sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  return VAR_10;

 if (VAR_8->chip_type != VAR_6) {
  VAR_10->init_data = VAR_7;
  VAR_10->num_init_data =
   FUNC_0(VAR_7);
 }

 VAR_11 = FUNC_2(VAR_8->regmap, VAR_5, &VAR_12);
 if (VAR_11 < 0)
  return ((void*)0);


 if ((VAR_12 & 0x3) == 0x3)
  VAR_10->enable_current_sense = 0;
 else
  VAR_10->enable_current_sense = 1;

 VAR_10->vmin = VAR_4;
 VAR_10->vmax = VAR_3;
 VAR_10->temp_min = VAR_2;
 VAR_10->temp_max = VAR_1;

 return VAR_10;
}
