
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct udf_inode_info {int i_unique; int i_location; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct inode {int i_mtime; int i_ctime; TYPE_1__* i_sb; int * i_fop; int * i_op; } ;
struct TYPE_4__ {scalar_t__ impUse; void* extLocation; void* extLength; } ;
struct fileIdentDesc {int fileCharacteristics; TYPE_2__ icb; } ;
struct dentry {int dummy; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_3__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 struct udf_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct inode*) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,int) ;
 struct fileIdentDesc* FUNC_14 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7)
{
 struct inode *VAR_8;
 struct udf_fileident_bh VAR_9;
 struct fileIdentDesc VAR_10, *VAR_11;
 int VAR_12;
 struct udf_inode_info *VAR_13 = FUNC_2(VAR_5);
 struct udf_inode_info *VAR_14;

 VAR_8 = FUNC_15(VAR_5, VAR_2 | VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_14 = FUNC_2(VAR_8);
 VAR_8->i_op = &VAR_3;
 VAR_8->i_fop = &VAR_4;
 VAR_11 = FUNC_14(VAR_8, ((void*)0), &VAR_9, &VAR_10, &VAR_12);
 if (!VAR_11) {
  FUNC_11(VAR_8);
  FUNC_9(VAR_8);
  goto out;
 }
 FUNC_13(VAR_8, 2);
 VAR_10.icb.extLength = FUNC_5(VAR_8->i_sb->s_blocksize);
 VAR_10.icb.extLocation = FUNC_6(VAR_13->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_10.icb.impUse)->impUse =
  FUNC_5(VAR_13->i_unique & 0x00000000FFFFFFFFUL);
 VAR_10.fileCharacteristics =
   VAR_0 | VAR_1;
 FUNC_16(VAR_8, &VAR_10, VAR_11, &VAR_9, ((void*)0), ((void*)0));
 FUNC_3(VAR_9.sbh);
 FUNC_12(VAR_8);

 VAR_11 = FUNC_14(VAR_5, VAR_6, &VAR_9, &VAR_10, &VAR_12);
 if (!VAR_11) {
  FUNC_4(VAR_8);
  FUNC_12(VAR_8);
  FUNC_9(VAR_8);
  goto out;
 }
 VAR_10.icb.extLength = FUNC_5(VAR_8->i_sb->s_blocksize);
 VAR_10.icb.extLocation = FUNC_6(VAR_14->i_location);
 *(__le32 *)((struct allocDescImpUse *)VAR_10.icb.impUse)->impUse =
  FUNC_5(VAR_14->i_unique & 0x00000000FFFFFFFFUL);
 VAR_10.fileCharacteristics |= VAR_0;
 FUNC_16(VAR_5, &VAR_10, VAR_11, &VAR_9, ((void*)0), ((void*)0));
 FUNC_10(VAR_5);
 VAR_5->i_ctime = VAR_5->i_mtime = FUNC_7(VAR_5);
 FUNC_12(VAR_5);
 FUNC_8(VAR_6, VAR_8);
 if (VAR_9.sbh != VAR_9.ebh)
  FUNC_3(VAR_9.ebh);
 FUNC_3(VAR_9.sbh);
 VAR_12 = 0;

out:
 return VAR_12;
}
