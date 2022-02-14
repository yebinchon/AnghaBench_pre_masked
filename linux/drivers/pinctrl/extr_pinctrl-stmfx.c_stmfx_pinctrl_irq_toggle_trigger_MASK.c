
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmfx_pinctrl {size_t* irq_toggle_edge; size_t* irq_gpi_type; TYPE_1__* stmfx; int gpio_chip; } ;
struct TYPE_2__ {int map; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,scalar_t__,size_t,size_t) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct stmfx_pinctrl *VAR_1,
          unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (!(VAR_1->irq_toggle_edge[VAR_3] & VAR_4))
  return;

 VAR_5 = FUNC_3(&VAR_1->gpio_chip, VAR_2);
 if (VAR_5 < 0)
  return;

 if (VAR_5) {
  VAR_1->irq_gpi_type[VAR_3] &= VAR_4;
  FUNC_2(VAR_1->stmfx->map,
      VAR_0 + VAR_3,
      VAR_4, 0);

 } else {
  VAR_1->irq_gpi_type[VAR_3] |= VAR_4;
  FUNC_2(VAR_1->stmfx->map,
      VAR_0 + VAR_3,
      VAR_4, VAR_4);
 }
}
