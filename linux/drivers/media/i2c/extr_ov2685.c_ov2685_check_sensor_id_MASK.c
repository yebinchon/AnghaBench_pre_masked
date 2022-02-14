
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ov2685 {TYPE_1__* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (struct i2c_client*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct ov2685 *VAR_3,
      struct i2c_client *VAR_4)
{
 struct device *VAR_5 = &VAR_3->client->dev;
 int VAR_6;
 u32 VAR_7 = 0;

 VAR_6 = FUNC_2(VAR_4, VAR_1,
         VAR_2, &VAR_7);
 if (VAR_7 != VAR_0) {
  FUNC_0(VAR_5, "Unexpected sensor id(%04x), ret(%d)\n", VAR_7, VAR_6);
  return VAR_6;
 }

 FUNC_1(VAR_5, "Detected OV%04x sensor\n", VAR_0);

 return 0;
}
