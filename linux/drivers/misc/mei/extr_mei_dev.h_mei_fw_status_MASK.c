
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_fw_status {int dummy; } ;
struct mei_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* fw_status ) (struct mei_device*,struct mei_fw_status*) ;} ;


 int FUNC_0 (struct mei_device*,struct mei_fw_status*) ;

__attribute__((used)) static inline int FUNC_1(struct mei_device *VAR_0,
    struct mei_fw_status *VAR_1)
{
 return VAR_0->ops->fw_status(VAR_0, VAR_1);
}
