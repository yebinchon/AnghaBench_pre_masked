
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {struct vfsmount* mnt; struct dentry* dentry; } ;
struct dentry {int d_sb; } ;
struct autofs_sb_info {int type; } ;
struct autofs_info {int last_used; } ;


 unsigned int VAR_0 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 struct autofs_sb_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct path*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_5 (struct vfsmount*) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(struct vfsmount *VAR_2,
        struct dentry *VAR_3, unsigned int VAR_4)
{
 struct dentry *VAR_5 = VAR_3;
 struct path VAR_6 = {.mnt = VAR_2, .dentry = VAR_3};
 int VAR_7 = 1;

 FUNC_8("dentry %p %pd\n", VAR_3, VAR_3);

 FUNC_6(&VAR_6);

 if (!FUNC_3(&VAR_6))
  goto done;

 if (FUNC_4(VAR_6.dentry)) {
  struct autofs_sb_info *VAR_8 = FUNC_1(VAR_6.dentry->d_sb);


  if (FUNC_2(VAR_8->type))
   goto done;
 }


 if (VAR_4 & VAR_0) {
  VAR_7 = 0;
  goto done;
 }


 if (!FUNC_5(VAR_6.mnt)) {
  struct autofs_info *VAR_9;

  VAR_9 = FUNC_0(VAR_5);
  VAR_9->last_used = VAR_1;
  goto done;
 }

 VAR_7 = 0;
done:
 FUNC_8("returning = %d\n", VAR_7);
 FUNC_7(&VAR_6);
 return VAR_7;
}
