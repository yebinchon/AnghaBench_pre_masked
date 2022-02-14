
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct map_info* priv; } ;
struct map_info {struct lpddr_private* fldrv_priv; } ;
struct lpddr_private {TYPE_1__* qinfo; } ;
struct erase_info {unsigned long addr; unsigned long len; } ;
struct TYPE_2__ {int UniformBlockSizeShift; } ;


 int FUNC_0 (struct mtd_info*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, struct erase_info *VAR_1)
{
 unsigned long VAR_2, VAR_3;
 int VAR_4;
 struct map_info *VAR_5 = VAR_0->priv;
 struct lpddr_private *VAR_6 = VAR_5->fldrv_priv;
 int VAR_7 = 1 << VAR_6->qinfo->UniformBlockSizeShift;

 VAR_2 = VAR_1->addr;
 VAR_3 = VAR_1->len;

 while (VAR_3 > 0) {
  VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4)
   return VAR_4;
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }

 return 0;
}
