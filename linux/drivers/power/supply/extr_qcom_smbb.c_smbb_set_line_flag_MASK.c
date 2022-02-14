
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger {int status; int dev; int statlock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct smbb_charger *VAR_1, int VAR_2, int VAR_3)
{
 bool VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->dev, "failed to read irq line\n");
  return;
 }

 FUNC_3(&VAR_1->statlock);
 if (VAR_4)
  VAR_1->status |= VAR_3;
 else
  VAR_1->status &= ~VAR_3;
 FUNC_4(&VAR_1->statlock);

 FUNC_0(VAR_1->dev, "status = %03lx\n", VAR_1->status);
}
