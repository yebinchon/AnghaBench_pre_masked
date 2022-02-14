
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; } ;
struct io_rings {TYPE_1__ sq; } ;
struct io_ring_ctx {scalar_t__ cached_sq_head; struct io_rings* rings; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct io_ring_ctx *VAR_0)
{
 struct io_rings *VAR_1 = VAR_0->rings;

 if (VAR_0->cached_sq_head != FUNC_0(VAR_1->sq.head)) {





  FUNC_1(&VAR_1->sq.head, VAR_0->cached_sq_head);
 }
}
