
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc8xxx_spi {int flags; TYPE_1__* pram; int subblock; } ;
struct TYPE_2__ {int tbase; int tbptr; int tstate; int rbase; int rbptr; int rstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

void FUNC_5(struct mpc8xxx_spi *VAR_6)
{
 if (VAR_6->flags & VAR_5) {
  FUNC_4(VAR_3, VAR_6->subblock,
        VAR_2, 0);
 } else {
  if (VAR_6->flags & VAR_4) {
   FUNC_3(&VAR_6->pram->rstate, 0);
   FUNC_2(&VAR_6->pram->rbptr,
     FUNC_1(&VAR_6->pram->rbase));
   FUNC_3(&VAR_6->pram->tstate, 0);
   FUNC_2(&VAR_6->pram->tbptr,
     FUNC_1(&VAR_6->pram->tbase));
  } else {
   FUNC_0(VAR_1, VAR_0);
  }
 }
}
