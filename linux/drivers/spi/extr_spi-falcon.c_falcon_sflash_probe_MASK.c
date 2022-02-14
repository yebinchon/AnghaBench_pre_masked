
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct spi_master {TYPE_1__ dev; int transfer_one_message; int setup; int flags; int mode_bits; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct falcon_sflash {struct spi_master* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct spi_master*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct spi_master* FUNC_1 (TYPE_2__*,int) ;
 struct falcon_sflash* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct falcon_sflash *VAR_6;
 struct spi_master *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_7);
 VAR_6->master = VAR_7;

 VAR_7->mode_bits = VAR_2;
 VAR_7->flags = VAR_1;
 VAR_7->setup = VAR_3;
 VAR_7->transfer_one_message = VAR_4;
 VAR_7->dev.of_node = VAR_5->dev.of_node;

 VAR_8 = FUNC_0(&VAR_5->dev, VAR_7);
 if (VAR_8)
  FUNC_3(VAR_7);
 return VAR_8;
}
