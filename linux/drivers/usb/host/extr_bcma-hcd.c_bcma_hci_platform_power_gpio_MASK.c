
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_hcd_device {int gpio_desc; } ;
struct bcma_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct bcma_hcd_device* FUNC_1 (struct bcma_device*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct bcma_device *VAR_0, bool VAR_1)
{
 struct bcma_hcd_device *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_2->gpio_desc))
  return;

 FUNC_2(VAR_2->gpio_desc, VAR_1);
}
