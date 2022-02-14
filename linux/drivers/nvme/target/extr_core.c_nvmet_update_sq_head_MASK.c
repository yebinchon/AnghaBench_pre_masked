
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvmet_req {TYPE_2__* sq; TYPE_1__* cqe; } ;
struct TYPE_4__ {int size; int sqhd; } ;
struct TYPE_3__ {int sq_head; } ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct nvmet_req *VAR_0)
{
 if (VAR_0->sq->size) {
  u32 VAR_1, VAR_2;

  do {
   VAR_1 = VAR_0->sq->sqhd;
   VAR_2 = (VAR_1 + 1) % VAR_0->sq->size;
  } while (FUNC_0(&VAR_0->sq->sqhd, VAR_1, VAR_2) !=
     VAR_1);
 }
 VAR_0->cqe->sq_head = FUNC_1(VAR_0->sq->sqhd & 0x0000FFFF);
}
