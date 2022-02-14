
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int readonly; struct mtd_blktrans_ops* tr; int devnum; struct mtd_info* mtd; } ;
struct mtdblk_dev {TYPE_1__ mbd; } ;
struct mtd_info {int size; int flags; int index; } ;
struct mtd_blktrans_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mtdblk_dev*) ;
 struct mtdblk_dev* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_blktrans_ops *VAR_2, struct mtd_info *VAR_3)
{
 struct mtdblk_dev *VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return;

 VAR_4->mbd.mtd = VAR_3;
 VAR_4->mbd.devnum = VAR_3->index;

 VAR_4->mbd.size = VAR_3->size >> 9;
 VAR_4->mbd.tr = VAR_2;

 if (!(VAR_3->flags & VAR_1))
  VAR_4->mbd.readonly = 1;

 if (FUNC_0(&VAR_4->mbd))
  FUNC_1(VAR_4);
}
