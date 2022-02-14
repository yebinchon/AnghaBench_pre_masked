
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_reset_data {TYPE_1__* eemi_ops; } ;
struct reset_controller_dev {int dummy; } ;
struct TYPE_2__ {int (* reset_assert ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct zynqmp_reset_data* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_2,
          unsigned long VAR_3)
{
 struct zynqmp_reset_data *VAR_4 = FUNC_1(VAR_2);

 return VAR_4->eemi_ops->reset_assert(VAR_1 + VAR_3,
         VAR_0);
}
