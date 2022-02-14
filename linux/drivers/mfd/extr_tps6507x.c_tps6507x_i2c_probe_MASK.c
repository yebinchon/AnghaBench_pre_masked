
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6507x_dev {int * dev; int write_dev; int read_dev; struct i2c_client* i2c_client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tps6507x_dev* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_3 (struct i2c_client*,struct tps6507x_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 struct tps6507x_dev *VAR_7;

 VAR_7 = FUNC_1(&VAR_5->dev, sizeof(struct tps6507x_dev),
    VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_5, VAR_7);
 VAR_7->dev = &VAR_5->dev;
 VAR_7->i2c_client = VAR_5;
 VAR_7->read_dev = VAR_3;
 VAR_7->write_dev = VAR_4;

 return FUNC_2(VAR_7->dev, -1, VAR_2,
        FUNC_0(VAR_2), ((void*)0), 0, ((void*)0));
}
