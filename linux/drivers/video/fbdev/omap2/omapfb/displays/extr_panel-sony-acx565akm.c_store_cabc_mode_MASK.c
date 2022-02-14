
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int mutex; int has_cabc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char**) ;
 size_t VAR_0 ;
 char** VAR_1 ;
 struct panel_drv_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct panel_drv_data*,int) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct panel_drv_data *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  const char *VAR_8 = VAR_1[VAR_7];
  int VAR_9 = FUNC_5(VAR_8);

  if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == '\n')
   VAR_5--;
  if (VAR_5 != VAR_9)
   continue;

  if (FUNC_6(VAR_4, VAR_8, VAR_9) == 0)
   break;
 }

 if (VAR_7 == FUNC_0(VAR_1))
  return -VAR_0;

 if (!VAR_6->has_cabc && VAR_7 != 0)
  return -VAR_0;

 FUNC_2(&VAR_6->mutex);
 FUNC_4(VAR_6, VAR_7);
 FUNC_3(&VAR_6->mutex);

 return VAR_5;
}
