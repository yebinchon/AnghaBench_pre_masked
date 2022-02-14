
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; int i_lock; int i_mode; } ;
struct TYPE_4__ {int name; } ;
struct dentry {int d_parent; TYPE_1__ d_name; } ;
struct TYPE_6__ {int s_id; TYPE_2__* s_type; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,struct dentry*,int) ;
 int FUNC_9 (struct inode*,struct dentry*,struct dentry*) ;
 struct dentry* FUNC_10 (struct dentry*,struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 struct dentry* FUNC_12 (int ) ;
 int FUNC_13 (struct dentry*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (char*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_16 (struct dentry*,struct inode*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (struct dentry*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

struct dentry *FUNC_22(struct inode *VAR_2, struct dentry *VAR_3)
{
 if (FUNC_3(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_0(!FUNC_11(VAR_3));

 if (!VAR_2)
  goto out;

 FUNC_16(VAR_3, VAR_2);
 FUNC_17(&VAR_2->i_lock);
 if (FUNC_5(VAR_2->i_mode)) {
  struct dentry *VAR_4 = FUNC_7(VAR_2);
  if (FUNC_19(VAR_4)) {

   FUNC_18(&VAR_2->i_lock);
   FUNC_20(&VAR_1);
   if (FUNC_19(FUNC_10(VAR_4, VAR_3))) {
    FUNC_21(&VAR_1);
    FUNC_13(VAR_4);
    VAR_4 = FUNC_2(-VAR_0);
    FUNC_15(
     "VFS: Lookup of '%s' in %s %s"
     " would have caused loop\n",
     VAR_3->d_name.name,
     VAR_2->i_sb->s_type->name,
     VAR_2->i_sb->s_id);
   } else if (!FUNC_4(VAR_4)) {
    struct dentry *VAR_5 = FUNC_12(VAR_4->d_parent);
    int VAR_6 = FUNC_9(VAR_2, VAR_3, VAR_4);
    FUNC_21(&VAR_1);
    if (VAR_6) {
     FUNC_13(VAR_4);
     VAR_4 = FUNC_2(VAR_6);
    }
    FUNC_13(VAR_5);
   } else {
    FUNC_8(VAR_4, VAR_3, 0);
    FUNC_21(&VAR_1);
   }
   FUNC_14(VAR_2);
   return VAR_4;
  }
 }
out:
 FUNC_6(VAR_3, VAR_2);
 return ((void*)0);
}
