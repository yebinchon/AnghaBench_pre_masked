
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7192_state {int gpocon; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct ad7192_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct ad7192_state *VAR_5 = FUNC_1(VAR_4);

 return FUNC_2(VAR_3, "%d\n", !!(VAR_5->gpocon & VAR_0));
}
