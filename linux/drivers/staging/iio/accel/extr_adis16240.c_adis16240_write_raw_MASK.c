
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

 int ** VAR_1 ;
 int FUNC_1 (struct adis*,int ,int) ;
 struct adis* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
          struct iio_chan_spec const *VAR_3,
          int VAR_4,
          int VAR_5,
          long VAR_6)
{
 struct adis *VAR_7 = FUNC_2(VAR_2);
 u8 VAR_8;

 switch (VAR_6) {
 case 128:
  VAR_8 = VAR_1[VAR_3->scan_index][0];
  return FUNC_1(VAR_7, VAR_8, VAR_4 & FUNC_0(9, 0));
 }
 return -VAR_0;
}
