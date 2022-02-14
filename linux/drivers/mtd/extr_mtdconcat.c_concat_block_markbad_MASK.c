
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int badblocks; } ;
struct mtd_info {scalar_t__ size; TYPE_1__ ecc_stats; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2)
{
 struct mtd_concat *VAR_3 = FUNC_0(VAR_1);
 int VAR_4, VAR_5 = -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_subdev; VAR_4++) {
  struct mtd_info *VAR_6 = VAR_3->subdev[VAR_4];

  if (VAR_2 >= VAR_6->size) {
   VAR_2 -= VAR_6->size;
   continue;
  }

  VAR_5 = FUNC_1(VAR_6, VAR_2);
  if (!VAR_5)
   VAR_1->ecc_stats.badblocks++;
  break;
 }

 return VAR_5;
}
