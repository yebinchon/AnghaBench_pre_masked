
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,unsigned long,int ,int ,struct inode*) ;
 struct inode* FUNC_1 (struct inode*,unsigned long,int ,int ,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_2, struct inode *VAR_3,
          struct inode *VAR_4)
{
 return VAR_3 ? FUNC_1(VAR_3, (unsigned long) VAR_4,
      VAR_1, VAR_0, VAR_4) :
     FUNC_0(VAR_2, (unsigned long) VAR_4,
           VAR_1, VAR_0, VAR_4);
}
