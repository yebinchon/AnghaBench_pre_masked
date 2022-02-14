
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smiapp_sensor {int mutex; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct smiapp_sensor*,int ) ;
 int FUNC_4 (struct smiapp_sensor*,int ,int ) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct smiapp_sensor *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(&VAR_3->src->sd);
 int VAR_5;

 FUNC_1(&VAR_3->mutex);
 VAR_5 = FUNC_4(VAR_3, VAR_1,
       VAR_0);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (VAR_5)
  FUNC_0(&VAR_4->dev, "post_streamoff quirks failed\n");

out:
 FUNC_2(&VAR_3->mutex);
 return VAR_5;
}
