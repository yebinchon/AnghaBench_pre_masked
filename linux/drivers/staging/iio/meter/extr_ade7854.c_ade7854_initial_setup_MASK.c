
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct iio_dev {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->dev;


 VAR_2 = FUNC_1(VAR_3, 0);
 if (VAR_2) {
  FUNC_2(VAR_3, "disable irq failed");
  goto err_ret;
 }

 FUNC_0(VAR_3);
 FUNC_3(VAR_0, VAR_0 + 100);

err_ret:
 return VAR_2;
}
