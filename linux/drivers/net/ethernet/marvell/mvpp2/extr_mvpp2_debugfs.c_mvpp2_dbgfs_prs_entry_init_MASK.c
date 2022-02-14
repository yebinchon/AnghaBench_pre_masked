
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_dbgfs_prs_entry {int tid; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* dbgfs_entries; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct mvpp2_dbgfs_prs_entry* prs_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mvpp2_dbgfs_prs_entry*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_9,
          struct mvpp2 *VAR_10, int VAR_11)
{
 struct mvpp2_dbgfs_prs_entry *VAR_12;
 struct dentry *VAR_13;
 char VAR_14[10];

 if (VAR_11 >= VAR_1)
  return -VAR_0;

 FUNC_2(VAR_14, "%03d", VAR_11);

 VAR_13 = FUNC_0(VAR_14, VAR_9);

 VAR_12 = &VAR_10->dbgfs_entries->prs_entries[VAR_11];

 VAR_12->tid = VAR_11;
 VAR_12->priv = VAR_10;


 FUNC_1("sram", 0444, VAR_13, VAR_12,
       &VAR_7);

 FUNC_1("valid", 0644, VAR_13, VAR_12,
       &VAR_8);

 FUNC_1("lookup_id", 0644, VAR_13, VAR_12,
       &VAR_5);

 FUNC_1("ai", 0644, VAR_13, VAR_12,
       &VAR_2);

 FUNC_1("header_data", 0644, VAR_13, VAR_12,
       &VAR_3);

 FUNC_1("hits", 0444, VAR_13, VAR_12,
       &VAR_4);

 FUNC_1("pmap", 0444, VAR_13, VAR_12,
        &VAR_6);

 return 0;
}
