
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_client {int dev; } ;
struct at24_data {int dummy; } ;
struct at24_client {struct i2c_client* client; struct regmap* regmap; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct at24_data*,unsigned int,size_t) ;
 struct at24_client* FUNC_1 (struct at24_data*,unsigned int*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,size_t,unsigned int,int,unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct regmap*,unsigned int,char const*,size_t) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct at24_data *VAR_3, const char *VAR_4,
     unsigned int VAR_5, size_t VAR_6)
{
 unsigned long VAR_7, VAR_8;
 struct at24_client *VAR_9;
 struct i2c_client *VAR_10;
 struct regmap *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_1(VAR_3, &VAR_5);
 VAR_11 = VAR_9->regmap;
 VAR_10 = VAR_9->client;
 VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_6);
 VAR_7 = VAR_2 + FUNC_3(VAR_1);

 do {




  VAR_8 = VAR_2;

  VAR_12 = FUNC_4(VAR_11, VAR_5, VAR_4, VAR_6);
  FUNC_2(&VAR_10->dev, "write %zu@%d --> %d (%ld)\n",
   VAR_6, VAR_5, VAR_12, VAR_2);
  if (!VAR_12)
   return VAR_6;

  FUNC_6(1000, 1500);
 } while (FUNC_5(VAR_8, VAR_7));

 return -VAR_0;
}
