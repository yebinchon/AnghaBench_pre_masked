
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufshcd_dme_attr_val {int peer; int mib_val; int attr_sel; } ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*,int ,int ,int ,int ) ;

int FUNC_1(struct ufs_hba *VAR_1,
    const struct ufshcd_dme_attr_val *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2[VAR_5].attr_sel,
   VAR_0, VAR_2[VAR_5].mib_val, VAR_2[VAR_5].peer);

  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
