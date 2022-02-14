
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov8856 {int sd; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct ov8856*,int ,int ,int ) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ov8856 *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(&VAR_3->sd);

 if (FUNC_1(VAR_3, VAR_1,
        VAR_2, VAR_0))
  FUNC_0(&VAR_4->dev, "failed to set stream");
}
