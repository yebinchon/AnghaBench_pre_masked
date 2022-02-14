
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_address ) (struct nvme_ctrl*,char*,int ) ;} ;


 int VAR_0 ;
 struct nvme_ctrl* FUNC_0 (struct device*) ;
 int FUNC_1 (struct nvme_ctrl*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct nvme_ctrl *VAR_4 = FUNC_0(VAR_1);

 return VAR_4->ops->get_address(VAR_4, VAR_3, VAR_0);
}
