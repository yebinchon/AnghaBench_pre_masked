
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int bi_status; struct nvmet_req* bi_private; } ;
struct TYPE_2__ {struct bio inline_bio; } ;
struct nvmet_req {TYPE_1__ b; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct nvmet_req*,int ) ;
 int FUNC_2 (struct nvmet_req*,int ) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct nvmet_req *VAR_1 = VAR_0->bi_private;

 FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_0->bi_status));
 if (VAR_0 != &VAR_1->b.inline_bio)
  FUNC_0(VAR_0);
}
