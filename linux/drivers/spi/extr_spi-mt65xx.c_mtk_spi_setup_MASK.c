
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int mode; int cs_gpio; void* controller_data; int master; } ;
struct mtk_spi {TYPE_1__* dev_comp; } ;
struct TYPE_2__ {scalar_t__ need_pad_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 struct mtk_spi* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2)
{
 struct mtk_spi *VAR_3 = FUNC_2(VAR_2->master);

 if (!VAR_2->controller_data)
  VAR_2->controller_data = (void *)&VAR_1;

 if (VAR_3->dev_comp->need_pad_sel && FUNC_1(VAR_2->cs_gpio))
  FUNC_0(VAR_2->cs_gpio, !(VAR_2->mode & VAR_0));

 return 0;
}
