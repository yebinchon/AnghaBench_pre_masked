
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ cache_symlinks; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct page*) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 char const* FUNC_6 (struct page*) ;
 char const* FUNC_7 (struct dentry*,struct inode*,struct delayed_call*) ;
 int VAR_4 ;
 int FUNC_8 (struct delayed_call*,int ,struct page*) ;

__attribute__((used)) static const char *FUNC_9(struct dentry *VAR_5, struct inode *VAR_6,
     struct delayed_call *VAR_7)
{
 struct fuse_conn *VAR_8 = FUNC_4(VAR_6);
 struct page *VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 if (FUNC_5(VAR_6))
  goto out_err;

 if (VAR_8->cache_symlinks)
  return FUNC_7(VAR_5, VAR_6, VAR_7);

 VAR_10 = -VAR_0;
 if (!VAR_5)
  goto out_err;

 VAR_9 = FUNC_2(VAR_3);
 VAR_10 = -VAR_2;
 if (!VAR_9)
  goto out_err;

 VAR_10 = FUNC_3(VAR_6, VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_9);
  goto out_err;
 }

 FUNC_8(VAR_7, VAR_4, VAR_9);

 return FUNC_6(VAR_9);

out_err:
 return FUNC_0(VAR_10);
}
