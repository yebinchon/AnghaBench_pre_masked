
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int mode; scalar_t__ cs_gpiod; int controller; } ;
struct sh_msiof_spi_priv {int native_cs_inited; int native_cs_high; TYPE_1__* pdev; int ctlr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sh_msiof_spi_priv*,int ) ;
 int FUNC_4 (struct sh_msiof_spi_priv*,int ,int) ;
 struct sh_msiof_spi_priv* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_8)
{
 struct sh_msiof_spi_priv *VAR_9 =
  FUNC_5(VAR_8->controller);
 u32 VAR_10, VAR_11, VAR_12;

 if (VAR_8->cs_gpiod || FUNC_6(VAR_9->ctlr))
  return 0;

 if (VAR_9->native_cs_inited &&
     (VAR_9->native_cs_high == !!(VAR_8->mode & VAR_5)))
  return 0;


 VAR_10 = VAR_1;
 VAR_11 = VAR_2;
 if (VAR_8->mode & VAR_5)
  VAR_10 |= FUNC_0(VAR_0);
 else
  VAR_11 |= FUNC_0(VAR_0);
 FUNC_1(&VAR_9->pdev->dev);
 VAR_12 = FUNC_3(VAR_9, VAR_6) & ~VAR_10;
 FUNC_4(VAR_9, VAR_6, VAR_12 | VAR_11 | VAR_3 | VAR_7);
 VAR_12 = FUNC_3(VAR_9, VAR_4) & ~VAR_10;
 FUNC_4(VAR_9, VAR_4, VAR_12 | VAR_11);
 FUNC_2(&VAR_9->pdev->dev);
 VAR_9->native_cs_high = VAR_8->mode & VAR_5;
 VAR_9->native_cs_inited = 1;
 return 0;
}
