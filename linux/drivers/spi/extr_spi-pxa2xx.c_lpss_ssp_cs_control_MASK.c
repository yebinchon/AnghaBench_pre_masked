
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int controller; } ;
struct lpss_config {int reg_cs_ctrl; } ;
struct driver_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct driver_data*,int ) ;
 int FUNC_1 (struct driver_data*,int ,int ) ;
 struct lpss_config* FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct spi_device*,struct lpss_config const*) ;
 struct driver_data* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_1, bool VAR_2)
{
 struct driver_data *VAR_3 =
  FUNC_4(VAR_1->controller);
 const struct lpss_config *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_3);

 if (VAR_2)
  FUNC_3(VAR_1, VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_4->reg_cs_ctrl);
 if (VAR_2)
  VAR_5 &= ~VAR_0;
 else
  VAR_5 |= VAR_0;
 FUNC_1(VAR_3, VAR_4->reg_cs_ctrl, VAR_5);
}
