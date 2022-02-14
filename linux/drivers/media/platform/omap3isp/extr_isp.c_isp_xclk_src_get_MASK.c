
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {unsigned int* args; } ;
struct isp_device {TYPE_1__* xclks; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 struct clk* FUNC_1 (int ) ;

__attribute__((used)) static struct clk *FUNC_2(struct of_phandle_args *VAR_1, void *VAR_2)
{
 unsigned int VAR_3 = VAR_1->args[0];
 struct isp_device *VAR_4 = VAR_2;

 if (VAR_3 >= FUNC_0(VAR_4->xclks))
  return FUNC_1(-VAR_0);

 return VAR_4->xclks[VAR_3].clk;
}
