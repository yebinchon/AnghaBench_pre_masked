
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9v111_dev {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mt9v111_dev *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;



 VAR_8 = FUNC_0(VAR_7, VAR_4,
        VAR_0,
        VAR_1, 1);
 if (VAR_8)
  return VAR_8;
 FUNC_1(500, 1000);

 VAR_8 = FUNC_0(VAR_7, VAR_4,
        VAR_0,
        VAR_1, 0);
 if (VAR_8)
  return VAR_8;
 FUNC_1(500, 1000);

 VAR_8 = FUNC_0(VAR_7, VAR_5,
        VAR_2,
        VAR_3, 1);
 if (VAR_8)
  return VAR_8;
 FUNC_1(500, 1000);

 VAR_8 = FUNC_0(VAR_7, VAR_5,
        VAR_2,
        VAR_3, 0);
 if (VAR_8)
  return VAR_8;
 FUNC_1(500, 1000);

 return 0;
}
