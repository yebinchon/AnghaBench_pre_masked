
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev; } ;
struct ufs_err_reg_hist {int pos; scalar_t__* reg; int * tstamp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ufs_hba *VAR_1,
      struct ufs_err_reg_hist *VAR_2,
      char *VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  int VAR_6 = (VAR_4 + VAR_2->pos) % VAR_0;

  if (VAR_2->reg[VAR_6] == 0)
   continue;
  FUNC_0(VAR_1->dev, "%s[%d] = 0x%x at %lld us\n", VAR_3, VAR_6,
   VAR_2->reg[VAR_6], FUNC_1(VAR_2->tstamp[VAR_6]));
  VAR_5 = 1;
 }

 if (!VAR_5)
  FUNC_0(VAR_1->dev, "No record of %s errors\n", VAR_3);
}
