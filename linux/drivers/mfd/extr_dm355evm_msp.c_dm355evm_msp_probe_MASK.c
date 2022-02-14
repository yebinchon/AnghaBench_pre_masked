
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *,char*,int,char const*) ;
 int FUNC_2 (int *,char*,int,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int,int ) ;
 int VAR_5 ;
 struct i2c_client* VAR_6 ;
 scalar_t__ FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_9, const struct i2c_device_id *VAR_10)
{
 int VAR_11;
 const char *VAR_12 = FUNC_6() ? "TVP5146" : "imager";

 if (VAR_6)
  return -VAR_3;
 VAR_6 = VAR_9;


 VAR_11 = FUNC_3(VAR_0);
 if (VAR_11 < 0)
  goto fail;
 FUNC_1(&VAR_9->dev, "firmware v.%02X, %s as video-in\n",
   VAR_11, VAR_12);


 VAR_11 = FUNC_5(FUNC_6() ? 0 : VAR_4,
   VAR_2);
 if (VAR_11 < 0)
  FUNC_2(&VAR_9->dev, "error %d muxing %s as video-in\n",
   VAR_11, VAR_12);


 VAR_7 = 0xff;
 FUNC_5(VAR_7, VAR_1);


 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 < 0)
  goto fail;


 VAR_8 = VAR_5;

 return 0;

fail:

 FUNC_4(VAR_9);
 return VAR_11;
}
