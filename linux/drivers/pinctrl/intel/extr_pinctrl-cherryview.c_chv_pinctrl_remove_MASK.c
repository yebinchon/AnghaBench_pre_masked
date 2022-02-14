
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct chv_pinctrl {TYPE_1__* community; } ;
struct TYPE_2__ {int acpi_space_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 struct chv_pinctrl* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct chv_pinctrl *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(FUNC_0(&VAR_1->dev),
       VAR_2->community->acpi_space_id,
       VAR_0);

 return 0;
}
