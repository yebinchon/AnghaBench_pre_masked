
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_pairing_info {int pair; scalar_t__ group; } ;
struct mtd_info {TYPE_1__* pairing; } ;
struct TYPE_2__ {int (* get_info ) (struct mtd_info*,int,struct mtd_pairing_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*,int,struct mtd_pairing_info*) ;

int FUNC_3(struct mtd_info *VAR_1, int VAR_2,
         struct mtd_pairing_info *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1) / FUNC_0(VAR_1);

 if (VAR_2 < 0 || VAR_2 >= VAR_4)
  return -VAR_0;

 if (VAR_1->pairing && VAR_1->pairing->get_info)
  return VAR_1->pairing->get_info(VAR_1, VAR_2, VAR_3);

 VAR_3->group = 0;
 VAR_3->pair = VAR_2;

 return 0;
}
