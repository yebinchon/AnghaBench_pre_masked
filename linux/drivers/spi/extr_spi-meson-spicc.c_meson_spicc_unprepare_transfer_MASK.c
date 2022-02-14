
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct meson_spicc_device {TYPE_1__* pdev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct meson_spicc_device* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_3)
{
 struct meson_spicc_device *VAR_4 = FUNC_1(VAR_3);


 FUNC_2(0, VAR_4->base + VAR_2);


 FUNC_3(VAR_1, 0, VAR_4->base + VAR_0);

 FUNC_0(&VAR_4->pdev->dev);

 return 0;
}
