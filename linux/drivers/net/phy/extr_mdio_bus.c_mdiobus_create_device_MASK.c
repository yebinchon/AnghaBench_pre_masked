
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {int dummy; } ;
struct TYPE_2__ {void* platform_data; } ;
struct mdio_device {TYPE_1__ dev; int bus_match; int modalias; } ;
struct mdio_board_info {scalar_t__ platform_data; int modalias; int mdio_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mdio_device*) ;
 int VAR_1 ;
 struct mdio_device* FUNC_1 (struct mii_bus*,int ) ;
 int FUNC_2 (struct mdio_device*) ;
 int FUNC_3 (struct mdio_device*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_2,
     struct mdio_board_info *VAR_3)
{
 struct mdio_device *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_3->mdio_addr);
 if (FUNC_0(VAR_4))
  return -VAR_0;

 FUNC_4(VAR_4->modalias, VAR_3->modalias,
  sizeof(VAR_4->modalias));
 VAR_4->bus_match = VAR_1;
 VAR_4->dev.platform_data = (void *)VAR_3->platform_data;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_2(VAR_4);

 return VAR_5;
}
