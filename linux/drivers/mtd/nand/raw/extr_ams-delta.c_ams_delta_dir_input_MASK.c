
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_descs {int ndescs; int * desc; } ;
struct ams_delta_nand {int data_in; struct gpio_descs* data_gpiods; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ams_delta_nand *VAR_0)
{
 struct gpio_descs *VAR_1 = VAR_0->data_gpiods;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ndescs; VAR_2++)
  FUNC_0(VAR_1->desc[VAR_2]);

 VAR_0->data_in = 1;
}
