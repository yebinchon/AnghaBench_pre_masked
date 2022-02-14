
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_tm_dev {TYPE_1__* data; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {scalar_t__ block_base; scalar_t__ map_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,scalar_t__,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct uniphier_tm_dev *VAR_4)
{
 struct regmap *VAR_5 = VAR_4->regmap;


 FUNC_0(VAR_5, VAR_4->data->map_base + VAR_0,
     VAR_1, 0);


 FUNC_0(VAR_5, VAR_4->data->block_base + VAR_2,
     VAR_3, 0);

 FUNC_1(1000, 2000);
}
