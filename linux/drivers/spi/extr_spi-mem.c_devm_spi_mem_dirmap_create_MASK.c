
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_mem_dirmap_info {int dummy; } ;
struct spi_mem_dirmap_desc {int dummy; } ;
struct spi_mem {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct spi_mem_dirmap_desc* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct spi_mem_dirmap_desc*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct spi_mem_dirmap_desc**) ;
 struct spi_mem_dirmap_desc** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct spi_mem_dirmap_desc**) ;
 struct spi_mem_dirmap_desc* FUNC_5 (struct spi_mem*,struct spi_mem_dirmap_info const*) ;

struct spi_mem_dirmap_desc *
FUNC_6(struct device *VAR_3, struct spi_mem *VAR_4,
      const struct spi_mem_dirmap_info *VAR_5)
{
 struct spi_mem_dirmap_desc **VAR_6, *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6),
      VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6);
 } else {
  *VAR_6 = VAR_7;
  FUNC_2(VAR_3, VAR_6);
 }

 return VAR_7;
}
