
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct of_phandle_args {unsigned int* args; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct reset_controller_dev *VAR_2,
         const struct of_phandle_args *VAR_3)
{
 unsigned VAR_4, VAR_5;

 VAR_4 = VAR_3->args[0];
 VAR_5 = VAR_3->args[1];

 if (VAR_5 >= VAR_0)
  return -VAR_1;

 return (VAR_4 << 8) | VAR_5;
}
