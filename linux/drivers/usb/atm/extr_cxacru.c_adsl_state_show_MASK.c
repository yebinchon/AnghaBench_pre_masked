
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxacru_data {int* card_info; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*,...) ;
 int FUNC_2 (struct device*) ;
 struct cxacru_data* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{
 static char *VAR_6[] = { "running", "stopped" };
 struct cxacru_data *VAR_7 = FUNC_3(
   FUNC_2(VAR_3));
 u32 VAR_8;

 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = VAR_7->card_info[VAR_0];
 if (FUNC_4(VAR_8 >= FUNC_0(VAR_6)))
  return FUNC_1(VAR_5, VAR_2, "%u\n", VAR_8);
 return FUNC_1(VAR_5, VAR_2, "%s\n", VAR_6[VAR_8]);
}
