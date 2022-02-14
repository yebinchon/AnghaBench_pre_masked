
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {struct super_block* j_private; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct super_block*,unsigned int) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,TYPE_1__*) ;
 int FUNC_4 (struct super_block*,int ,char*) ;
 int FUNC_5 (struct inode*) ;
 TYPE_1__* FUNC_6 (struct inode*) ;

__attribute__((used)) static journal_t *FUNC_7(struct super_block *VAR_1,
       unsigned int VAR_2)
{
 struct inode *VAR_3;
 journal_t *VAR_4;

 FUNC_0(!FUNC_2(VAR_1));

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_6(VAR_3);
 if (!VAR_4) {
  FUNC_4(VAR_1, VAR_0, "Could not load journal inode");
  FUNC_5(VAR_3);
  return ((void*)0);
 }
 VAR_4->j_private = VAR_1;
 FUNC_3(VAR_1, VAR_4);
 return VAR_4;
}
