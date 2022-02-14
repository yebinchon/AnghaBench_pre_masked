
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;


 int FUNC_0 (struct iio_channel*,int*) ;

__attribute__((used)) static inline int FUNC_1(struct iio_channel *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_2 < 0)
  return 0;
 return VAR_1 > 4500;
}
