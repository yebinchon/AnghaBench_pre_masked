
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_post_read_ctx {int cur_step; int enabled_steps; int bio; int work; } ;


 int FUNC_0 (int *,int ) ;


 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct bio_post_read_ctx *VAR_2)
{





 switch (++VAR_2->cur_step) {
 case 129:
  if (VAR_2->enabled_steps & (1 << 129)) {
   FUNC_0(&VAR_2->work, VAR_0);
   FUNC_2(&VAR_2->work);
   return;
  }
  VAR_2->cur_step++;

 case 128:
  if (VAR_2->enabled_steps & (1 << 128)) {
   FUNC_0(&VAR_2->work, VAR_1);
   FUNC_3(&VAR_2->work);
   return;
  }
  VAR_2->cur_step++;

 default:
  FUNC_1(VAR_2->bio);
 }
}
