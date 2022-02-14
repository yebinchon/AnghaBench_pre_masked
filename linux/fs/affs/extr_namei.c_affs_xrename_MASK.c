
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct dentry {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int i_ino; } ;


 TYPE_2__* FUNC_0 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,struct dentry*) ;
 int FUNC_4 (struct super_block*,struct buffer_head*) ;
 int FUNC_5 (struct inode*,struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 TYPE_1__* FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct buffer_head*,struct inode*) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_1, struct dentry *VAR_2,
      struct inode *VAR_3, struct dentry *VAR_4)
{

 struct super_block *VAR_5 = VAR_1->i_sb;
 struct buffer_head *VAR_6 = ((void*)0);
 struct buffer_head *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_6 = FUNC_1(VAR_5, FUNC_9(VAR_2)->i_ino);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, FUNC_9(VAR_4)->i_ino);
 if (!VAR_7)
  return -VAR_0;


 FUNC_6(VAR_1);
 VAR_8 = FUNC_7(VAR_1, VAR_6);
 FUNC_8(VAR_1);
 if (VAR_8)
  goto done;


 FUNC_6(VAR_3);
 VAR_8 = FUNC_7(VAR_3, VAR_7);
 FUNC_8(VAR_3);
 if (VAR_8)
  goto done;


 FUNC_3(FUNC_0(VAR_5, VAR_6)->name, VAR_4);
 FUNC_4(VAR_5, VAR_6);
 FUNC_6(VAR_3);
 VAR_8 = FUNC_5(VAR_3, VAR_6);
 FUNC_8(VAR_3);


 FUNC_3(FUNC_0(VAR_5, VAR_7)->name, VAR_2);
 FUNC_4(VAR_5, VAR_7);
 FUNC_6(VAR_1);
 VAR_8 = FUNC_5(VAR_1, VAR_7);
 FUNC_8(VAR_1);
done:
 FUNC_10(VAR_6, VAR_3);
 FUNC_10(VAR_7, VAR_1);
 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
 return VAR_8;
}
