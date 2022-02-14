
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ade7854_state {int buf_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct device*,struct iio_dev*) ;
 struct ade7854_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iio_dev *VAR_2, struct device *VAR_3)
{
 int VAR_4;
 struct ade7854_state *VAR_5 = FUNC_2(VAR_2);

 FUNC_3(&VAR_5->buf_lock);

 VAR_2->dev.parent = VAR_3;
 VAR_2->info = &VAR_1;
 VAR_2->modes = VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;


 return FUNC_0(VAR_2);
}
