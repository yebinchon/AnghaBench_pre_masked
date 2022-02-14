
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_c2_entry* private; } ;
struct mvpp2_dbgfs_c2_entry {int id; int priv; } ;
struct mvpp2_cls_c2_entry {int* attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct mvpp2_cls_c2_entry*) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvpp2_dbgfs_c2_entry *VAR_3 = VAR_1->private;
 struct mvpp2_cls_c2_entry VAR_4;
 int VAR_5;

 FUNC_0(VAR_3->priv, VAR_3->id, &VAR_4);

 VAR_5 = !!(VAR_4[2] & VAR_0);

 FUNC_1(VAR_1, "%d\n", VAR_5);

 return 0;
}
