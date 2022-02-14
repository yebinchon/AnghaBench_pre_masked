
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_write_hint; int bi_opf; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static struct bio *
FUNC_6(
 struct bio *VAR_2)
{
 struct bio *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(VAR_3, VAR_2);
 VAR_3->bi_iter.bi_sector = FUNC_3(VAR_2);
 VAR_3->bi_opf = VAR_2->bi_opf;
 VAR_3->bi_write_hint = VAR_2->bi_write_hint;

 FUNC_1(VAR_2, VAR_3);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 return VAR_3;
}
