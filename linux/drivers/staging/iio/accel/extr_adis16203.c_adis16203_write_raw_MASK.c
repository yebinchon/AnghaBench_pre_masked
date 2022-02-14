
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct adis*,int ,int) ;
 struct adis* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
          struct iio_chan_spec const *VAR_2,
          int VAR_3,
          int VAR_4,
          long VAR_5)
{
 struct adis *VAR_6 = FUNC_1(VAR_1);

 u8 VAR_7 = VAR_0[VAR_2->scan_index];

 return FUNC_0(VAR_6, VAR_7, VAR_3 & 0x3FFF);
}
