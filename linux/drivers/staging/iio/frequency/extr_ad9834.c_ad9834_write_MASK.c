
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {int const address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad9834_state {int control; int lock; int msg; int spi; void* data; } ;
typedef int ssize_t ;



 int VAR_0 ;



 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad9834_state*,int const,unsigned long) ;
 int FUNC_1 (struct ad9834_state*,int const,unsigned long) ;
 void* FUNC_2 (int) ;
 struct iio_dev* FUNC_3 (struct device*) ;
 struct ad9834_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 struct iio_dev_attr* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4,
       struct device_attribute *VAR_5,
       const char *VAR_6,
       size_t VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_3(VAR_4);
 struct ad9834_state *VAR_9 = FUNC_4(VAR_8);
 struct iio_dev_attr *VAR_10 = FUNC_9(VAR_5);
 int VAR_11;
 unsigned long VAR_12;

 VAR_11 = FUNC_5(VAR_6, 10, &VAR_12);
 if (VAR_11)
  return VAR_11;

 FUNC_6(&VAR_9->lock);
 switch ((u32)VAR_10->address) {
 case 132:
 case 131:
  VAR_11 = FUNC_0(VAR_9, VAR_10->address, VAR_12);
  break;
 case 130:
 case 129:
  VAR_11 = FUNC_1(VAR_9, VAR_10->address, VAR_12);
  break;
 case 135:
  if (VAR_9->control & VAR_0) {
   VAR_11 = -VAR_2;
   break;
  }

  if (VAR_12)
   VAR_9->control |= 135;
  else
   VAR_9->control &= ~135;

  VAR_9->data = FUNC_2(VAR_1 | VAR_9->control);
  VAR_11 = FUNC_8(VAR_9->spi, &VAR_9->msg);
  break;
 case 134:
  if (VAR_12)
   VAR_9->control |= 134;
  else
   VAR_9->control &= ~134;
  VAR_9->data = FUNC_2(VAR_1 | VAR_9->control);
  VAR_11 = FUNC_8(VAR_9->spi, &VAR_9->msg);
  break;
 case 136:
 case 133:
  if (!VAR_12) {
   VAR_9->control &= ~(VAR_10->address | 134);
  } else if (VAR_12 == 1) {
   VAR_9->control |= VAR_10->address;
   VAR_9->control &= ~134;
  } else {
   VAR_11 = -VAR_2;
   break;
  }
  VAR_9->data = FUNC_2(VAR_1 | VAR_9->control);
  VAR_11 = FUNC_8(VAR_9->spi, &VAR_9->msg);
  break;
 case 128:
  if (VAR_12)
   VAR_9->control &= ~128;
  else
   VAR_9->control |= 128;

  VAR_9->data = FUNC_2(VAR_1 | VAR_9->control);
  VAR_11 = FUNC_8(VAR_9->spi, &VAR_9->msg);
  break;
 default:
  VAR_11 = -VAR_3;
 }
 FUNC_7(&VAR_9->lock);

 return VAR_11 ? VAR_11 : VAR_7;
}
