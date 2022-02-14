
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
 int FUNC_2 (char*,int,char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct panel_drv_data *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 int VAR_7;

 if (!VAR_5->has_cabc)
  return FUNC_2(VAR_4, VAR_0, "%s\n", VAR_1[0]);

 for (VAR_7 = 0, VAR_6 = 0;
      VAR_6 < VAR_0 && VAR_7 < FUNC_0(VAR_1); VAR_7++)
  VAR_6 += FUNC_2(&VAR_4[VAR_6], VAR_0 - VAR_6, "%s%s%s",
   VAR_7 ? " " : "", VAR_1[VAR_7],
   VAR_7 == FUNC_0(VAR_1) - 1 ? "\n" : "");

 return VAR_6 < VAR_0 ? VAR_6 : VAR_0 - 1;
}
