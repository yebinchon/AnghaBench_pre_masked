
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k6aa {int sd; } ;
struct i2c_client {int dummy; } ;
typedef enum v4l2_mbus_type { ____Placeholder_v4l2_mbus_type } v4l2_mbus_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct s5k6aa *VAR_5,
          enum v4l2_mbus_type VAR_6, int VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_1(&VAR_5->sd);
 u16 VAR_9 = 0;
 int VAR_10;






 if (VAR_6 == VAR_3)
  VAR_9 = VAR_7;
 else if (VAR_6 != VAR_4)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_2, VAR_9);
 if (VAR_10)
  return VAR_10;
 return FUNC_0(VAR_8, VAR_1, 1);
}
