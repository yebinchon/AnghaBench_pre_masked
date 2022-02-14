
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spinand_device {int * cfg_cache; TYPE_3__* spimem; } ;
struct TYPE_4__ {unsigned int ntargets; } ;
struct nand_device {TYPE_1__ memorg; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* spi; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct device*,unsigned int,int,int ) ;
 int FUNC_1 (struct spinand_device*,int ,int *) ;
 int FUNC_2 (struct spinand_device*,unsigned int) ;
 struct nand_device* FUNC_3 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_4(struct spinand_device *VAR_3)
{
 struct nand_device *VAR_4 = FUNC_3(VAR_3);
 struct device *VAR_5 = &VAR_3->spimem->spi->dev;
 unsigned int VAR_6;
 int VAR_7;

 VAR_3->cfg_cache = FUNC_0(VAR_5,
       VAR_4->memorg.ntargets,
       sizeof(*VAR_3->cfg_cache),
       VAR_1);
 if (!VAR_3->cfg_cache)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->memorg.ntargets; VAR_6++) {
  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (VAR_7)
   return VAR_7;





  VAR_7 = FUNC_1(VAR_3, VAR_2,
       &VAR_3->cfg_cache[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
