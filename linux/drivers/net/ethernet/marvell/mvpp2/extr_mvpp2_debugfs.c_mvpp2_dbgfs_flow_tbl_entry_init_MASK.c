
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_dbgfs_flow_tbl_entry {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* dbgfs_entries; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct mvpp2_dbgfs_flow_tbl_entry* flt_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mvpp2_dbgfs_flow_tbl_entry*,int *) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_4,
        struct mvpp2 *VAR_5, int VAR_6)
{
 struct mvpp2_dbgfs_flow_tbl_entry *VAR_7;
 struct dentry *VAR_8;
 char VAR_9[10];

 if (VAR_6 >= VAR_2)
  return -VAR_0;

 FUNC_2(VAR_9, "%03d", VAR_6);

 VAR_8 = FUNC_0(VAR_9, VAR_4);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = &VAR_5->dbgfs_entries->flt_entries[VAR_6];

 VAR_7->id = VAR_6;
 VAR_7->priv = VAR_5;

 FUNC_1("hits", 0444, VAR_8, VAR_7,
       &VAR_3);

 return 0;
}
