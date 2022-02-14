
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad7192_state {scalar_t__ scale_avail; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 struct ad7192_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        const int **VAR_5, int *VAR_6, int *VAR_7,
        long VAR_8)
{
 struct ad7192_state *VAR_9 = FUNC_1(VAR_3);

 switch (VAR_8) {
 case 128:
  *VAR_5 = (int *)VAR_9->scale_avail;
  *VAR_6 = VAR_2;

  *VAR_7 = FUNC_0(VAR_9->scale_avail) * 2;

  return VAR_1;
 }

 return -VAR_0;
}
