
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int partid; int partname; } ;
struct mtd_info {TYPE_1__ dbg; } ;
struct spi_nor {int dev; struct mtd_info mtd; } ;
struct flash_info {int id; int id_len; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct spi_nor *VAR_1,
     const struct flash_info *VAR_2)
{
 struct mtd_info *VAR_3 = &VAR_1->mtd;

 VAR_3->dbg.partname = VAR_2->name;
 VAR_3->dbg.partid = FUNC_0(VAR_1->dev, VAR_0, "spi-nor:%*phN",
      VAR_2->id_len, VAR_2->id);
}
