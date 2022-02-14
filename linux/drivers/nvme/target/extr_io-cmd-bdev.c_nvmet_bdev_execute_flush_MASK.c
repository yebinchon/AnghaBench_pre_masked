
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bio {int bi_opf; int bi_end_io; struct nvmet_req* bi_private; } ;
struct TYPE_3__ {struct bio inline_bio; } ;
struct nvmet_req {TYPE_2__* ns; int inline_bvec; TYPE_1__ b; } ;
struct TYPE_4__ {int bdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bio*,int ,int ) ;
 int FUNC_2 (struct bio*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct bio*) ;

__attribute__((used)) static void FUNC_4(struct nvmet_req *VAR_3)
{
 struct bio *VAR_4 = &VAR_3->b.inline_bio;

 FUNC_1(VAR_4, VAR_3->inline_bvec, FUNC_0(VAR_3->inline_bvec));
 FUNC_2(VAR_4, VAR_3->ns->bdev);
 VAR_4->bi_private = VAR_3;
 VAR_4->bi_end_io = VAR_2;
 VAR_4->bi_opf = VAR_0 | VAR_1;

 FUNC_3(VAR_4);
}
