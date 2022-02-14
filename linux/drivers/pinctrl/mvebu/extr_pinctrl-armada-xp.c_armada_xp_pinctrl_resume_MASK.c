
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mvebu_pinctrl_soc_info {TYPE_1__* control_data; int nmodes; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct mvebu_pinctrl_soc_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct mvebu_pinctrl_soc_info *VAR_3 =
  FUNC_1(VAR_2);
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_3->nmodes, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_2(VAR_1[VAR_4], VAR_3->control_data[0].base + VAR_4 * 4);

 return 0;
}
