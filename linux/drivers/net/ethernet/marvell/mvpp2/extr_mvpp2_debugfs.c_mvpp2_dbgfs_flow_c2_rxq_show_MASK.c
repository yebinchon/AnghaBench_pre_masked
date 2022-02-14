
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {struct mvpp2_dbgfs_c2_entry* private; } ;
struct mvpp2_dbgfs_c2_entry {int id; int priv; } ;
struct mvpp2_cls_c2_entry {int* attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct mvpp2_cls_c2_entry*) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 struct mvpp2_dbgfs_c2_entry *VAR_6 = VAR_4->private;
 struct mvpp2_cls_c2_entry VAR_7;
 u8 VAR_8, VAR_9;

 FUNC_0(VAR_6->priv, VAR_6->id, &VAR_7);

 VAR_8 = (VAR_7[0] >> VAR_1) &
      VAR_0;

 VAR_9 = (VAR_7[0] >> VAR_3) &
      VAR_2;

 FUNC_1(VAR_4, "%d\n", (VAR_8 << 3 | VAR_9));

 return 0;
}
