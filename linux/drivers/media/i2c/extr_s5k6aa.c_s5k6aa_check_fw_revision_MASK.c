
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct s5k6aa {int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,char*) ;
 struct i2c_client* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct s5k6aa *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(&VAR_4->sd);
 u16 VAR_6 = 0, VAR_7 = 0;

 int VAR_8 = FUNC_1(VAR_5);

 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_5, VAR_1, &VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_5, VAR_2, &VAR_7);
 if (VAR_8) {
  FUNC_2(&VAR_4->sd, "FW revision check failed!\n");
  return VAR_8;
 }

 FUNC_4(&VAR_4->sd, "FW API ver.: 0x%X, FW rev.: 0x%X\n",
    VAR_6, VAR_7);

 return VAR_6 == VAR_3 ? 0 : -VAR_0;
}
