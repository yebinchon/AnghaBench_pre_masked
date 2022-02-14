
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct ade7854_state {int irq; struct i2c_client* i2c; int write_reg; int read_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*,int *) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (struct i2c_client*,struct iio_dev*) ;
 struct ade7854_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 struct ade7854_state *VAR_5;
 struct iio_dev *VAR_6;

 VAR_6 = FUNC_1(&VAR_3->dev, sizeof(*VAR_5));
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_6);
 FUNC_2(VAR_3, VAR_6);
 VAR_5->read_reg = VAR_1;
 VAR_5->write_reg = VAR_2;
 VAR_5->i2c = VAR_3;
 VAR_5->irq = VAR_3->irq;

 return FUNC_0(VAR_6, &VAR_3->dev);
}
