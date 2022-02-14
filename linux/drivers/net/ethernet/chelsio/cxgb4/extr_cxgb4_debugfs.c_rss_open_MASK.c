
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct seq_tab {scalar_t__ data; } ;
struct inode {struct adapter* i_private; } ;
struct file {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct seq_tab* FUNC_0 (struct file*,int,int,int ,int ) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct adapter *VAR_4 = VAR_2->i_private;
 int VAR_5, VAR_6;
 struct seq_tab *VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = FUNC_0(VAR_3, VAR_6 / 8, 8 * sizeof(u16), 0, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4, (u16 *)VAR_7->data);
 if (VAR_5)
  FUNC_1(VAR_2, VAR_3);

 return VAR_5;
}
