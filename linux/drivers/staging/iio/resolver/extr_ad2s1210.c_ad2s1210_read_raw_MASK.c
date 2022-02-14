
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct ad2s1210_state {int* rx; int resolution; int lock; int * gpios; int hysteresis; int sdev; } ;
typedef int s16 ;
typedef int __be16 ;


 size_t VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ad2s1210_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 struct ad2s1210_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int *VAR_7,
        int *VAR_8,
        long VAR_9)
{
 struct ad2s1210_state *VAR_10 = FUNC_3(VAR_5);
 u16 VAR_11;
 int VAR_12 = 0;
 u16 VAR_13;
 s16 VAR_14;

 FUNC_4(&VAR_10->lock);
 FUNC_2(VAR_10->gpios[VAR_0], 0);

 FUNC_7(1);

 switch (VAR_6->type) {
 case 129:
  FUNC_0(VAR_3, VAR_10);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_10);
  break;
 default:
  VAR_12 = -VAR_1;
  break;
 }
 if (VAR_12 < 0)
  goto error_ret;
 VAR_12 = FUNC_6(VAR_10->sdev, VAR_10->rx, 2);
 if (VAR_12 < 0)
  goto error_ret;

 switch (VAR_6->type) {
 case 129:
  VAR_13 = FUNC_1((__be16 *)VAR_10->rx);
  if (VAR_10->hysteresis)
   VAR_13 >>= 16 - VAR_10->resolution;
  *VAR_7 = VAR_13;
  VAR_12 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_10->rx[0] & 0x80;
  VAR_14 = FUNC_1((__be16 *)VAR_10->rx);
  VAR_14 >>= 16 - VAR_10->resolution;
  if (VAR_14 & 0x8000) {
   VAR_11 = (0xffff >> VAR_10->resolution) << VAR_10->resolution;
   VAR_14 |= VAR_11;
  }
  *VAR_7 = VAR_14;
  VAR_12 = VAR_2;
  break;
 default:
  FUNC_5(&VAR_10->lock);
  return -VAR_1;
 }

error_ret:
 FUNC_2(VAR_10->gpios[VAR_0], 1);

 FUNC_7(1);
 FUNC_5(&VAR_10->lock);
 return VAR_12;
}
