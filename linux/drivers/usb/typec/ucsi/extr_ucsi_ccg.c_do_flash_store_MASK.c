
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int fw_build; int work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct ucsi_ccg* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct ucsi_ccg *VAR_5 = FUNC_1(FUNC_4(VAR_1));
 bool VAR_6;

 if (FUNC_2(VAR_3, &VAR_6))
  return -VAR_0;

 if (!VAR_6)
  return VAR_4;

 if (VAR_5->fw_build == 0x0) {
  FUNC_0(VAR_1, "fail to flash FW due to missing FW build info\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_5->work);
 return VAR_4;
}
