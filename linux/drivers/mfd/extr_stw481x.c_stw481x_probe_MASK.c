
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stw481x {int map; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int pdata_size; struct stw481x* platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 struct stw481x* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,TYPE_1__*,int,int *,int ,int *) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct stw481x*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct stw481x*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct stw481x *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_8(VAR_4, VAR_6);
 VAR_6->client = VAR_4;
 VAR_6->map = FUNC_7(VAR_4, &VAR_3);
 if (FUNC_1(VAR_6->map)) {
  VAR_7 = FUNC_2(VAR_6->map);
  FUNC_3(&VAR_4->dev, "Failed to allocate register map: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7) {
  FUNC_3(&VAR_4->dev, "chip initialization failed\n");
  return VAR_7;
 }


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {

  VAR_2[VAR_8].platform_data = VAR_6;
  VAR_2[VAR_8].pdata_size = sizeof(*VAR_6);
 }

 VAR_7 = FUNC_6(&VAR_4->dev, 0, VAR_2,
       FUNC_0(VAR_2), ((void*)0), 0, ((void*)0));
 if (VAR_7)
  return VAR_7;

 FUNC_4(&VAR_4->dev, "initialized STw481x device\n");

 return VAR_7;
}
