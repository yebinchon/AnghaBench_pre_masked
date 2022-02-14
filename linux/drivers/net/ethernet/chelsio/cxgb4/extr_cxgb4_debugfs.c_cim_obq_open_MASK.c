
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_tab {scalar_t__ data; } ;
struct inode {unsigned int i_private; } ;
struct file {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct seq_tab* FUNC_0 (struct file*,int,int,int ,int ) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (struct seq_tab*,int) ;
 int FUNC_3 (struct adapter*,unsigned int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 struct seq_tab *VAR_6;
 unsigned int VAR_7 = (uintptr_t)VAR_3->i_private & 7;
 struct adapter *VAR_8 = VAR_3->i_private - VAR_7;

 VAR_6 = FUNC_0(VAR_4, 6 * VAR_0, 4 * sizeof(u32), 0, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_8, VAR_7, (u32 *)VAR_6->data, 6 * VAR_0 * 4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3, VAR_4);
 } else {
  FUNC_2(VAR_6, VAR_5 / 4);
  VAR_5 = 0;
 }
 return VAR_5;
}
