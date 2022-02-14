
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_spi_priv {int error; int xfer_done; } ;
struct spi_transfer {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct spi_master {TYPE_1__ dev; } ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct uniphier_spi_priv* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct uniphier_spi_priv*) ;
 int FUNC_5 (struct spi_device*,int) ;
 int FUNC_6 (struct spi_device*,int) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct spi_master *VAR_4,
      struct spi_device *VAR_5,
      struct spi_transfer *VAR_6)
{
 struct uniphier_spi_priv *VAR_7 = FUNC_3(VAR_4);
 struct device *VAR_8 = VAR_4->dev.parent;
 unsigned long VAR_9;

 FUNC_2(&VAR_7->xfer_done);

 FUNC_4(VAR_7);

 FUNC_6(VAR_5, VAR_1 | VAR_2);

 VAR_9 = FUNC_7(&VAR_7->xfer_done,
     FUNC_1(VAR_3));

 FUNC_5(VAR_5, VAR_1 | VAR_2);

 if (!VAR_9) {
  FUNC_0(VAR_8, "transfer timeout.\n");
  return -VAR_0;
 }

 return VAR_7->error;
}
