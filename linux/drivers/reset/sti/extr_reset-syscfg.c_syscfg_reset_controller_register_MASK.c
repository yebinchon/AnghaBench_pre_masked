
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct syscfg_reset_controller_data {int nr_channels; TYPE_1__* channels; int wait_for_ack; int active_low; } ;
struct TYPE_5__ {int nr_resets; int of_node; int * ops; } ;
struct syscfg_reset_controller {TYPE_2__ rst; TYPE_3__* channels; int active_low; } ;
struct regmap_field {int dummy; } ;
typedef struct regmap_field regmap ;
struct device {int of_node; } ;
struct TYPE_6__ {struct regmap_field* ack; struct regmap_field* reset; } ;
struct TYPE_4__ {char* compatible; int ack; int reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap_field*) ;
 int FUNC_1 (struct regmap_field*) ;
 int FUNC_2 (struct device*,char*) ;
 TYPE_3__* FUNC_3 (struct device*,int,int,int ) ;
 struct syscfg_reset_controller* FUNC_4 (struct device*,int,int ) ;
 struct regmap_field* FUNC_5 (struct device*,struct regmap_field*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_2 ;
 struct regmap_field* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3,
    const struct syscfg_reset_controller_data *VAR_4)
{
 struct syscfg_reset_controller *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_4(VAR_3, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->channels = FUNC_3(VAR_3, VAR_4->nr_channels,
        sizeof(*VAR_5->channels), VAR_1);
 if (!VAR_5->channels)
  return -VAR_0;

 VAR_5->rst.ops = &VAR_2,
 VAR_5->rst.of_node = VAR_3->of_node;
 VAR_5->rst.nr_resets = VAR_4->nr_channels;
 VAR_5->active_low = VAR_4->active_low;

 for (VAR_6 = 0; VAR_6 < VAR_4->nr_channels; VAR_6++) {
  struct regmap *VAR_8;
  struct regmap_field *VAR_9;
  const char *VAR_10 = VAR_4->channels[VAR_6].compatible;

  VAR_8 = FUNC_7(VAR_10);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);

  VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_4->channels[VAR_6].reset);
  if (FUNC_0(VAR_9))
   return FUNC_1(VAR_9);

  VAR_5->channels[VAR_6].reset = VAR_9;

  if (!VAR_4->wait_for_ack)
   continue;

  VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_4->channels[VAR_6].ack);
  if (FUNC_0(VAR_9))
   return FUNC_1(VAR_9);

  VAR_5->channels[VAR_6].ack = VAR_9;
 }

 VAR_7 = FUNC_6(&VAR_5->rst);
 if (!VAR_7)
  FUNC_2(VAR_3, "registered\n");

 return VAR_7;
}
