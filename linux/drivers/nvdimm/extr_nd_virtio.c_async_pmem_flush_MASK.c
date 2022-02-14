
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_region {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; int bi_opf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 int FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct nd_region*) ;

int FUNC_5(struct nd_region *VAR_4, struct bio *VAR_5)
{




 if (VAR_5 && VAR_5->bi_iter.bi_sector != -1) {
  struct bio *VAR_6 = FUNC_0(VAR_2, 0);

  if (!VAR_6)
   return -VAR_1;
  FUNC_2(VAR_6, VAR_5);
  VAR_6->bi_opf = VAR_3;
  VAR_6->bi_iter.bi_sector = -1;
  FUNC_1(VAR_6, VAR_5);
  FUNC_3(VAR_6);
  return 0;
 }
 if (FUNC_4(VAR_4))
  return -VAR_0;

 return 0;
}
