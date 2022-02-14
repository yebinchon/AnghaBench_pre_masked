
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad2s1210_state {int lock; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ad2s1210_state*,int ) ;
 int FUNC_1 (struct device*) ;
 struct ad2s1210_state* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct ad2s1210_state *VAR_3 = FUNC_2(FUNC_1(VAR_0));
 struct iio_dev_attr *VAR_4 = FUNC_6(VAR_1);
 int VAR_5;

 FUNC_3(&VAR_3->lock);
 VAR_5 = FUNC_0(VAR_3, VAR_4->address);
 FUNC_4(&VAR_3->lock);

 return VAR_5 < 0 ? VAR_5 : FUNC_5(VAR_2, "%d\n", VAR_5);
}
