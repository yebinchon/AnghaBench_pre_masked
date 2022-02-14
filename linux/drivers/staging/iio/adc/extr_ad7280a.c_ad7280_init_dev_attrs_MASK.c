
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int attr; } ;
struct iio_dev_attr {TYPE_2__ dev_attr; } ;
struct device {int dummy; } ;
struct ad7280_state {struct iio_dev_attr* iio_attr; TYPE_1__* spi; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (struct iio_dev_attr*,struct device*,int,int) ;
 int FUNC_1 (struct iio_dev_attr*,struct device*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ad7280_state *VAR_5, int VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct iio_dev_attr *VAR_12;
 struct device *VAR_13 = &VAR_5->spi->dev;

 for (VAR_9 = VAR_2; VAR_9 <= VAR_3; VAR_9++) {
  VAR_12 = &VAR_5->iio_attr[*VAR_7];
  VAR_8 = FUNC_2(VAR_6) << 8 | VAR_9;
  VAR_10 = VAR_6 * VAR_1 + VAR_9;

  VAR_11 = FUNC_0(VAR_12, VAR_13, VAR_8, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_4[*VAR_7] = &VAR_12->dev_attr.attr;

  (*VAR_7)++;
  VAR_12 = &VAR_5->iio_attr[*VAR_7];
  VAR_8 = FUNC_2(VAR_6) << 8 | (VAR_0 + VAR_9);

  VAR_11 = FUNC_1(VAR_12, VAR_13, VAR_8, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_4[*VAR_7] = &VAR_12->dev_attr.attr;
  (*VAR_7)++;
 }

 VAR_4[*VAR_7] = ((void*)0);

 return 0;
}
