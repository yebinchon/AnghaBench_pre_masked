
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_oob_region {int dummy; } ;
struct mtd_info {TYPE_1__* ooblayout; } ;
struct TYPE_2__ {int (* free ) (struct mtd_info*,int,struct mtd_oob_region*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_oob_region*,int ,int) ;
 int FUNC_1 (struct mtd_info*,int,struct mtd_oob_region*) ;

int FUNC_2(struct mtd_info *VAR_2, int VAR_3,
         struct mtd_oob_region *VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 if (!VAR_2 || VAR_3 < 0)
  return -VAR_0;

 if (!VAR_2->ooblayout || !VAR_2->ooblayout->free)
  return -VAR_1;

 return VAR_2->ooblayout->free(VAR_2, VAR_3, VAR_4);
}
