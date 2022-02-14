
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_ring_ctx {int user; int cq_entries; int sq_entries; scalar_t__ account_mem; int refs; int sq_sqes; int rings; TYPE_1__* ring_sock; scalar_t__ sqo_mm; } ;
struct TYPE_2__ {int * file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct io_ring_ctx*) ;
 int FUNC_2 (struct io_ring_ctx*) ;
 int FUNC_3 (struct io_ring_ctx*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct io_ring_ctx*) ;
 int FUNC_6 (struct io_ring_ctx*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct io_ring_ctx*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(struct io_ring_ctx *VAR_0)
{
 FUNC_2(VAR_0);
 if (VAR_0->sqo_mm)
  FUNC_9(VAR_0->sqo_mm);

 FUNC_3(VAR_0);
 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0->rings);
 FUNC_4(VAR_0->sq_sqes);

 FUNC_10(&VAR_0->refs);
 if (VAR_0->account_mem)
  FUNC_7(VAR_0->user,
    FUNC_11(VAR_0->sq_entries, VAR_0->cq_entries));
 FUNC_0(VAR_0->user);
 FUNC_8(VAR_0);
}
