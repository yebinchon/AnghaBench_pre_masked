
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_dbgfs_c2_entry {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* dbgfs_entries; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct mvpp2_dbgfs_c2_entry* c2_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mvpp2_dbgfs_c2_entry*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_6,
         struct mvpp2 *VAR_7, int VAR_8)
{
 struct mvpp2_dbgfs_c2_entry *VAR_9;
 struct dentry *VAR_10;
 char VAR_11[10];

 if (VAR_8 >= VAR_2)
  return -VAR_0;

 FUNC_2(VAR_11, "%03d", VAR_8);

 VAR_10 = FUNC_0(VAR_11, VAR_6);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = &VAR_7->dbgfs_entries->c2_entries[VAR_8];

 VAR_9->id = VAR_8;
 VAR_9->priv = VAR_7;

 FUNC_1("hits", 0444, VAR_10, VAR_9,
       &VAR_4);

 FUNC_1("default_rxq", 0444, VAR_10, VAR_9,
       &VAR_5);

 FUNC_1("rss_enable", 0444, VAR_10, VAR_9,
       &VAR_3);

 return 0;
}
