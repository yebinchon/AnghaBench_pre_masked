
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad9834_state {scalar_t__ devid; int control; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct ad9834_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static
ssize_t FUNC_3(struct device *VAR_3,
         struct device_attribute *VAR_4,
         char *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_3);
 struct ad9834_state *VAR_7 = FUNC_1(VAR_6);
 char *VAR_8;

 if (VAR_7->devid == VAR_1 || VAR_7->devid == VAR_2)
  VAR_8 = "sine triangle square";
 else if (VAR_7->control & VAR_0)
  VAR_8 = "sine";
 else
  VAR_8 = "sine triangle";

 return FUNC_2(VAR_5, "%s\n", VAR_8);
}
