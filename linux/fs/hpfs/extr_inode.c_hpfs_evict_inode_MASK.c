
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_ino; int i_nlink; int i_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_0)
{
 FUNC_4(&VAR_0->i_data);
 FUNC_0(VAR_0);
 if (!VAR_0->i_nlink) {
  FUNC_1(VAR_0->i_sb);
  FUNC_2(VAR_0->i_sb, VAR_0->i_ino);
  FUNC_3(VAR_0->i_sb);
 }
}
