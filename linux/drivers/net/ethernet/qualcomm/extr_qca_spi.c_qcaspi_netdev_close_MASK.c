
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcaspi {int * spi_thread; TYPE_1__* spi_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct qcaspi*) ;
 int FUNC_1 (int *) ;
 struct qcaspi* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct qcaspi*) ;
 int FUNC_5 (struct qcaspi*,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2)
{
 struct qcaspi *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 FUNC_5(VAR_3, VAR_0, 0, VAR_1);
 FUNC_0(VAR_3->spi_dev->irq, VAR_3);

 FUNC_1(VAR_3->spi_thread);
 VAR_3->spi_thread = ((void*)0);
 FUNC_4(VAR_3);

 return 0;
}
