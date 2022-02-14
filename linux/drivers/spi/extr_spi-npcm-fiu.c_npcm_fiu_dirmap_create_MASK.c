
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {scalar_t__ dir; } ;
struct TYPE_16__ {TYPE_5__ data; } ;
struct TYPE_15__ {TYPE_7__ op_tmpl; scalar_t__ length; } ;
struct spi_mem_dirmap_desc {int nodirmap; TYPE_6__ info; TYPE_4__* mem; } ;
struct regmap {int dummy; } ;
struct npcm_fiu_spi {int spix_mode; TYPE_8__* dev; TYPE_2__* info; TYPE_1__* res_mem; struct npcm_fiu_chip* chip; } ;
struct npcm_fiu_chip {scalar_t__ flash_region_mapped_ptr; } ;
struct TYPE_17__ {int of_node; } ;
struct TYPE_13__ {TYPE_3__* spi; } ;
struct TYPE_12__ {size_t chip_select; int master; } ;
struct TYPE_11__ {int max_map_size; } ;
struct TYPE_10__ {scalar_t__ start; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_8__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,scalar_t__,int ) ;
 int FUNC_3 (struct npcm_fiu_spi*,TYPE_7__*) ;
 int FUNC_4 (struct npcm_fiu_spi*) ;
 int FUNC_5 (struct npcm_fiu_spi*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (struct regmap*,int ,int ,int ) ;
 struct npcm_fiu_spi* FUNC_8 (int ) ;
 struct regmap* FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct spi_mem_dirmap_desc *VAR_4)
{
 struct npcm_fiu_spi *VAR_5 =
  FUNC_8(VAR_4->mem->spi->master);
 struct npcm_fiu_chip *VAR_6 = &VAR_5->chip[VAR_4->mem->spi->chip_select];
 struct regmap *VAR_7;

 if (!VAR_5->res_mem) {
  FUNC_1(VAR_5->dev, "Reserved memory not defined, direct read disabled\n");
  VAR_4->nodirmap = 1;
  return 0;
 }

 if (!VAR_5->spix_mode &&
     VAR_4->info.op_tmpl.data.dir == VAR_3) {
  VAR_4->nodirmap = 1;
  return 0;
 }

 if (!VAR_6->flash_region_mapped_ptr) {
  VAR_6->flash_region_mapped_ptr =
   FUNC_2(VAR_5->dev, (VAR_5->res_mem->start +
       (VAR_5->info->max_map_size *
          VAR_4->mem->spi->chip_select)),
          (u32)VAR_4->info.length);
  if (!VAR_6->flash_region_mapped_ptr) {
   FUNC_1(VAR_5->dev, "Error mapping memory region, direct read disabled\n");
   VAR_4->nodirmap = 1;
   return 0;
  }
 }

 if (FUNC_6(VAR_5->dev->of_node, "nuvoton,npcm750-fiu")) {
  VAR_7 =
   FUNC_9("nuvoton,npcm750-gcr");
  if (FUNC_0(VAR_7)) {
   FUNC_1(VAR_5->dev, "Didn't find nuvoton,npcm750-gcr, direct read disabled\n");
   VAR_4->nodirmap = 1;
   return 0;
  }
  FUNC_7(VAR_7, VAR_1,
       VAR_0,
       VAR_0);
 }

 if (VAR_4->info.op_tmpl.data.dir == VAR_2) {
  if (!VAR_5->spix_mode)
   FUNC_3(VAR_5, &VAR_4->info.op_tmpl);
  else
   FUNC_4(VAR_5);

 } else {
  FUNC_5(VAR_5);
 }

 return 0;
}
