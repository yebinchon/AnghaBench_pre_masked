
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ov8856 {int sd; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ov8856*,int ,int ,scalar_t__*) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ov8856 *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(&VAR_4->sd);
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_2,
         VAR_3, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 != VAR_1) {
  FUNC_0(&VAR_5->dev, "chip id mismatch: %x!=%x",
   VAR_1, VAR_7);
  return -VAR_0;
 }

 return 0;
}
