
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_pairing_info {int pair; int group; } ;
struct mtd_info {TYPE_1__* pairing; } ;
struct TYPE_2__ {int (* get_wunit ) (struct mtd_info*,struct mtd_pairing_info const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*,struct mtd_pairing_info const*) ;

int FUNC_3(struct mtd_info *VAR_1,
         const struct mtd_pairing_info *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_1(VAR_1) / VAR_3;

 if (!VAR_2 || VAR_2->pair < 0 || VAR_2->pair >= VAR_4 ||
     VAR_2->group < 0 || VAR_2->group >= VAR_3)
  return -VAR_0;

 if (VAR_1->pairing && VAR_1->pairing->get_wunit)
  return VAR_1->pairing->get_wunit(VAR_1, VAR_2);

 return VAR_2->pair;
}
