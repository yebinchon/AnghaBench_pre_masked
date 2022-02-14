
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {int prox_data; int mutex; scalar_t__ prox_enable_count; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct bh1770_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct bh1770_chip *VAR_4 = FUNC_0(VAR_1);
 ssize_t VAR_5;

 FUNC_1(&VAR_4->mutex);
 if (VAR_4->prox_enable_count && !FUNC_3(VAR_1))
  VAR_5 = FUNC_4(VAR_3, "%d\n", VAR_4->prox_data);
 else
  VAR_5 = -VAR_0;
 FUNC_2(&VAR_4->mutex);
 return VAR_5;
}
