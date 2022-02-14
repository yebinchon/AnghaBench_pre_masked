
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct i2c_adapter {int dummy; } ;
struct ddb_regmap {size_t irq_base_i2c; TYPE_1__* i2c; } ;
struct ddb_i2c {struct i2c_adapter adap; } ;
struct ddb {size_t i2c_num; struct ddb_i2c* i2c; TYPE_3__* link; } ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_5__ {int i2c_mask; struct ddb_regmap* regmap; } ;
struct TYPE_4__ {size_t num; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ddb*,struct ddb_i2c*,struct ddb_regmap const*,size_t,size_t,size_t) ;
 int FUNC_1 (struct ddb*,size_t,size_t,int ,struct ddb_i2c*) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int VAR_1 ;

int FUNC_3(struct ddb *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4, VAR_5, VAR_6 = 0, VAR_7, VAR_8;
 struct ddb_i2c *VAR_9;
 struct i2c_adapter *VAR_10;
 const struct ddb_regmap *VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!VAR_2->link[VAR_7].info)
   continue;
  VAR_11 = VAR_2->link[VAR_7].info->regmap;
  if (!VAR_11 || !VAR_11->i2c)
   continue;
  VAR_8 = VAR_11->irq_base_i2c;
  for (VAR_4 = 0; VAR_4 < VAR_11->i2c->num; VAR_4++) {
   if (!(VAR_2->link[VAR_7].info->i2c_mask & (1 << VAR_4)))
    continue;
   VAR_9 = &VAR_2->i2c[VAR_6];
   FUNC_1(VAR_2, VAR_7, VAR_4 + VAR_8, VAR_1, VAR_9);
   VAR_3 = FUNC_0(VAR_2, VAR_9, VAR_11, VAR_7, VAR_4, VAR_6);
   if (VAR_3)
    break;
   VAR_6++;
  }
 }
 if (VAR_3) {
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   VAR_9 = &VAR_2->i2c[VAR_5];
   VAR_10 = &VAR_9->adap;
   FUNC_2(VAR_10);
  }
 } else {
  VAR_2->i2c_num = VAR_6;
 }

 return VAR_3;
}
