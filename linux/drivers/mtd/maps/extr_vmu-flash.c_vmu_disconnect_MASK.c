
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memcard {int partitions; struct memcard* mtd; struct memcard* parts; struct memcard* name; struct mdev_part* priv; } ;
struct mdev_part {int * mdev; } ;
struct maple_device {int * callback; } ;


 int FUNC_0 (struct memcard*) ;
 struct memcard* FUNC_1 (struct maple_device*) ;
 int FUNC_2 (struct memcard*) ;

__attribute__((used)) static void FUNC_3(struct maple_device *VAR_0)
{
 struct memcard *VAR_1;
 struct mdev_part *VAR_2;
 int VAR_3;

 VAR_0->callback = ((void*)0);
 VAR_1 = FUNC_1(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->partitions; VAR_3++) {
  VAR_2 = ((VAR_1->mtd)[VAR_3]).priv;
  VAR_2->mdev = ((void*)0);
  FUNC_2(&((VAR_1->mtd)[VAR_3]));
  FUNC_0(((VAR_1->parts)[VAR_3]).name);
 }
 FUNC_0(VAR_1->parts);
 FUNC_0(VAR_1->mtd);
 FUNC_0(VAR_1);
}
