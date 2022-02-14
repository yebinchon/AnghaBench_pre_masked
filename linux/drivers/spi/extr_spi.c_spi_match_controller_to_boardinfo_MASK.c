
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct spi_controller {scalar_t__ bus_num; TYPE_1__ dev; } ;
struct spi_board_info {scalar_t__ bus_num; int modalias; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct spi_device* FUNC_1 (struct spi_controller*,struct spi_board_info*) ;

__attribute__((used)) static void FUNC_2(struct spi_controller *VAR_0,
           struct spi_board_info *VAR_1)
{
 struct spi_device *VAR_2;

 if (VAR_0->bus_num != VAR_1->bus_num)
  return;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_0(VAR_0->dev.parent, "can't create new device for %s\n",
   VAR_1->modalias);
}
