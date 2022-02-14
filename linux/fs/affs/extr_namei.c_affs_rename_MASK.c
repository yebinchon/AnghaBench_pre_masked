
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int i_ino; } ;


 TYPE_3__* FUNC_0 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,struct dentry*) ;
 int FUNC_5 (struct super_block*,struct buffer_head*) ;
 int FUNC_6 (struct inode*,struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*,struct buffer_head*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct inode*) ;
 TYPE_2__* FUNC_12 (struct dentry*) ;
 scalar_t__ FUNC_13 (struct dentry*) ;
 int FUNC_14 (struct buffer_head*,struct inode*) ;

__attribute__((used)) static int
FUNC_15(struct inode *VAR_1, struct dentry *VAR_2,
     struct inode *VAR_3, struct dentry *VAR_4)
{
 struct super_block *VAR_5 = VAR_1->i_sb;
 struct buffer_head *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4->d_name.name,
     VAR_4->d_name.len,
     FUNC_8(VAR_2));

 if (VAR_7)
  return VAR_7;


 if (FUNC_13(VAR_4)) {
  VAR_7 = FUNC_10(VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_6 = FUNC_1(VAR_5, FUNC_12(VAR_2)->i_ino);
 if (!VAR_6)
  return -VAR_0;


 FUNC_7(VAR_1);
 VAR_7 = FUNC_9(VAR_1, VAR_6);
 FUNC_11(VAR_1);
 if (VAR_7)
  goto done;


 FUNC_4(FUNC_0(VAR_5, VAR_6)->name, VAR_4);
 FUNC_5(VAR_5, VAR_6);
 FUNC_7(VAR_3);
 VAR_7 = FUNC_6(VAR_3, VAR_6);
 FUNC_11(VAR_3);


done:
 FUNC_14(VAR_6, VAR_7 ? VAR_1 : VAR_3);
 FUNC_2(VAR_6);
 return VAR_7;
}
