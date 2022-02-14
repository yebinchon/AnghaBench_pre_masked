
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {scalar_t__ nr_resets; } ;
struct of_phandle_args {scalar_t__* args; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct reset_controller_dev *VAR_1,
     const struct of_phandle_args *VAR_2)
{
 if (VAR_2->args[0] >= VAR_1->nr_resets)
  return -VAR_0;

 return VAR_2->args[0];
}
