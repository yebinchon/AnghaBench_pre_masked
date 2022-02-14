
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int clk_scaling_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;
 scalar_t__ FUNC_3 (struct ufs_hba*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ufs_hba *VAR_2)
{

 int VAR_3 = 0;




 FUNC_1(VAR_2);
 FUNC_0(&VAR_2->clk_scaling_lock);
 if (FUNC_3(VAR_2, (1000 * 1000))) {
  VAR_3 = -VAR_1;
  FUNC_4(&VAR_2->clk_scaling_lock);
  FUNC_2(VAR_2);
 }

 return VAR_3;
}
