
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_nlink; int i_mtime; int i_ctime; scalar_t__ i_size; int i_sb; } ;
struct TYPE_2__ {int extLocation; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fileIdentDesc*) ;
 int FUNC_1 (struct fileIdentDesc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 struct kernel_lb_addr FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,struct fileIdentDesc*,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 struct fileIdentDesc* FUNC_11 (struct inode*,int *,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 scalar_t__ FUNC_12 (int ,struct kernel_lb_addr*,int ) ;
 int FUNC_13 (int ,char*,int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;
 struct inode *VAR_6 = FUNC_5(VAR_4);
 struct udf_fileident_bh VAR_7;
 struct fileIdentDesc *VAR_8, VAR_9;
 struct kernel_lb_addr VAR_10;

 VAR_5 = -VAR_1;
 VAR_8 = FUNC_11(VAR_3, &VAR_4->d_name, &VAR_7, &VAR_9);
 if (FUNC_0(VAR_8)) {
  if (VAR_8)
   VAR_5 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_5 = -VAR_0;
 VAR_10 = FUNC_8(VAR_9.icb.extLocation);
 if (FUNC_12(VAR_3->i_sb, &VAR_10, 0) != VAR_6->i_ino)
  goto end_rmdir;
 VAR_5 = -VAR_2;
 if (!FUNC_6(VAR_6))
  goto end_rmdir;
 VAR_5 = FUNC_10(VAR_3, VAR_8, &VAR_7, &VAR_9);
 if (VAR_5)
  goto end_rmdir;
 if (VAR_6->i_nlink != 2)
  FUNC_13(VAR_6->i_sb, "empty directory has nlink != 2 (%u)\n",
    VAR_6->i_nlink);
 FUNC_3(VAR_6);
 VAR_6->i_size = 0;
 FUNC_7(VAR_3);
 VAR_6->i_ctime = VAR_3->i_ctime = VAR_3->i_mtime =
      FUNC_4(VAR_6);
 FUNC_9(VAR_3);

end_rmdir:
 if (VAR_7.sbh != VAR_7.ebh)
  FUNC_2(VAR_7.ebh);
 FUNC_2(VAR_7.sbh);

out:
 return VAR_5;
}
