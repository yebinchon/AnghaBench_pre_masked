
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct arche_apb_ctrl_drvdata {scalar_t__ state; int resetn; scalar_t__ spi_en; scalar_t__ spi_en_polarity_high; int vio; int vcore; scalar_t__ init_disabled; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 scalar_t__ FUNC_4 (struct device*,char*,unsigned long) ;
 struct arche_apb_ctrl_drvdata* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct arche_apb_ctrl_drvdata *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;

 if (VAR_5->init_disabled ||
     VAR_5->state == VAR_0)
  return 0;

 VAR_6 = FUNC_6(VAR_5->vcore);
 if (VAR_6) {
  FUNC_3(VAR_4, "failed to enable core regulator\n");
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_5->vio);
 if (VAR_6) {
  FUNC_3(VAR_4, "failed to enable IO regulator\n");
  return VAR_6;
 }

 if (VAR_5->spi_en) {
  unsigned long VAR_7;

  if (VAR_5->spi_en_polarity_high)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_2;

  VAR_5->spi_en = FUNC_4(VAR_4, "spi-en", VAR_7);
  if (FUNC_0(VAR_5->spi_en)) {
   VAR_6 = FUNC_1(VAR_5->spi_en);
   FUNC_3(VAR_4, "Failed requesting SPI bus en GPIO: %d\n",
    VAR_6);
   return VAR_6;
  }
 }


 FUNC_2(VAR_5->resetn);
 VAR_5->state = VAR_0;

 return 0;
}
