
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int chip_select; int controller; } ;
struct lpss_config {int cs_sel_mask; int cs_sel_shift; int reg_cs_ctrl; } ;
struct driver_data {TYPE_1__* controller; } ;
struct TYPE_2__ {int max_speed_hz; } ;


 int FUNC_0 (struct driver_data*,int ) ;
 int FUNC_1 (struct driver_data*,int ,int) ;
 int FUNC_2 (int) ;
 struct driver_data* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0,
          const struct lpss_config *VAR_1)
{
 struct driver_data *VAR_2 =
  FUNC_3(VAR_0->controller);
 u32 VAR_3, VAR_4;

 if (!VAR_1->cs_sel_mask)
  return;

 VAR_3 = FUNC_0(VAR_2, VAR_1->reg_cs_ctrl);

 VAR_4 = VAR_0->chip_select;
 VAR_4 <<= VAR_1->cs_sel_shift;
 if (VAR_4 != (VAR_3 & VAR_1->cs_sel_mask)) {







  VAR_3 &= ~VAR_1->cs_sel_mask;
  VAR_3 |= VAR_4;
  FUNC_1(VAR_2,
          VAR_1->reg_cs_ctrl, VAR_3);
  FUNC_2(1000000000 /
         (VAR_2->controller->max_speed_hz / 2));
 }
}
