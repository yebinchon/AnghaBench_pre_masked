
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct ad7280_state {int lock; int scan_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ad7280_state*,int ,int *) ;
 int FUNC_1 (struct ad7280_state*,int,int) ;
 struct ad7280_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
      struct iio_chan_spec const *VAR_7,
      int *VAR_8,
      int *VAR_9,
      long VAR_10)
{
 struct ad7280_state *VAR_11 = FUNC_2(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 129:
  FUNC_3(&VAR_11->lock);
  if (VAR_7->address == VAR_0)
   VAR_12 = FUNC_0(VAR_11, VAR_11->scan_cnt, ((void*)0));
  else
   VAR_12 = FUNC_1(VAR_11, VAR_7->address >> 8,
        VAR_7->address & 0xFF);
  FUNC_4(&VAR_11->lock);

  if (VAR_12 < 0)
   return VAR_12;

  *VAR_8 = VAR_12;

  return VAR_5;
 case 128:
  if ((VAR_7->address & 0xFF) <= VAR_2)
   *VAR_8 = 4000;
  else
   *VAR_8 = 5000;

  *VAR_9 = VAR_1;
  return VAR_4;
 }
 return -VAR_3;
}
