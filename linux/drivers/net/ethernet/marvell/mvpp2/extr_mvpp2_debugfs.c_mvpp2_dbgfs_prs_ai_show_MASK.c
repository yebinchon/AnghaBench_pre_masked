
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_prs_entry* private; } ;
struct mvpp2_prs_entry {int* tcam; } ;
struct mvpp2_dbgfs_prs_entry {int tid; int priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct mvpp2_prs_entry*,int ) ;
 int FUNC_1 (struct seq_file*,char*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 struct mvpp2_dbgfs_prs_entry *VAR_4 = VAR_2->private;
 struct mvpp2_prs_entry VAR_5;
 unsigned char VAR_6, VAR_7;

 FUNC_0(VAR_4->priv, &VAR_5, VAR_4->tid);

 VAR_6 = VAR_5.tcam[VAR_1] & VAR_0;
 VAR_7 = (VAR_5.tcam[VAR_1] >> 16) & VAR_0;

 FUNC_1(VAR_2, "%02x %02x\n", VAR_6, VAR_7);

 return 0;
}
