
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {int len; } ;
struct inode {int i_ino; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ovl_fh*) ;
 int FUNC_1 (struct ovl_fh*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct ovl_fh*) ;
 int FUNC_4 (struct dentry*,char const*,struct ovl_fh*,int ,int ) ;
 struct ovl_fh* FUNC_5 (struct dentry*,int) ;
 int FUNC_6 (struct dentry*,char const*,struct ovl_fh*) ;
 int FUNC_7 (char*,char*,struct dentry*,int ,int) ;

int FUNC_8(struct dentry *VAR_1, const char *VAR_2,
        struct dentry *VAR_3, bool VAR_4, bool VAR_5)
{
 struct inode *VAR_6;
 struct ovl_fh *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_3, VAR_4);
 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7)) {
  VAR_7 = ((void*)0);
  goto fail;
 }

 VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_7);
 if (VAR_5 && VAR_8 == -VAR_0)
  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_7, VAR_7->len, 0);
 if (VAR_8)
  goto fail;

out:
 FUNC_3(VAR_7);
 return VAR_8;

fail:
 VAR_6 = FUNC_2(VAR_3);
 FUNC_7("overlayfs: failed to verify %s (%pd2, ino=%lu, err=%i)\n",
       VAR_4 ? "upper" : "origin", VAR_3,
       VAR_6 ? VAR_6->i_ino : 0, VAR_8);
 goto out;
}
