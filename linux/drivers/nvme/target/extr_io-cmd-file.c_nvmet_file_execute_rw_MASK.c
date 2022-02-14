
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mpool_alloc; scalar_t__ bvec; } ;
struct nvmet_req {scalar_t__ sg_cnt; TYPE_2__ f; TYPE_1__* ns; scalar_t__ inline_bvec; } ;
struct bio_vec {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ buffered_io; int bvec_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nvmet_req*,int ) ;
 int FUNC_4 (struct nvmet_req*) ;
 int FUNC_5 (struct nvmet_req*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct nvmet_req *VAR_3)
{
 ssize_t VAR_4 = VAR_3->sg_cnt;

 if (!VAR_3->sg_cnt || !VAR_4) {
  FUNC_5(VAR_3, 0);
  return;
 }

 if (VAR_4 > VAR_2)
  VAR_3->f.bvec = FUNC_0(VAR_4, sizeof(struct bio_vec),
    VAR_0);
 else
  VAR_3->f.bvec = VAR_3->inline_bvec;

 if (FUNC_6(!VAR_3->f.bvec)) {

  VAR_3->f.bvec = FUNC_2(VAR_3->ns->bvec_pool, VAR_0);
  VAR_3->f.mpool_alloc = 1;
 } else
  VAR_3->f.mpool_alloc = 0;

 if (VAR_3->ns->buffered_io) {
  if (FUNC_1(!VAR_3->f.mpool_alloc) &&
    FUNC_3(VAR_3, VAR_1))
   return;
  FUNC_4(VAR_3);
 } else
  FUNC_3(VAR_3, 0);
}
