
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int i_size; int i_nlink; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct super_block*,unsigned int,int ) ;
 int FUNC_3 (struct super_block*,int ,char*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int,char*,struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_7(struct super_block *VAR_2,
          unsigned int VAR_3)
{
 struct inode *VAR_4;






 VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_2, VAR_1, "no journal found");
  return ((void*)0);
 }
 if (!VAR_4->i_nlink) {
  FUNC_6(VAR_4);
  FUNC_4(VAR_4);
  FUNC_3(VAR_2, VAR_1, "journal inode is deleted");
  return ((void*)0);
 }

 FUNC_5(2, "Journal inode found at %p: %lld bytes\n",
    VAR_4, VAR_4->i_size);
 if (!FUNC_1(VAR_4->i_mode)) {
  FUNC_3(VAR_2, VAR_1, "invalid journal inode");
  FUNC_4(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
