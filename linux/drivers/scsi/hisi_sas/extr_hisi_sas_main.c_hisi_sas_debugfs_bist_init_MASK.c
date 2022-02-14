
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int debugfs_bist_linkrate; int debugfs_bist_dentry; int debugfs_bist_cnt; int debugfs_dir; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct hisi_hba*,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_6)
{
 VAR_6->debugfs_bist_dentry =
   FUNC_0("bist", VAR_6->debugfs_dir);
 FUNC_1("link_rate", 0600,
       VAR_6->debugfs_bist_dentry, VAR_6,
       &VAR_3);

 FUNC_1("code_mode", 0600,
       VAR_6->debugfs_bist_dentry, VAR_6,
       &VAR_1);

 FUNC_1("phy_id", 0600, VAR_6->debugfs_bist_dentry,
       VAR_6, &VAR_5);

 FUNC_2("cnt", 0600, VAR_6->debugfs_bist_dentry,
      &VAR_6->debugfs_bist_cnt);

 FUNC_1("loopback_mode", 0600,
       VAR_6->debugfs_bist_dentry,
       VAR_6, &VAR_4);

 FUNC_1("enable", 0600, VAR_6->debugfs_bist_dentry,
       VAR_6, &VAR_2);

 VAR_6->debugfs_bist_linkrate = VAR_0;
}
