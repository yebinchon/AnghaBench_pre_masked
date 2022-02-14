
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt9m111 {int lastpage; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct mt9m111* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, const u16 VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 struct mt9m111 *VAR_6 = FUNC_1(VAR_2);

 VAR_5 = (VAR_3 >> 8);
 if (VAR_5 == VAR_6->lastpage)
  return 0;
 if (VAR_5 > 2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_5);
 if (!VAR_4)
  VAR_6->lastpage = VAR_5;
 return VAR_4;
}
