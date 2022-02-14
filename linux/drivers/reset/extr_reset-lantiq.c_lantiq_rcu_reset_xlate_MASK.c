
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {unsigned int nr_resets; } ;
struct of_phandle_args {unsigned int* args; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct reset_controller_dev *VAR_1,
      const struct of_phandle_args *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 VAR_4 = VAR_2->args[0];
 VAR_3 = VAR_2->args[1];

 if (VAR_4 >= VAR_1->nr_resets || VAR_3 >= VAR_1->nr_resets)
  return -VAR_0;

 return (VAR_3 << 8) | VAR_4;
}
