
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_tab {scalar_t__ data; } ;
struct inode {struct adapter* i_private; } ;
struct file {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct seq_tab* FUNC_1 (struct file*,int,int,int ,int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_6, struct file *VAR_7)
{
 struct seq_tab *VAR_8;
 struct adapter *VAR_9 = VAR_6->i_private;

 switch (FUNC_0(FUNC_2(VAR_9, VAR_2))) {
 case 2:
  VAR_8 = FUNC_1(VAR_7, VAR_1 / 2, 2 * sizeof(u64), 0,
     VAR_4);
  break;
 case 3:
  VAR_8 = FUNC_1(VAR_7, VAR_1 / 2, 2 * sizeof(u64), 0,
     VAR_5);
  break;
 default:
  VAR_8 = FUNC_1(VAR_7, VAR_1, sizeof(u64), 0, VAR_3);
 }
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_9, (u64 *)VAR_8->data, ((void*)0));
 return 0;
}
