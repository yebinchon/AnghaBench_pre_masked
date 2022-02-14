
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {long mode; int spi; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 long VAR_1 ;
 struct panel_drv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,long*) ;
 int FUNC_2 (int ,int,long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct panel_drv_data *VAR_6 = FUNC_0(VAR_2);
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 0, &VAR_7);
 if (VAR_8 != 0 || VAR_7 & ~7)
  return -VAR_0;

 VAR_6->mode = VAR_7;

 VAR_7 |= VAR_1;
 FUNC_2(VAR_6->spi, 2, VAR_7);

 return VAR_5;
}
