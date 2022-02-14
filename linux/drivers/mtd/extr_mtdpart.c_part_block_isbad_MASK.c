
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {TYPE_1__* parent; scalar_t__ offset; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* _block_isbad ) (TYPE_1__*,int ) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct mtd_part *VAR_2 = FUNC_0(VAR_0);
 VAR_1 += VAR_2->offset;
 return VAR_2->parent->_block_isbad(VAR_2->parent, VAR_1);
}
