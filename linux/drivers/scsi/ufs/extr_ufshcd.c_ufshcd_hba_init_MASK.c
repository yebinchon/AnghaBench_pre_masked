
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int is_powered; } ;


 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*,int) ;
 int FUNC_4 (struct ufs_hba*,int) ;
 int FUNC_5 (struct ufs_hba*,int) ;
 int FUNC_6 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_7(struct ufs_hba *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_4(VAR_0, 1);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto out_disable_hba_vreg;

 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1)
  goto out_disable_hba_vreg;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto out_disable_clks;

 VAR_1 = FUNC_5(VAR_0, 1);
 if (VAR_1)
  goto out_disable_clks;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1)
  goto out_disable_vreg;

 VAR_0->is_powered = 1;
 goto out;

out_disable_vreg:
 FUNC_5(VAR_0, 0);
out_disable_clks:
 FUNC_3(VAR_0, 0);
out_disable_hba_vreg:
 FUNC_4(VAR_0, 0);
out:
 return VAR_1;
}
