
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lis3lv02d* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lis3lv02d*,int*,int*,int*) ;
 int FUNC_2 (struct lis3lv02d*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct lis3lv02d *VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5, VAR_6;

 FUNC_2(VAR_3);
 FUNC_3(&VAR_3->mutex);
 FUNC_1(VAR_3, &VAR_4, &VAR_5, &VAR_6);
 FUNC_4(&VAR_3->mutex);
 return FUNC_5(VAR_2, "(%d,%d,%d)\n", VAR_4, VAR_5, VAR_6);
}
