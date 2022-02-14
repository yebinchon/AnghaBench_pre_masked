
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad9834_state {scalar_t__ devid; int control; int lock; int msg; int spi; int data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad9834_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char const*,char*) ;
 struct iio_dev_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8,
         size_t VAR_9)
{
 struct iio_dev *VAR_10 = FUNC_1(VAR_6);
 struct ad9834_state *VAR_11 = FUNC_2(VAR_10);
 struct iio_dev_attr *VAR_12 = FUNC_7(VAR_7);
 int VAR_13 = 0;
 bool VAR_14 = (VAR_11->devid == VAR_4) || (VAR_11->devid == VAR_5);

 FUNC_3(&VAR_11->lock);

 switch ((u32)VAR_12->address) {
 case 0:
  if (FUNC_6(VAR_8, "sine")) {
   VAR_11->control &= ~VAR_0;
   if (VAR_14)
    VAR_11->control &= ~VAR_1;
  } else if (FUNC_6(VAR_8, "triangle")) {
   if (VAR_14) {
    VAR_11->control &= ~VAR_1;
    VAR_11->control |= VAR_0;
   } else if (VAR_11->control & VAR_1) {
    VAR_13 = -VAR_3;
   } else {
    VAR_11->control |= VAR_0;
   }
  } else if (VAR_14 && FUNC_6(VAR_8, "square")) {
   VAR_11->control &= ~VAR_0;
   VAR_11->control |= VAR_1;
  } else {
   VAR_13 = -VAR_3;
  }

  break;
 case 1:
  if (FUNC_6(VAR_8, "square") &&
      !(VAR_11->control & VAR_0)) {
   VAR_11->control &= ~VAR_0;
   VAR_11->control |= VAR_1;
  } else {
   VAR_13 = -VAR_3;
  }
  break;
 default:
  VAR_13 = -VAR_3;
  break;
 }

 if (!VAR_13) {
  VAR_11->data = FUNC_0(VAR_2 | VAR_11->control);
  VAR_13 = FUNC_5(VAR_11->spi, &VAR_11->msg);
 }
 FUNC_4(&VAR_11->lock);

 return VAR_13 ? VAR_13 : VAR_9;
}
