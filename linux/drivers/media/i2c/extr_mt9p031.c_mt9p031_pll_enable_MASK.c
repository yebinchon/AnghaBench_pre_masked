
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; int n; int p1; } ;
struct mt9p031 {TYPE_1__ pll; int use_pll; int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (int,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9p031 *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(&VAR_5->subdev);
 int VAR_7;

 if (!VAR_5->use_pll)
  return 0;

 VAR_7 = FUNC_0(VAR_6, VAR_2,
       VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0,
       (VAR_5->pll.m << 8) | (VAR_5->pll.n - 1));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_5->pll.p1 - 1);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(1000, 2000);
 VAR_7 = FUNC_0(VAR_6, VAR_2,
       VAR_3 |
       VAR_4);
 return VAR_7;
}
