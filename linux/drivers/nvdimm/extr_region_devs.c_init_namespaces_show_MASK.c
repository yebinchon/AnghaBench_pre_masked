
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region_data {int ns_active; int ns_count; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nd_region_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nd_region_data *VAR_4 = FUNC_0(VAR_1);
 ssize_t VAR_5;

 FUNC_1(VAR_1);
 if (VAR_4)
  VAR_5 = FUNC_3(VAR_3, "%d/%d\n", VAR_4->ns_active, VAR_4->ns_count);
 else
  VAR_5 = -VAR_0;
 FUNC_2(VAR_1);

 return VAR_5;
}
