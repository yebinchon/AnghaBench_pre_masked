
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_txqsq {scalar_t__ cc; scalar_t__ pc; int sqn; TYPE_1__* channel; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_txqsq *VAR_2)
{
 unsigned long VAR_3 = VAR_1 + FUNC_0(2000);

 while (FUNC_3(VAR_1, VAR_3)) {
  if (VAR_2->cc == VAR_2->pc)
   return 0;

  FUNC_1(20);
 }

 FUNC_2(VAR_2->channel->netdev,
     "Wait for SQ 0x%x flush timeout (sq cc = 0x%x, sq pc = 0x%x)\n",
     VAR_2->sqn, VAR_2->cc, VAR_2->pc);

 return -VAR_0;
}
