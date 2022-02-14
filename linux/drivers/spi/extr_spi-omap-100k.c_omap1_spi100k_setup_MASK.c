
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int chip_select; int master; struct omap1_spi100k_cs* controller_state; int dev; } ;
struct omap1_spi100k_cs {scalar_t__ base; } ;
struct omap1_spi100k {int fck; int ick; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct omap1_spi100k_cs* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct spi_device*,int *) ;
 int FUNC_4 (int ) ;
 struct omap1_spi100k* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_2)
{
 int VAR_3;
 struct omap1_spi100k *VAR_4;
 struct omap1_spi100k_cs *VAR_5 = VAR_2->controller_state;

 VAR_4 = FUNC_5(VAR_2->master);

 if (!VAR_5) {
  VAR_5 = FUNC_2(&VAR_2->dev, sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  VAR_5->base = VAR_4->base + VAR_2->chip_select * 0x14;
  VAR_2->controller_state = VAR_5;
 }

 FUNC_4(VAR_2->master);

 FUNC_1(VAR_4->ick);
 FUNC_1(VAR_4->fck);

 VAR_3 = FUNC_3(VAR_2, ((void*)0));

 FUNC_0(VAR_4->ick);
 FUNC_0(VAR_4->fck);

 return VAR_3;
}
