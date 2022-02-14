
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct pch_spi_data {scalar_t__ io_remap_addr; } ;


 int FUNC_0 (scalar_t__) ;
 struct pch_spi_data* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static inline u32 FUNC_2(struct spi_master *VAR_0, int VAR_1)
{
 struct pch_spi_data *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2->io_remap_addr + VAR_1);
}
