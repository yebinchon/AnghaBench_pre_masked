
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable_attr; } ;
struct ufs_hba {TYPE_1__ clk_scaling; int dev; int intr_mask; int host; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ufs_hba*,int ) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*) ;
 int FUNC_7 (struct ufs_hba*) ;
 int FUNC_8 (struct ufs_hba*,int) ;
 scalar_t__ FUNC_9 (struct ufs_hba*) ;

void FUNC_10(struct ufs_hba *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_3(VAR_0->dev);
 FUNC_1(VAR_0->host);

 FUNC_4(VAR_0, VAR_0->intr_mask);
 FUNC_8(VAR_0, 1);

 FUNC_6(VAR_0);
 FUNC_5(VAR_0);
 if (FUNC_9(VAR_0))
  FUNC_0(VAR_0->dev, &VAR_0->clk_scaling.enable_attr);
 FUNC_7(VAR_0);
}
