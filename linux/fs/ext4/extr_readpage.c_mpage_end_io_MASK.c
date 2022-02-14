
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_post_read_ctx {int cur_step; } ;
struct bio {struct bio_post_read_ctx* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio_post_read_ctx*) ;
 scalar_t__ FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_1)
{
 if (FUNC_2(VAR_1)) {
  struct bio_post_read_ctx *VAR_2 = VAR_1->bi_private;

  VAR_2->cur_step = VAR_0;
  FUNC_1(VAR_2);
  return;
 }
 FUNC_0(VAR_1);
}
