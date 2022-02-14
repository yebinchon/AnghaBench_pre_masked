
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k4ecgx {scalar_t__ set_params; int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s5k4ecgx*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k4ecgx *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(&VAR_2->sd);
 int VAR_5;

 if (VAR_3 && VAR_2->set_params) {
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_2->set_params = 0;
 }




 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_1(VAR_4, VAR_1, 1);
}
