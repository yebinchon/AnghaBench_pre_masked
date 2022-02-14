
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_fw_version {int buildno; int hotfix; int minor; int major; int platform; } ;
struct mei_device {struct mei_fw_version* fw_ver; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mei_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 struct mei_device *VAR_5 = FUNC_0(VAR_2);
 struct mei_fw_version *VAR_6;
 ssize_t VAR_7 = 0;
 int VAR_8;

 VAR_6 = VAR_5->fw_ver;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_7 += FUNC_1(VAR_4 + VAR_7, VAR_1 - VAR_7, "%u:%u.%u.%u.%u\n",
     VAR_6[VAR_8].platform, VAR_6[VAR_8].major, VAR_6[VAR_8].minor,
     VAR_6[VAR_8].hotfix, VAR_6[VAR_8].buildno);
 return VAR_7;
}
