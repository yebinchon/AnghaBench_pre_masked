
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_part {TYPE_2__* parent; scalar_t__ offset; } ;
struct TYPE_3__ {int badblocks; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;
typedef int loff_t ;
struct TYPE_4__ {int (* _block_markbad ) (TYPE_2__*,int ) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct mtd_part *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_1 += VAR_2->offset;
 VAR_3 = VAR_2->parent->_block_markbad(VAR_2->parent, VAR_1);
 if (!VAR_3)
  VAR_0->ecc_stats.badblocks++;
 return VAR_3;
}
