
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct file {int f_pos; } ;


 int FUNC_0 (struct inode*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 FUNC_1(VAR_0->i_sb);
 FUNC_0(VAR_0, &VAR_1->f_pos);

 FUNC_2(VAR_0->i_sb);
 return 0;
}
