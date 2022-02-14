
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_gpio_state {int dev; int map; } ;
struct pmic_gpio_pad {scalar_t__ base; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pmic_gpio_state *VAR_0,
      struct pmic_gpio_pad *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->map, VAR_1->base + VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev, "write 0x%x failed\n", VAR_2);

 return VAR_4;
}
