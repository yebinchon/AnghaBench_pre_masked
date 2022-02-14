
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_slink_data {int bytes_per_word; } ;
struct spi_transfer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct tegra_slink_data *VAR_4,
      struct spi_transfer *VAR_5)
{
 switch (VAR_4->bytes_per_word) {
 case 0:
  return VAR_2;
 case 1:
  return VAR_3;
 case 2:
  return VAR_0;
 case 4:
  return VAR_1;
 default:
  return 0;
 }
}
