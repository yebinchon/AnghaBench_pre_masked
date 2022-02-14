
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ufs_hba {int ee_ctrl_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ufs_hba*,int ,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 if (VAR_3->ee_ctrl_mask & VAR_4)
  goto out;

 VAR_6 = VAR_3->ee_ctrl_mask | VAR_4;
 VAR_6 &= VAR_0;
 VAR_5 = FUNC_0(VAR_3, VAR_2,
   VAR_1, 0, 0, &VAR_6);
 if (!VAR_5)
  VAR_3->ee_ctrl_mask |= VAR_4;
out:
 return VAR_5;
}
