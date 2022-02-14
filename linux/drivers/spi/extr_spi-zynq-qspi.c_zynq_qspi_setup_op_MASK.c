
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_qspi {int pclk; int refclk; } ;
struct spi_device {struct spi_controller* master; } ;
struct spi_controller {scalar_t__ busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct zynq_qspi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct zynq_qspi*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_3)
{
 struct spi_controller *VAR_4 = VAR_3->master;
 struct zynq_qspi *VAR_5 = FUNC_1(VAR_4);

 if (VAR_4->busy)
  return -VAR_0;

 FUNC_0(VAR_5->refclk);
 FUNC_0(VAR_5->pclk);
 FUNC_2(VAR_5, VAR_2,
   VAR_1);

 return 0;
}
