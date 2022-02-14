
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_tm_dev {TYPE_1__* data; scalar_t__* alert_en; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {scalar_t__ block_base; scalar_t__ map_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct regmap*,scalar_t__,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct uniphier_tm_dev *VAR_5)
{
 struct regmap *VAR_6 = VAR_5->regmap;
 int VAR_7;
 u32 VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_5->alert_en[VAR_7])
   VAR_8 |= FUNC_0(VAR_7);


 FUNC_1(VAR_6, VAR_5->data->map_base + VAR_1,
     VAR_2, VAR_8);


 FUNC_1(VAR_6, VAR_5->data->block_base + VAR_3,
     VAR_4, VAR_4);

 FUNC_2(700, 1500);
}
