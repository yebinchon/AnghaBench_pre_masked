
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9p031 {int use_pll; int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct mt9p031 *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(&VAR_2->subdev);

 if (!VAR_2->use_pll)
  return 0;

 return FUNC_0(VAR_3, VAR_0,
        VAR_1);
}
