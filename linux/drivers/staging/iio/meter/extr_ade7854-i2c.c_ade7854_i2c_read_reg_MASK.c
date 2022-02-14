
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int* tx; int* rx; int buf_lock; int i2c; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;
 struct ade7854_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1,
    u16 VAR_2,
    u32 *VAR_3,
    int VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct ade7854_state *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 FUNC_4(&VAR_6->buf_lock);
 VAR_6->tx[0] = (VAR_2 >> 8) & 0xFF;
 VAR_6->tx[1] = VAR_2 & 0xFF;

 VAR_7 = FUNC_2(VAR_6->i2c, VAR_6->tx, 2);
 if (VAR_7 < 0)
  goto unlock;

 VAR_7 = FUNC_1(VAR_6->i2c, VAR_6->rx, VAR_4);
 if (VAR_7 < 0)
  goto unlock;

 switch (VAR_4) {
 case 8:
  *VAR_3 = VAR_6->rx[0];
  break;
 case 16:
  *VAR_3 = (VAR_6->rx[0] << 8) | VAR_6->rx[1];
  break;
 case 24:
  *VAR_3 = (VAR_6->rx[0] << 16) | (VAR_6->rx[1] << 8) | VAR_6->rx[2];
  break;
 case 32:
  *VAR_3 = (VAR_6->rx[0] << 24) | (VAR_6->rx[1] << 16) |
   (VAR_6->rx[2] << 8) | VAR_6->rx[3];
  break;
 default:
  VAR_7 = -VAR_0;
  goto unlock;
 }

unlock:
 FUNC_5(&VAR_6->buf_lock);
 return VAR_7;
}
