
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7192_state {int dummy; } ;
typedef size_t ssize_t ;


 unsigned int FUNC_0 (unsigned int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ad7192_state*,unsigned int*) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 struct ad7192_state* FUNC_3 (struct iio_dev*) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_2(VAR_1);
 struct ad7192_state *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6[4], VAR_7;
 size_t VAR_8 = 0;

 FUNC_1(VAR_5, VAR_6);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++)
  VAR_8 += FUNC_4(VAR_3 + VAR_8, VAR_0 - VAR_8,
     "%d.%d ", VAR_6[VAR_7] / 1000,
     VAR_6[VAR_7] % 1000);

 VAR_3[VAR_8 - 1] = '\n';

 return VAR_8;
}
