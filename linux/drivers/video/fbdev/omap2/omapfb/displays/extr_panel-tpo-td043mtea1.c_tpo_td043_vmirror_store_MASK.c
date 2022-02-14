
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int vmirror; int hmirror; int spi; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct panel_drv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct panel_drv_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, 0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = !!VAR_5;

 VAR_6 = FUNC_2(VAR_4->spi, VAR_4->hmirror, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->vmirror = VAR_5;

 return VAR_3;
}
