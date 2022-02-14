
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct nvme_ctrl* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*,struct device_attribute*) ;
 int FUNC_2 (struct nvme_ctrl*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, const char *VAR_2,
    size_t VAR_3)
{
 struct nvme_ctrl *VAR_4 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0, VAR_1))
  FUNC_2(VAR_4);
 return VAR_3;
}
