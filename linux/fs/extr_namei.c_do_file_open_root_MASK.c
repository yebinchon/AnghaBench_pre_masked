
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct open_flags {int lookup_flags; int intent; } ;
struct TYPE_2__ {struct dentry* dentry; struct vfsmount* mnt; } ;
struct nameidata {TYPE_1__ root; } ;
struct filename {int dummy; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* FUNC_0 (struct filename*) ;
 struct file* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct filename*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 struct filename* FUNC_4 (char const*) ;
 struct file* FUNC_5 (struct nameidata*,struct open_flags const*,int) ;
 int FUNC_6 (struct filename*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct nameidata*,int,struct filename*) ;
 scalar_t__ FUNC_9 (int) ;

struct file *FUNC_10(struct dentry *VAR_7, struct vfsmount *VAR_8,
  const char *VAR_9, const struct open_flags *VAR_10)
{
 struct nameidata VAR_11;
 struct file *VAR_12;
 struct filename *VAR_13;
 int VAR_14 = VAR_10->lookup_flags | VAR_6;

 VAR_11.root.mnt = VAR_8;
 VAR_11.root.dentry = VAR_7;

 if (FUNC_3(VAR_7) && VAR_10->intent & VAR_3)
  return FUNC_1(-VAR_1);

 VAR_13 = FUNC_4(VAR_9);
 if (FUNC_2(VAR_13))
  return FUNC_0(VAR_13);

 FUNC_8(&VAR_11, -1, VAR_13);
 VAR_12 = FUNC_5(&VAR_11, VAR_10, VAR_14 | VAR_4);
 if (FUNC_9(VAR_12 == FUNC_1(-VAR_0)))
  VAR_12 = FUNC_5(&VAR_11, VAR_10, VAR_14);
 if (FUNC_9(VAR_12 == FUNC_1(-VAR_2)))
  VAR_12 = FUNC_5(&VAR_11, VAR_10, VAR_14 | VAR_5);
 FUNC_7();
 FUNC_6(VAR_13);
 return VAR_12;
}
