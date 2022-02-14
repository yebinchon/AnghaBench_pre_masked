
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_ctx {struct scrub_bio* wr_curr_bio; } ;
struct scrub_bio {TYPE_1__* bio; } ;
struct TYPE_2__ {int bi_disk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct scrub_ctx*) ;

__attribute__((used)) static void FUNC_3(struct scrub_ctx *VAR_0)
{
 struct scrub_bio *VAR_1;

 if (!VAR_0->wr_curr_bio)
  return;

 VAR_1 = VAR_0->wr_curr_bio;
 VAR_0->wr_curr_bio = ((void*)0);
 FUNC_0(!VAR_1->bio->bi_disk);
 FUNC_2(VAR_0);




 FUNC_1(VAR_1->bio);
}
