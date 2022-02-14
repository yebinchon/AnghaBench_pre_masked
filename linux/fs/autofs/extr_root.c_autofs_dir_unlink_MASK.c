
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mtime; int i_sb; } ;
struct dentry {struct dentry* d_parent; } ;
struct autofs_sb_info {int flags; int lookup_lock; } ;
struct autofs_info {int dentry; int count; } ;
struct TYPE_3__ {scalar_t__ i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct autofs_info* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct dentry*) ;
 TYPE_1__* FUNC_10 (struct dentry*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct autofs_sb_info *VAR_4 = FUNC_6(VAR_2->i_sb);
 struct autofs_info *VAR_5 = FUNC_4(VAR_3);
 struct autofs_info *VAR_6;

 if (!FUNC_5(VAR_4))
  return -VAR_1;





 if (VAR_4->flags & VAR_0)
  return -VAR_1;

 if (FUNC_3(&VAR_5->count)) {
  VAR_6 = FUNC_4(VAR_3->d_parent);
  if (VAR_6 && !FUNC_0(VAR_3))
   FUNC_2(&VAR_6->count);
 }
 FUNC_11(VAR_5->dentry);

 FUNC_10(VAR_3)->i_size = 0;
 FUNC_7(FUNC_10(VAR_3));

 VAR_2->i_mtime = FUNC_8(VAR_2);

 FUNC_12(&VAR_4->lookup_lock);
 FUNC_1(VAR_3);
 FUNC_9(VAR_3);
 FUNC_13(&VAR_4->lookup_lock);

 return 0;
}
