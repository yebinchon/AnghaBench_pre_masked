
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct dentry {struct dentry* d_parent; } ;
struct autofs_sb_info {int flags; int version; int lookup_lock; } ;
struct autofs_info {int dentry; int count; } ;
struct TYPE_3__ {scalar_t__ i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*) ;
 struct autofs_info* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct dentry*) ;
 TYPE_1__* FUNC_9 (struct dentry*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (char*,struct dentry*,struct dentry*) ;
 int FUNC_13 (struct dentry*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_3, struct dentry *VAR_4)
{
 struct autofs_sb_info *VAR_5 = FUNC_6(VAR_3->i_sb);
 struct autofs_info *VAR_6 = FUNC_4(VAR_4);
 struct autofs_info *VAR_7;

 FUNC_12("dentry %p, removing %pd\n", VAR_4, VAR_4);

 if (!FUNC_5(VAR_5))
  return -VAR_1;





 if (VAR_5->flags & VAR_0)
  return -VAR_1;

 FUNC_14(&VAR_5->lookup_lock);
 if (!FUNC_13(VAR_4)) {
  FUNC_15(&VAR_5->lookup_lock);
  return -VAR_2;
 }
 FUNC_0(VAR_4);
 FUNC_8(VAR_4);
 FUNC_15(&VAR_5->lookup_lock);

 if (VAR_5->version < 5)
  FUNC_3(VAR_4);

 if (FUNC_2(&VAR_6->count)) {
  VAR_7 = FUNC_4(VAR_4->d_parent);
  if (VAR_7 && VAR_4->d_parent != VAR_4)
   FUNC_1(&VAR_7->count);
 }
 FUNC_10(VAR_6->dentry);
 FUNC_9(VAR_4)->i_size = 0;
 FUNC_7(FUNC_9(VAR_4));

 if (VAR_3->i_nlink)
  FUNC_11(VAR_3);

 return 0;
}
