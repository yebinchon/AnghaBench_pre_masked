
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_ctx {int curr; struct scrub_bio** bios; } ;
struct scrub_bio {int bio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scrub_ctx*) ;

__attribute__((used)) static void FUNC_2(struct scrub_ctx *VAR_0)
{
 struct scrub_bio *VAR_1;

 if (VAR_0->curr == -1)
  return;

 VAR_1 = VAR_0->bios[VAR_0->curr];
 VAR_0->curr = -1;
 FUNC_1(VAR_0);
 FUNC_0(VAR_1->bio);
}
