
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ovl_path {struct dentry* dentry; } ;
struct TYPE_5__ {int nfs_export; } ;
struct ovl_fs {TYPE_2__ config; } ;
struct ovl_fh {int dummy; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_6__ {int i_nlink; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_5 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_6 ;
 TYPE_3__* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (int *,int ,size_t) ;
 int FUNC_6 (struct ovl_fh*) ;
 struct ovl_fh* FUNC_7 (size_t,int ) ;
 int FUNC_8 (struct ovl_fh*,size_t) ;
 int FUNC_9 (struct ovl_fs*,struct ovl_fh*,int,struct dentry*,struct ovl_path**) ;
 scalar_t__ FUNC_10 (struct dentry*,struct dentry*,int ) ;
 struct dentry* FUNC_11 (struct ovl_fs*,struct dentry*) ;
 scalar_t__ FUNC_12 (struct dentry*) ;
 scalar_t__ FUNC_13 (struct dentry*) ;
 int FUNC_14 (struct dentry*,int ,struct ovl_fh*) ;
 int FUNC_15 (char*,struct dentry*,int,int) ;

int FUNC_16(struct ovl_fs *VAR_7, struct dentry *VAR_8)
{
 struct ovl_fh *VAR_9 = ((void*)0);
 size_t VAR_10;
 struct ovl_path VAR_11 = { };
 struct ovl_path *VAR_12 = &VAR_11;
 struct dentry *VAR_13 = ((void*)0);
 int VAR_14;

 if (!FUNC_2(VAR_8))
  return 0;


 VAR_14 = -VAR_3;
 if (FUNC_12(VAR_8))
  goto fail;

 VAR_14 = -VAR_0;
 if (VAR_8->d_name.len < sizeof(struct ovl_fh)*2)
  goto fail;

 VAR_14 = -VAR_2;
 VAR_10 = VAR_8->d_name.len / 2;
 VAR_9 = FUNC_7(VAR_10, VAR_4);
 if (!VAR_9)
  goto fail;

 VAR_14 = -VAR_0;
 if (FUNC_5((u8 *)VAR_9, VAR_8->d_name.name, VAR_10))
  goto fail;

 VAR_14 = FUNC_8(VAR_9, VAR_10);
 if (VAR_14)
  goto fail;






 if (FUNC_13(VAR_8))
  goto out;





 if (FUNC_3(VAR_8) && !VAR_7->config.nfs_export)
  goto out;
 VAR_13 = FUNC_11(VAR_7, VAR_8);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);






  if (VAR_14 == -VAR_3)
   goto orphan;
  else if (!VAR_14)
   VAR_14 = -VAR_3;
  goto fail;
 }

 VAR_14 = FUNC_14(VAR_13, VAR_5, VAR_9);
 FUNC_4(VAR_13);
 if (VAR_14)
  goto fail;


 if (!FUNC_3(VAR_8) && FUNC_2(VAR_8)->i_nlink == 1) {
  VAR_14 = FUNC_9(VAR_7, VAR_9, 0, VAR_8, &VAR_12);
  if (VAR_14)
   goto fail;

  if (FUNC_10(VAR_11.dentry, VAR_8, 0) == 0)
   goto orphan;
 }

out:
 FUNC_4(VAR_11.dentry);
 FUNC_6(VAR_9);
 return VAR_14;

fail:
 FUNC_15("overlayfs: failed to verify index (%pd2, ftype=%x, err=%i)\n",
       VAR_8, FUNC_2(VAR_8)->i_mode & VAR_6, VAR_14);
 goto out;

orphan:
 FUNC_15("overlayfs: orphan index entry (%pd2, ftype=%x, nlink=%u)\n",
       VAR_8, FUNC_2(VAR_8)->i_mode & VAR_6,
       FUNC_2(VAR_8)->i_nlink);
 VAR_14 = -VAR_1;
 goto out;
}
