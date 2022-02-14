
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io_ring_ctx {int * sqo_wq; } ;
struct TYPE_6__ {int ki_flags; } ;
struct TYPE_5__ {TYPE_1__* sqe; } ;
struct io_kiocb {int work; TYPE_3__ rw; TYPE_2__ submit; } ;
struct TYPE_4__ {int opcode; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct io_ring_ctx *VAR_1,
           struct io_kiocb *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->submit.sqe) {
  switch (VAR_2->submit.sqe->opcode) {
  case 129:
  case 128:
   VAR_3 = !(VAR_2->rw.ki_flags & VAR_0);
   break;
  }
 }

 FUNC_0(VAR_1->sqo_wq[VAR_3], &VAR_2->work);
}
