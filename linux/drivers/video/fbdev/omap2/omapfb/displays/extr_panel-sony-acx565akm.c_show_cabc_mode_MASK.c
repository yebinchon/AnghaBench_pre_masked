
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int has_cabc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 struct panel_drv_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct panel_drv_data *VAR_5 = FUNC_1(VAR_2);
 const char *VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_5->has_cabc)
  VAR_7 = 0;
 else
  VAR_7 = FUNC_2(VAR_5);
 VAR_6 = "unknown";
 if (VAR_7 >= 0 && VAR_7 < FUNC_0(VAR_1))
  VAR_6 = VAR_1[VAR_7];
 VAR_8 = FUNC_3(VAR_4, VAR_0, "%s\n", VAR_6);

 return VAR_8 < VAR_0 - 1 ? VAR_8 : VAR_0 - 1;
}
