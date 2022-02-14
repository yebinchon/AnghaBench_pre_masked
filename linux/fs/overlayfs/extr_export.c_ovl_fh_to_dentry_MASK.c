
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ovl_fh {unsigned int flags; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct ovl_fh*,int) ;
 struct dentry* FUNC_4 (struct super_block*,struct ovl_fh*) ;
 struct dentry* FUNC_5 (struct super_block*,struct ovl_fh*) ;
 int FUNC_6 (char*,int,int,unsigned int,int) ;

__attribute__((used)) static struct dentry *FUNC_7(struct super_block *VAR_4, struct fid *VAR_5,
           int VAR_6, int VAR_7)
{
 struct dentry *VAR_8 = ((void*)0);
 struct ovl_fh *VAR_9 = (struct ovl_fh *) VAR_5;
 int VAR_10 = VAR_6 << 2;
 unsigned int VAR_11 = 0;
 int VAR_12;

 VAR_12 = -VAR_0;
 if (VAR_7 != VAR_3)
  goto out_err;

 VAR_12 = FUNC_3(VAR_9, VAR_10);
 if (VAR_12)
  goto out_err;

 VAR_11 = VAR_9->flags;
 VAR_8 = (VAR_11 & VAR_2) ?
   FUNC_5(VAR_4, VAR_9) :
   FUNC_4(VAR_4, VAR_9);
 VAR_12 = FUNC_2(VAR_8);
 if (FUNC_1(VAR_8) && VAR_12 != -VAR_1)
  goto out_err;

 return VAR_8;

out_err:
 FUNC_6("overlayfs: failed to decode file handle (len=%d, type=%d, flags=%x, err=%i)\n",
       VAR_10, VAR_7, VAR_11, VAR_12);
 return FUNC_0(VAR_12);
}
