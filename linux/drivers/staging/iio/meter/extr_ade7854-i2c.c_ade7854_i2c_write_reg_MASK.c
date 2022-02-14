
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int* tx; int buf_lock; int i2c; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int*,int) ;
 struct ade7854_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
     u16 VAR_2,
     u32 VAR_3,
     int VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct iio_dev *VAR_7 = FUNC_0(VAR_1);
 struct ade7854_state *VAR_8 = FUNC_2(VAR_7);

 FUNC_3(&VAR_8->buf_lock);
 VAR_8->tx[0] = (VAR_2 >> 8) & 0xFF;
 VAR_8->tx[1] = VAR_2 & 0xFF;

 switch (VAR_4) {
 case 8:
  VAR_8->tx[2] = VAR_3 & 0xFF;
  VAR_6 = 3;
  break;
 case 16:
  VAR_8->tx[2] = (VAR_3 >> 8) & 0xFF;
  VAR_8->tx[3] = VAR_3 & 0xFF;
  VAR_6 = 4;
  break;
 case 24:
  VAR_8->tx[2] = (VAR_3 >> 16) & 0xFF;
  VAR_8->tx[3] = (VAR_3 >> 8) & 0xFF;
  VAR_8->tx[4] = VAR_3 & 0xFF;
  VAR_6 = 5;
  break;
 case 32:
  VAR_8->tx[2] = (VAR_3 >> 24) & 0xFF;
  VAR_8->tx[3] = (VAR_3 >> 16) & 0xFF;
  VAR_8->tx[4] = (VAR_3 >> 8) & 0xFF;
  VAR_8->tx[5] = VAR_3 & 0xFF;
  VAR_6 = 6;
  break;
 default:
  VAR_5 = -VAR_0;
  goto unlock;
 }

 VAR_5 = FUNC_1(VAR_8->i2c, VAR_8->tx, VAR_6);

unlock:
 FUNC_4(&VAR_8->buf_lock);

 return VAR_5 < 0 ? VAR_5 : 0;
}
