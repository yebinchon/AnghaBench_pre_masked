
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev; int dev_ref_clk_freq; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct clk*) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(struct ufs_hba *VAR_1, struct clk *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 VAR_1->dev_ref_clk_freq =
  FUNC_2(VAR_3);

 if (VAR_1->dev_ref_clk_freq == VAR_0)
  FUNC_1(VAR_1->dev,
  "invalid ref_clk setting = %ld\n", VAR_3);
}
