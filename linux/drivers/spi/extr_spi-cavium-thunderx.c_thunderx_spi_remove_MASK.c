
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct pci_dev {int dummy; } ;
struct octeon_spi {scalar_t__ register_base; int clk; } ;


 scalar_t__ FUNC_0 (struct octeon_spi*) ;
 int FUNC_1 (int ) ;
 struct spi_master* FUNC_2 (struct pci_dev*) ;
 struct octeon_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_2(VAR_0);
 struct octeon_spi *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return;

 FUNC_1(VAR_2->clk);

 FUNC_4(0, VAR_2->register_base + FUNC_0(VAR_2));
}
