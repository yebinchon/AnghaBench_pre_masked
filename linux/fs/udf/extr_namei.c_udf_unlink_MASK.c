
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_ctime; int i_mtime; int i_nlink; int i_sb; } ;
struct TYPE_2__ {int extLocation; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fileIdentDesc*) ;
 int FUNC_1 (struct fileIdentDesc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 struct kernel_lb_addr FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (char*,scalar_t__,int ) ;
 int FUNC_10 (struct inode*,struct fileIdentDesc*,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 struct fileIdentDesc* FUNC_11 (struct inode*,int *,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 scalar_t__ FUNC_12 (int ,struct kernel_lb_addr*,int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = FUNC_4(VAR_3);
 struct udf_fileident_bh VAR_6;
 struct fileIdentDesc *VAR_7;
 struct fileIdentDesc VAR_8;
 struct kernel_lb_addr VAR_9;

 VAR_4 = -VAR_1;
 VAR_7 = FUNC_11(VAR_2, &VAR_3->d_name, &VAR_6, &VAR_8);

 if (FUNC_0(VAR_7)) {
  if (VAR_7)
   VAR_4 = FUNC_1(VAR_7);
  goto out;
 }

 VAR_4 = -VAR_0;
 VAR_9 = FUNC_6(VAR_8.icb.extLocation);
 if (FUNC_12(VAR_2->i_sb, &VAR_9, 0) != VAR_5->i_ino)
  goto end_unlink;

 if (!VAR_5->i_nlink) {
  FUNC_9("Deleting nonexistent file (%lu), %u\n",
     VAR_5->i_ino, VAR_5->i_nlink);
  FUNC_8(VAR_5, 1);
 }
 VAR_4 = FUNC_10(VAR_2, VAR_7, &VAR_6, &VAR_8);
 if (VAR_4)
  goto end_unlink;
 VAR_2->i_ctime = VAR_2->i_mtime = FUNC_3(VAR_2);
 FUNC_7(VAR_2);
 FUNC_5(VAR_5);
 VAR_5->i_ctime = VAR_2->i_ctime;
 VAR_4 = 0;

end_unlink:
 if (VAR_6.sbh != VAR_6.ebh)
  FUNC_2(VAR_6.ebh);
 FUNC_2(VAR_6.sbh);

out:
 return VAR_4;
}
