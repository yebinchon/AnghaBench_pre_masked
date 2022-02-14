
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {int const type; TYPE_1__ scan_type; } ;
struct ad7192_state {int conf; int** scale_avail; int fclk; int f_order; int mode; int lock; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_2 (struct ad7192_state*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 struct ad7192_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7,
      int *VAR_8,
      long VAR_9)
{
 struct ad7192_state *VAR_10 = FUNC_5(VAR_5);
 bool VAR_11 = !!(VAR_10->conf & VAR_0);

 switch (VAR_9) {
 case 132:
  return FUNC_4(VAR_5, VAR_6, VAR_7);
 case 130:
  switch (VAR_6->type) {
  case 128:
   FUNC_6(&VAR_10->lock);
   *VAR_7 = VAR_10->scale_avail[FUNC_0(VAR_10->conf)][0];
   *VAR_8 = VAR_10->scale_avail[FUNC_0(VAR_10->conf)][1];
   FUNC_7(&VAR_10->lock);
   return VAR_4;
  case 129:
   *VAR_7 = 0;
   *VAR_8 = 1000000000 / FUNC_3(VAR_11);
   return VAR_4;
  default:
   return -VAR_1;
  }
 case 133:
  if (!VAR_11)
   *VAR_7 = -(1 << (VAR_6->scan_type.realbits - 1));
  else
   *VAR_7 = 0;

  if (VAR_6->type == 129)
   *VAR_7 -= 273 * FUNC_3(VAR_11);
  return VAR_3;
 case 131:
  *VAR_7 = VAR_10->fclk /
   (VAR_10->f_order * 1024 * FUNC_1(VAR_10->mode));
  return VAR_3;
 case 134:
  *VAR_7 = FUNC_2(VAR_10);
  *VAR_8 = 1000;
  return VAR_2;
 }

 return -VAR_1;
}
