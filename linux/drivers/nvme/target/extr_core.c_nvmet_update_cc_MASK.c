
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_ctrl {int lock; int csts; int cc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nvmet_ctrl*) ;
 int FUNC_5 (struct nvmet_ctrl*) ;

void FUNC_6(struct nvmet_ctrl *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 FUNC_0(&VAR_1->lock);
 VAR_3 = VAR_1->cc;
 VAR_1->cc = VAR_2;

 if (FUNC_2(VAR_2) && !FUNC_2(VAR_3))
  FUNC_5(VAR_1);
 if (!FUNC_2(VAR_2) && FUNC_2(VAR_3))
  FUNC_4(VAR_1);
 if (FUNC_3(VAR_2) && !FUNC_3(VAR_3)) {
  FUNC_4(VAR_1);
  VAR_1->csts |= VAR_0;
 }
 if (!FUNC_3(VAR_2) && FUNC_3(VAR_3))
  VAR_1->csts &= ~VAR_0;
 FUNC_1(&VAR_1->lock);
}
