
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct path {TYPE_4__* dentry; TYPE_2__* mnt; } ;
struct TYPE_7__ {int nfs_export; int index; scalar_t__ upperdir; } ;
struct ovl_fs {scalar_t__ xino_bits; TYPE_3__ config; } ;
struct TYPE_8__ {int d_sb; } ;
struct TYPE_6__ {TYPE_1__* mnt_sb; } ;
struct TYPE_5__ {int s_stack_depth; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct path*,struct ovl_fs*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char const*,struct path*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, struct path *VAR_2,
    struct ovl_fs *VAR_3, int *VAR_4, bool *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_2);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (VAR_7)
  goto out_put;

 *VAR_4 = FUNC_0(*VAR_4, VAR_2->mnt->mnt_sb->s_stack_depth);

 if (FUNC_3(VAR_2->dentry))
  *VAR_5 = 1;





 VAR_6 = FUNC_1(VAR_2->dentry->d_sb);
 if ((VAR_3->config.nfs_export ||
      (VAR_3->config.index && VAR_3->config.upperdir)) && !VAR_6) {
  VAR_3->config.index = 0;
  VAR_3->config.nfs_export = 0;
  FUNC_6("overlayfs: fs on '%s' does not support file handles, falling back to index=off,nfs_export=off.\n",
   VAR_1);
 }


 if (VAR_6 != VAR_0)
  VAR_3->xino_bits = 0;

 return 0;

out_put:
 FUNC_5(VAR_2);
out:
 return VAR_7;
}
