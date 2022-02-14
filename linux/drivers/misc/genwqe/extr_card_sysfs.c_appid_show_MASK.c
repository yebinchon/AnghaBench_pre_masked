
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int app_name ;


 struct genwqe_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct genwqe_dev*,char*,int) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 char VAR_3[5];
 struct genwqe_dev *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_4, VAR_3, sizeof(VAR_3));
 return FUNC_2(VAR_2, "%s\n", VAR_3);
}
