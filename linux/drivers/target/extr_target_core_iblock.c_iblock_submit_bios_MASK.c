
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_plug {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (struct bio_list*) ;
 int FUNC_1 (struct blk_plug*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct bio*) ;

__attribute__((used)) static void FUNC_4(struct bio_list *VAR_0)
{
 struct blk_plug VAR_1;
 struct bio *VAR_2;

 FUNC_2(&VAR_1);
 while ((VAR_2 = FUNC_0(VAR_0)))
  FUNC_3(VAR_2);
 FUNC_1(&VAR_1);
}
