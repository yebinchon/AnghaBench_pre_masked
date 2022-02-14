
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vol_id; int ubi_num; } ;
struct ubifs_info {TYPE_1__ vi; struct ubifs_debug_info* dbg; } ;
struct ubifs_debug_info {char* dfs_dir_name; int dfs_dir; void* dfs_ro_error; void* dfs_tst_rcvry; void* dfs_chk_fs; void* dfs_chk_lprops; void* dfs_chk_orph; void* dfs_chk_index; void* dfs_chk_gen; void* dfs_dump_tnc; void* dfs_dump_budg; void* dfs_dump_lprops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char const*,int ) ;
 void* FUNC_1 (char const*,int,int ,struct ubifs_info*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,char*,int ,int ) ;

void FUNC_3(struct ubifs_info *VAR_6)
{
 int VAR_7;
 const char *VAR_8;
 struct ubifs_debug_info *VAR_9 = VAR_6->dbg;

 VAR_7 = FUNC_2(VAR_9->dfs_dir_name, VAR_2 + 1, VAR_3,
       VAR_6->vi.ubi_num, VAR_6->vi.vol_id);
 if (VAR_7 == VAR_2) {

  return;
 }

 VAR_8 = VAR_9->dfs_dir_name;
 VAR_9->dfs_dir = FUNC_0(VAR_8, VAR_5);

 VAR_8 = "dump_lprops";
 VAR_9->dfs_dump_lprops = FUNC_1(VAR_8, VAR_1, VAR_9->dfs_dir, VAR_6,
       &VAR_4);

 VAR_8 = "dump_budg";
 VAR_9->dfs_dump_budg = FUNC_1(VAR_8, VAR_1, VAR_9->dfs_dir, VAR_6,
            &VAR_4);

 VAR_8 = "dump_tnc";
 VAR_9->dfs_dump_tnc = FUNC_1(VAR_8, VAR_1, VAR_9->dfs_dir, VAR_6,
           &VAR_4);

 VAR_8 = "chk_general";
 VAR_9->dfs_chk_gen = FUNC_1(VAR_8, VAR_0 | VAR_1,
          VAR_9->dfs_dir, VAR_6, &VAR_4);

 VAR_8 = "chk_index";
 VAR_9->dfs_chk_index = FUNC_1(VAR_8, VAR_0 | VAR_1,
            VAR_9->dfs_dir, VAR_6, &VAR_4);

 VAR_8 = "chk_orphans";
 VAR_9->dfs_chk_orph = FUNC_1(VAR_8, VAR_0 | VAR_1,
           VAR_9->dfs_dir, VAR_6, &VAR_4);

 VAR_8 = "chk_lprops";
 VAR_9->dfs_chk_lprops = FUNC_1(VAR_8, VAR_0 | VAR_1,
      VAR_9->dfs_dir, VAR_6, &VAR_4);

 VAR_8 = "chk_fs";
 VAR_9->dfs_chk_fs = FUNC_1(VAR_8, VAR_0 | VAR_1,
         VAR_9->dfs_dir, VAR_6, &VAR_4);

 VAR_8 = "tst_recovery";
 VAR_9->dfs_tst_rcvry = FUNC_1(VAR_8, VAR_0 | VAR_1,
            VAR_9->dfs_dir, VAR_6, &VAR_4);

 VAR_8 = "ro_error";
 VAR_9->dfs_ro_error = FUNC_1(VAR_8, VAR_0 | VAR_1,
           VAR_9->dfs_dir, VAR_6, &VAR_4);
}
