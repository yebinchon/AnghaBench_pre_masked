
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_mpc8xxx_cs {int get_tx; int get_rx; int tx_shift; int rx_shift; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct spi_device {int mode; TYPE_3__ dev; struct spi_mpc8xxx_cs* controller_state; int master; } ;
struct mpc8xxx_spi {int get_tx; int get_rx; int tx_shift; int rx_shift; } ;
struct fsl_spi_platform_data {int (* cs_control ) (struct spi_device*,int) ;} ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {struct fsl_spi_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_device*) ;
 struct mpc8xxx_spi* FUNC_1 (int ) ;
 int FUNC_2 (struct spi_device*,int) ;
 int FUNC_3 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3, int VAR_4)
{
 struct mpc8xxx_spi *VAR_5 = FUNC_1(VAR_3->master);
 struct fsl_spi_platform_data *VAR_6;
 bool VAR_7 = VAR_3->mode & VAR_2;
 struct spi_mpc8xxx_cs *VAR_8 = VAR_3->controller_state;

 VAR_6 = VAR_3->dev.parent->parent->platform_data;

 if (VAR_4 == VAR_1) {
  if (VAR_6->cs_control)
   VAR_6->cs_control(VAR_3, !VAR_7);
 }

 if (VAR_4 == VAR_0) {
  VAR_5->rx_shift = VAR_8->rx_shift;
  VAR_5->tx_shift = VAR_8->tx_shift;
  VAR_5->get_rx = VAR_8->get_rx;
  VAR_5->get_tx = VAR_8->get_tx;

  FUNC_0(VAR_3);

  if (VAR_6->cs_control)
   VAR_6->cs_control(VAR_3, VAR_7);
 }
}
