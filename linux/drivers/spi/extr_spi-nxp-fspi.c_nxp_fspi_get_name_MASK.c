
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_mem {TYPE_1__* spi; } ;
struct nxp_fspi {TYPE_2__* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int chip_select; struct device dev; int master; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 char const* FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (struct device*,int ,char*,char const*,int ) ;
 int FUNC_4 (int ) ;
 struct nxp_fspi* FUNC_5 (int ) ;

__attribute__((used)) static const char *FUNC_6(struct spi_mem *VAR_2)
{
 struct nxp_fspi *VAR_3 = FUNC_5(VAR_2->spi->master);
 struct device *VAR_4 = &VAR_2->spi->dev;
 const char *VAR_5;


 if (FUNC_4(VAR_3->dev->of_node) == 1)
  return FUNC_2(VAR_3->dev);

 VAR_5 = FUNC_3(VAR_4, VAR_1,
         "%s-%d", FUNC_2(VAR_3->dev),
         VAR_2->spi->chip_select);

 if (!VAR_5) {
  FUNC_1(VAR_4, "failed to get memory for custom flash name\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
