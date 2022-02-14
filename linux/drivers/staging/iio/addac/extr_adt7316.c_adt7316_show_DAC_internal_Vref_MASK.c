
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7316_chip_info {int id; int ldac_config; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct adt7316_chip_info* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
           struct device_attribute *VAR_6,
           char *VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_0(VAR_5);
 struct adt7316_chip_info *VAR_9 = FUNC_1(VAR_8);

 if ((VAR_9->id & VAR_4) == VAR_3)
  return FUNC_2(VAR_7, "0x%x\n",
   (VAR_9->ldac_config & VAR_1) >>
   VAR_2);
 return FUNC_2(VAR_7, "%d\n",
         !!(VAR_9->ldac_config & VAR_0));
}
