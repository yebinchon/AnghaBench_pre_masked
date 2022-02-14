
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ifx_spi_device {int flags; int tty_port; TYPE_1__* spi_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 struct ifx_spi_device* FUNC_2 (int ,struct timer_list*,int ) ;
 struct ifx_spi_device* VAR_1 ;
 int FUNC_3 (struct ifx_spi_device*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct ifx_spi_device *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);

 FUNC_1(&VAR_4->spi_dev->dev, "*** SPI Timeout ***");
 FUNC_4(&VAR_4->tty_port, 0);
 FUNC_3(VAR_4);
 FUNC_0(VAR_0, &VAR_4->flags);
}
