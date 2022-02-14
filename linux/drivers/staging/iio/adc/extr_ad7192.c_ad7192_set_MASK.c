
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7192_state {int mode; int sd; int gpocon; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *,int const,int,int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad7192_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (char const*,int*) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5,
     size_t VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_1(VAR_3);
 struct ad7192_state *VAR_8 = FUNC_4(VAR_7);
 struct iio_dev_attr *VAR_9 = FUNC_6(VAR_4);
 int VAR_10;
 bool VAR_11;

 VAR_10 = FUNC_5(VAR_5, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  return VAR_10;

 switch ((u32)VAR_9->address) {
 case 129:
  if (VAR_11)
   VAR_8->gpocon |= VAR_0;
  else
   VAR_8->gpocon &= ~VAR_0;

  FUNC_0(&VAR_8->sd, 129, 1, VAR_8->gpocon);
  break;
 case 128:
  if (VAR_11)
   VAR_8->mode |= VAR_1;
  else
   VAR_8->mode &= ~VAR_1;

  FUNC_0(&VAR_8->sd, 128, 3, VAR_8->mode);
  break;
 default:
  VAR_10 = -VAR_2;
 }

 FUNC_3(VAR_7);

 return VAR_10 ? VAR_10 : VAR_6;
}
