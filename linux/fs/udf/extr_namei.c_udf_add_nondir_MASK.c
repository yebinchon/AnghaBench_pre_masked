
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_inode_info {int i_unique; int i_location; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct inode {int i_mtime; int i_ctime; TYPE_1__* i_sb; } ;
struct TYPE_4__ {scalar_t__ impUse; int extLocation; void* extLength; } ;
struct fileIdentDesc {TYPE_2__ icb; } ;
struct dentry {int d_parent; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_3__ {int s_blocksize; } ;


 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct fileIdentDesc* FUNC_10 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int FUNC_11 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_0, struct inode *VAR_1)
{
 struct udf_inode_info *VAR_2 = FUNC_0(VAR_1);
 struct inode *VAR_3 = FUNC_5(VAR_0->d_parent);
 struct udf_fileident_bh VAR_4;
 struct fileIdentDesc VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_10(VAR_3, VAR_0, &VAR_4, &VAR_5, &VAR_7);
 if (FUNC_12(!VAR_6)) {
  FUNC_8(VAR_1);
  FUNC_7(VAR_1);
  return VAR_7;
 }
 VAR_5.icb.extLength = FUNC_2(VAR_1->i_sb->s_blocksize);
 VAR_5.icb.extLocation = FUNC_3(VAR_2->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_5.icb.impUse)->impUse =
  FUNC_2(VAR_2->i_unique & 0x00000000FFFFFFFFUL);
 FUNC_11(VAR_3, &VAR_5, VAR_6, &VAR_4, ((void*)0), ((void*)0));
 VAR_3->i_ctime = VAR_3->i_mtime = FUNC_4(VAR_3);
 FUNC_9(VAR_3);
 if (VAR_4.sbh != VAR_4.ebh)
  FUNC_1(VAR_4.ebh);
 FUNC_1(VAR_4.sbh);
 FUNC_6(VAR_0, VAR_1);

 return 0;
}
