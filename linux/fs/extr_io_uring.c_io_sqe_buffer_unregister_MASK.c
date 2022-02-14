
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_ring_ctx {int nr_user_bufs; struct io_mapped_ubuf* user_bufs; int user; scalar_t__ account_mem; } ;
struct io_mapped_ubuf {int nr_bvecs; TYPE_1__* bvec; } ;
struct TYPE_2__ {int bv_page; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct io_mapped_ubuf*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct io_ring_ctx *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1->user_bufs)
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_user_bufs; VAR_2++) {
  struct io_mapped_ubuf *VAR_4 = &VAR_1->user_bufs[VAR_2];

  for (VAR_3 = 0; VAR_3 < VAR_4->nr_bvecs; VAR_3++)
   FUNC_3(VAR_4->bvec[VAR_3].bv_page);

  if (VAR_1->account_mem)
   FUNC_0(VAR_1->user, VAR_4->nr_bvecs);
  FUNC_2(VAR_4->bvec);
  VAR_4->nr_bvecs = 0;
 }

 FUNC_1(VAR_1->user_bufs);
 VAR_1->user_bufs = ((void*)0);
 VAR_1->nr_user_bufs = 0;
 return 0;
}
