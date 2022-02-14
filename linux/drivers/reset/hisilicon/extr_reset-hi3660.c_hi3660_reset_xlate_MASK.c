
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct of_phandle_args {unsigned int* args; } ;



__attribute__((used)) static int FUNC_0(struct reset_controller_dev *VAR_0,
         const struct of_phandle_args *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = VAR_1->args[0];
 VAR_3 = VAR_1->args[1];

 return (VAR_2 << 8) | VAR_3;
}
