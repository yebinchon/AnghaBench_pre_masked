
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5933_state {int client; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ad5933_state*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct ad5933_state*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad5933_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_6,
      struct iio_chan_spec const *VAR_7,
      int *VAR_8,
      int *VAR_9,
      long VAR_10)
{
 struct ad5933_state *VAR_11 = FUNC_6(VAR_6);
 __be16 VAR_12;
 int VAR_13;

 switch (VAR_10) {
 case 129:
  VAR_13 = FUNC_4(VAR_6);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_0(VAR_11, VAR_0);
  if (VAR_13 < 0)
   goto out;
  VAR_13 = FUNC_2(VAR_11, VAR_2);
  if (VAR_13 < 0)
   goto out;

  VAR_13 = FUNC_1(VAR_11->client,
          VAR_1,
          2, (u8 *)&VAR_12);
  if (VAR_13 < 0)
   goto out;
  FUNC_5(VAR_6);
  *VAR_8 = FUNC_7(FUNC_3(VAR_12), 13);

  return VAR_5;
 case 128:
  *VAR_8 = 1000;
  *VAR_9 = 5;
  return VAR_4;
 }

 return -VAR_3;
out:
 FUNC_5(VAR_6);
 return VAR_13;
}
