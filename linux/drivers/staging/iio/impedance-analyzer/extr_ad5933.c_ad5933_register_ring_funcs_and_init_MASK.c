
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int * setup_ops; } ;
struct iio_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,struct iio_buffer*) ;
 struct iio_buffer* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2)
{
 struct iio_buffer *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_3);


 VAR_2->setup_ops = &VAR_1;

 return 0;
}
