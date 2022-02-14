
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u64 ;
struct io_uring_cqe {int flags; int res; int user_data; } ;
struct io_ring_ctx {int cached_cq_overflow; TYPE_1__* rings; } ;
struct TYPE_2__ {int cq_overflow; } ;


 int FUNC_0 (int ,long) ;
 long FUNC_1 (int *) ;
 struct io_uring_cqe* FUNC_2 (struct io_ring_ctx*) ;

__attribute__((used)) static void FUNC_3(struct io_ring_ctx *VAR_0, u64 VAR_1,
     long VAR_2)
{
 struct io_uring_cqe *VAR_3;






 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_3->user_data, VAR_1);
  FUNC_0(VAR_3->res, VAR_2);
  FUNC_0(VAR_3->flags, 0);
 } else {
  FUNC_0(VAR_0->rings->cq_overflow,
    FUNC_1(&VAR_0->cached_cq_overflow));
 }
}
