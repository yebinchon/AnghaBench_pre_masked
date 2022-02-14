
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns {size_t ana_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 struct nvme_ns* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
  char *VAR_3)
{
 struct nvme_ns *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, "%s\n", VAR_0[VAR_4->ana_state]);
}
