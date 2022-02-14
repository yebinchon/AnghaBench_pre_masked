
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct spi_device {unsigned long max_speed_hz; int chip_select; } ;
struct nxp_fspi {int selected; int clk; int dev; scalar_t__ iobase; int memmap_phy_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct nxp_fspi*,int ,scalar_t__) ;
 int FUNC_4 (struct nxp_fspi*) ;
 int FUNC_5 (struct nxp_fspi*) ;

__attribute__((used)) static void FUNC_6(struct nxp_fspi *VAR_4, struct spi_device *VAR_5)
{
 unsigned long VAR_6 = VAR_5->max_speed_hz;
 int VAR_7;
 uint64_t VAR_8;





 if (VAR_4->selected == VAR_5->chip_select)
  return;


 FUNC_3(VAR_4, 0, VAR_4->iobase + VAR_0);
 FUNC_3(VAR_4, 0, VAR_4->iobase + VAR_1);
 FUNC_3(VAR_4, 0, VAR_4->iobase + VAR_2);
 FUNC_3(VAR_4, 0, VAR_4->iobase + VAR_3);


 VAR_8 = FUNC_0(VAR_4->memmap_phy_size);

 FUNC_3(VAR_4, VAR_8, VAR_4->iobase + VAR_0 +
      4 * VAR_5->chip_select);

 FUNC_2(VAR_4->dev, "Slave device [CS:%x] selected\n", VAR_5->chip_select);

 FUNC_4(VAR_4);

 VAR_7 = FUNC_1(VAR_4->clk, VAR_6);
 if (VAR_7)
  return;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  return;

 VAR_4->selected = VAR_5->chip_select;
}
