
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {int reclen; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 struct urdev* FUNC_2 (int ) ;
 int FUNC_3 (struct urdev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct urdev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(FUNC_1(VAR_1));
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_3, "%zu\n", VAR_4->reclen);
 FUNC_3(VAR_4);
 return VAR_5;
}
