
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_reset_data {TYPE_1__* eemi_ops; } ;
struct reset_controller_dev {int dummy; } ;
struct TYPE_2__ {int (* reset_get_status ) (scalar_t__,int*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int*) ;
 struct zynqmp_reset_data* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_1,
          unsigned long VAR_2)
{
 struct zynqmp_reset_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5;

 VAR_5 = VAR_3->eemi_ops->reset_get_status(VAR_0 + VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_4;
}
