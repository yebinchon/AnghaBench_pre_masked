
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ovl_cu_creds {int dummy; } ;
struct TYPE_4__ {int len; int name; } ;
struct TYPE_3__ {int mode; } ;
struct ovl_copy_up_ctx {int dentry; int metacopy; TYPE_2__ destname; int destdir; TYPE_1__ stat; int workdir; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 struct dentry* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct ovl_copy_up_ctx*,struct dentry*) ;
 int FUNC_8 (struct dentry*,struct inode*,struct dentry*) ;
 struct dentry* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (int ,struct ovl_cu_creds*) ;
 int FUNC_12 (struct ovl_cu_creds*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct ovl_copy_up_ctx *VAR_1)
{
 struct inode *VAR_2 = FUNC_2(VAR_1->destdir);
 struct dentry *VAR_3, *VAR_4;
 struct ovl_cu_creds VAR_5;
 int VAR_6;

 VAR_6 = FUNC_11(VAR_1->dentry, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3 = FUNC_9(VAR_1->workdir, VAR_1->stat.mode);
 FUNC_12(&VAR_5);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_6 = FUNC_7(VAR_1, VAR_3);
 if (VAR_6)
  goto out_dput;

 FUNC_4(VAR_2, VAR_0);

 VAR_4 = FUNC_6(VAR_1->destname.name, VAR_1->destdir, VAR_1->destname.len);
 VAR_6 = FUNC_1(VAR_4);
 if (!FUNC_0(VAR_4)) {
  VAR_6 = FUNC_8(VAR_3, VAR_2, VAR_4);
  FUNC_3(VAR_4);
 }
 FUNC_5(VAR_2);

 if (VAR_6)
  goto out_dput;

 if (!VAR_1->metacopy)
  FUNC_13(FUNC_2(VAR_1->dentry));
 FUNC_10(FUNC_2(VAR_1->dentry), VAR_3);

 return 0;

out_dput:
 FUNC_3(VAR_3);
 return VAR_6;
}
