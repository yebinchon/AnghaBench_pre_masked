
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct nvdimm* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct nvdimm *VAR_5 = FUNC_2(VAR_2);

 return FUNC_0(VAR_4, "%s%s\n",
   FUNC_1(VAR_0, &VAR_5->flags) ? "alias " : "",
   FUNC_1(VAR_1, &VAR_5->flags) ? "lock " : "");
}
