
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scmi_handle {TYPE_1__* reset_ops; } ;
struct reset_controller_dev {int dummy; } ;
struct TYPE_2__ {int (* assert ) (struct scmi_handle const*,unsigned long) ;} ;


 int FUNC_0 (struct scmi_handle const*,unsigned long) ;
 struct scmi_handle* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int
FUNC_2(struct reset_controller_dev *VAR_0, unsigned long VAR_1)
{
 const struct scmi_handle *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->reset_ops->assert(VAR_2, VAR_1);
}
