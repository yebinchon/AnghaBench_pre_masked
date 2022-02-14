
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct dentry {int d_name; } ;
typedef int btree_key ;
struct TYPE_5__ {int cat_key; } ;
struct TYPE_4__ {int i_ino; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int ,struct inode*,int *,struct inode*,int *) ;
 int FUNC_5 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct dentry *VAR_3,
        struct inode *VAR_4, struct dentry *VAR_5,
        unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 & ~VAR_1)
  return -VAR_0;


 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_5(VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_4(FUNC_1(VAR_3)->i_ino,
      VAR_2, &VAR_3->d_name,
      VAR_4, &VAR_5->d_name);
 if (!VAR_7)
  FUNC_3(VAR_2->i_sb,
      (btree_key *)&FUNC_0(FUNC_1(VAR_3))->cat_key,
      VAR_4->i_ino, &VAR_5->d_name);
 return VAR_7;
}
