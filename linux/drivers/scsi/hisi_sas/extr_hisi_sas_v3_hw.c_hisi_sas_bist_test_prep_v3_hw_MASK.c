
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int debugfs_bist_phy_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (struct hisi_hba*,int,int ) ;
 int FUNC_2 (struct hisi_hba*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_2)
{
 u32 VAR_3;
 int VAR_4 = VAR_2->debugfs_bist_phy_no;


 FUNC_0(VAR_2, VAR_4, 0);


 VAR_3 = FUNC_1(VAR_2, VAR_4, VAR_1);
 VAR_3 |= VAR_0;
 FUNC_2(VAR_2, VAR_4, VAR_1, VAR_3);
}
