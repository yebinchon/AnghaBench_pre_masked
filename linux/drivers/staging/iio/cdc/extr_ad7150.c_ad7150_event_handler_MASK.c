
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct ad7150_chip_info {int old_state; int client; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad7150_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct iio_dev *VAR_10 = VAR_9;
 struct ad7150_chip_info *VAR_11 = FUNC_3(VAR_10);
 u8 VAR_12;
 s64 VAR_13 = FUNC_2(VAR_10);
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11->client, VAR_0);
 if (VAR_14 < 0)
  return VAR_7;

 VAR_12 = VAR_14;

 if ((VAR_12 & VAR_1) &&
     !(VAR_11->old_state & VAR_1))
  FUNC_4(VAR_10,
          FUNC_0(VAR_3,
          0,
          VAR_6,
          VAR_5),
    VAR_13);
 else if ((!(VAR_12 & VAR_1)) &&
   (VAR_11->old_state & VAR_1))
  FUNC_4(VAR_10,
          FUNC_0(VAR_3,
          0,
          VAR_6,
          VAR_4),
          VAR_13);

 if ((VAR_12 & VAR_2) &&
     !(VAR_11->old_state & VAR_2))
  FUNC_4(VAR_10,
          FUNC_0(VAR_3,
          1,
          VAR_6,
          VAR_5),
          VAR_13);
 else if ((!(VAR_12 & VAR_2)) &&
   (VAR_11->old_state & VAR_2))
  FUNC_4(VAR_10,
          FUNC_0(VAR_3,
          1,
          VAR_6,
          VAR_4),
          VAR_13);

 VAR_11->old_state = VAR_12;

 return VAR_7;
}
