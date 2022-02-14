
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {int prox_data; int mutex; int prox_en; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct apds990x_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 ssize_t VAR_4;
 struct apds990x_chip *VAR_5 = FUNC_0(VAR_1);

 if (FUNC_3(VAR_1) || !VAR_5->prox_en)
  return -VAR_0;

 FUNC_1(&VAR_5->mutex);
 VAR_4 = FUNC_4(VAR_3, "%d\n", VAR_5->prox_data);
 FUNC_2(&VAR_5->mutex);
 return VAR_4;
}
