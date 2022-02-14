
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_ecc_ctrl {int size; int strength; } ;
struct TYPE_3__ {int step_size; int strength; } ;
struct TYPE_4__ {TYPE_1__ eccreq; } ;
struct nand_chip {TYPE_2__ base; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int writesize; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static bool FUNC_1(struct nand_chip *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_0(VAR_0);
 struct nand_ecc_ctrl *VAR_2 = &VAR_0->ecc;
 int VAR_3, VAR_4;

 if (VAR_2->size == 0 || VAR_0->base.eccreq.step_size == 0)

  return 1;





 VAR_3 = (VAR_1->writesize * VAR_2->strength) / VAR_2->size;
 VAR_4 = (VAR_1->writesize * VAR_0->base.eccreq.strength) /
    VAR_0->base.eccreq.step_size;

 return VAR_3 >= VAR_4 && VAR_2->strength >= VAR_0->base.eccreq.strength;
}
