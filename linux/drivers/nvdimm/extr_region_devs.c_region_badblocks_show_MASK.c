
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int bb; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct nd_region* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nd_region *VAR_4 = FUNC_3(VAR_1);
 ssize_t VAR_5;

 FUNC_1(VAR_1);
 if (VAR_1->driver)
  VAR_5 = FUNC_0(&VAR_4->bb, VAR_3, 0);
 else
  VAR_5 = -VAR_0;
 FUNC_2(VAR_1);

 return VAR_5;
}
