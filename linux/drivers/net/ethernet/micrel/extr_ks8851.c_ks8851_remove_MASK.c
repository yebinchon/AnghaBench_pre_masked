
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct ks8851_net {int netdev; int vdd_io; int vdd_reg; int gpio; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct ks8851_net*) ;
 int FUNC_5 (int ) ;
 struct ks8851_net* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_0)
{
 struct ks8851_net *VAR_1 = FUNC_6(VAR_0);

 if (FUNC_4(VAR_1))
  FUNC_0(&VAR_0->dev, "remove\n");

 FUNC_7(VAR_1->netdev);
 if (FUNC_2(VAR_1->gpio))
  FUNC_3(VAR_1->gpio, 0);
 FUNC_5(VAR_1->vdd_reg);
 FUNC_5(VAR_1->vdd_io);
 FUNC_1(VAR_1->netdev);

 return 0;
}
