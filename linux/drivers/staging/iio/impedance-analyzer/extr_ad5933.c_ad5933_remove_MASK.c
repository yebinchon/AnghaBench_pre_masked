
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int buffer; } ;
struct i2c_client {int dummy; } ;
struct ad5933_state {int mclk; int reg; } ;


 int FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 struct ad5933_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct ad5933_state *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1->buffer);
 FUNC_5(VAR_2->reg);
 FUNC_0(VAR_2->mclk);

 return 0;
}
