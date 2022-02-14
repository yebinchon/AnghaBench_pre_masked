
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_post_read_ctx {int cur_step; } ;
struct bio {struct bio_post_read_ctx* bi_private; int bi_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio_post_read_ctx*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_3)
{
 if (FUNC_6(FUNC_0(FUNC_2(VAR_3)),
      VAR_1)) {
  FUNC_5(VAR_1);
  VAR_3->bi_status = VAR_0;
 }

 if (FUNC_4(VAR_3)) {
  struct bio_post_read_ctx *VAR_4 = VAR_3->bi_private;

  VAR_4->cur_step = VAR_2;
  FUNC_3(VAR_4);
  return;
 }

 FUNC_1(VAR_3);
}
