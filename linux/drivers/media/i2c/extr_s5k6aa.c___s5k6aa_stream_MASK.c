
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k6aa {int streaming; int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct s5k6aa *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(&VAR_2->sd);
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_4, VAR_1, 1);
 if (!VAR_5)
  VAR_2->streaming = VAR_3;

 return VAR_5;
}
