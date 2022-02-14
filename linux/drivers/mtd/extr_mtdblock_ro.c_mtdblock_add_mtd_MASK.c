
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int size; int index; } ;
struct mtd_blktrans_ops {int dummy; } ;
struct mtd_blktrans_dev {int size; int readonly; struct mtd_blktrans_ops* tr; int devnum; struct mtd_info* mtd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mtd_blktrans_dev*) ;
 int FUNC_1 (struct mtd_blktrans_dev*) ;
 struct mtd_blktrans_dev* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_blktrans_ops *VAR_1, struct mtd_info *VAR_2)
{
 struct mtd_blktrans_dev *VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return;

 VAR_3->mtd = VAR_2;
 VAR_3->devnum = VAR_2->index;

 VAR_3->size = VAR_2->size >> 9;
 VAR_3->tr = VAR_1;
 VAR_3->readonly = 1;

 if (FUNC_0(VAR_3))
  FUNC_1(VAR_3);
}
