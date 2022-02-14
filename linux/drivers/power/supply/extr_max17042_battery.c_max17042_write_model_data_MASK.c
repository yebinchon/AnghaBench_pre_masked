
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct regmap {int dummy; } ;
struct max17042_chip {TYPE_2__* pdata; struct regmap* regmap; } ;
struct TYPE_4__ {TYPE_1__* config_data; } ;
struct TYPE_3__ {int * cell_char_tbl; } ;


 int FUNC_0 (struct regmap*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct max17042_chip *VAR_0,
     u8 VAR_1, int VAR_2)
{
 struct regmap *VAR_3 = VAR_0->regmap;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_3, VAR_1 + VAR_4,
   VAR_0->pdata->config_data->cell_char_tbl[VAR_4]);
}
