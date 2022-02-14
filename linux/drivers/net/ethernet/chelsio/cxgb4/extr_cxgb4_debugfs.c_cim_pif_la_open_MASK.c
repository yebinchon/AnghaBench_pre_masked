
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_tab {scalar_t__ data; } ;
struct inode {struct adapter* i_private; } ;
struct file {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct seq_tab* FUNC_0 (struct file*,int,int,int,int ) ;
 int FUNC_1 (struct adapter*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct seq_tab *VAR_5;
 struct adapter *VAR_6 = VAR_3->i_private;

 VAR_5 = FUNC_0(VAR_4, 2 * VAR_0, 6 * sizeof(u32), 1,
    VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_1(VAR_6, (u32 *)VAR_5->data,
      (u32 *)VAR_5->data + 6 * VAR_0, ((void*)0), ((void*)0));
 return 0;
}
