
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_tm_dev {TYPE_1__* data; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {scalar_t__ map_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(struct uniphier_tm_dev *VAR_3, u32 VAR_4,
      u32 VAR_5)
{
 struct regmap *VAR_6 = VAR_3->regmap;


 FUNC_1(VAR_6, VAR_3->data->map_base + VAR_0 + (VAR_4 << 2),
     VAR_1 | VAR_2,
     VAR_1 |
     FUNC_0(VAR_5 / 1000));
}
