
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int irq; } ;
struct enc28j60_net {int netdev; } ;


 int FUNC_0 (int ,struct enc28j60_net*) ;
 int FUNC_1 (int ) ;
 struct enc28j60_net* FUNC_2 (struct spi_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct enc28j60_net *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->netdev);
 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_1(VAR_1->netdev);

 return 0;
}
