
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct spi_device {TYPE_2__ dev; scalar_t__ cs_gpiod; } ;
struct mpc8xxx_spi_probe_info {int immr_spi_cs; } ;
struct fsl_spi_platform_data {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct fsl_spi_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;
 struct mpc8xxx_spi_probe_info* FUNC_4 (struct fsl_spi_platform_data*) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_1, bool VAR_2)
{
 if (VAR_1->cs_gpiod) {
  FUNC_2(VAR_1->cs_gpiod, VAR_2);
 } else {
  struct device *VAR_3 = VAR_1->dev.parent->parent;
  struct fsl_spi_platform_data *VAR_4 = FUNC_1(VAR_3);
  struct mpc8xxx_spi_probe_info *VAR_5 = FUNC_4(VAR_4);

  if (FUNC_0(!VAR_5->immr_spi_cs))
   return;
  FUNC_3(VAR_2 ? VAR_0 : 0, VAR_5->immr_spi_cs);
 }
}
