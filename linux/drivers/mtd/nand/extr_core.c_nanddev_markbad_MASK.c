
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_pos {int dummy; } ;
struct nand_device {TYPE_2__* ops; } ;
struct TYPE_3__ {int badblocks; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;
struct TYPE_4__ {int (* markbad ) (struct nand_device*,struct nand_pos const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nand_device*) ;
 unsigned int FUNC_1 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_2 (struct nand_device*,unsigned int,int ) ;
 int FUNC_3 (struct nand_device*) ;
 scalar_t__ FUNC_4 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_5 (struct nand_device*,struct nand_pos const*) ;
 struct mtd_info* FUNC_6 (struct nand_device*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct nand_device*,struct nand_pos const*) ;

int FUNC_9(struct nand_device *VAR_1, const struct nand_pos *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_6(VAR_1);
 unsigned int VAR_4;
 int VAR_5 = 0;

 if (FUNC_4(VAR_1, VAR_2))
  return 0;

 VAR_5 = VAR_1->ops->markbad(VAR_1, VAR_2);
 if (VAR_5)
  FUNC_7("failed to write BBM to block @%llx (err = %d)\n",
   FUNC_5(VAR_1, VAR_2), VAR_5);

 if (!FUNC_0(VAR_1))
  goto out;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(VAR_1);

out:
 if (!VAR_5)
  VAR_3->ecc_stats.badblocks++;

 return VAR_5;
}
