
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_qspi {int dummy; } ;
struct spi_device {int chip_select; struct spi_controller* master; } ;
struct spi_controller {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zynq_qspi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct zynq_qspi*,int ) ;
 int FUNC_3 (struct zynq_qspi*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3, bool VAR_4)
{
 struct spi_controller *VAR_5 = VAR_3->master;
 struct zynq_qspi *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_0);
 if (VAR_4) {

  VAR_7 &= ~VAR_1;
  VAR_7 |= (((~(FUNC_0(VAR_3->chip_select))) <<
    VAR_2) &
    VAR_1);
 } else {
  VAR_7 |= VAR_1;
 }

 FUNC_3(VAR_6, VAR_0, VAR_7);
}
