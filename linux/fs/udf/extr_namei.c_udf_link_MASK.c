
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct inode {void* i_mtime; void* i_ctime; TYPE_2__* i_sb; } ;
struct TYPE_6__ {scalar_t__ impUse; int extLocation; void* extLength; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct dentry {int dummy; } ;
struct allocDescImpUse {scalar_t__ impUse; } ;
typedef void* __le32 ;
struct TYPE_9__ {scalar_t__ i_alloc_type; int i_location; } ;
struct TYPE_8__ {scalar_t__ s_lvid_bh; } ;
struct TYPE_7__ {int s_blocksize; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct inode*) ;
 struct fileIdentDesc* FUNC_12 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 int FUNC_13 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;

__attribute__((used)) static int FUNC_14(struct dentry *VAR_1, struct inode *VAR_2,
      struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_6(VAR_1);
 struct udf_fileident_bh VAR_5;
 struct fileIdentDesc VAR_6, *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_12(VAR_2, VAR_3, &VAR_5, &VAR_6, &VAR_8);
 if (!VAR_7) {
  return VAR_8;
 }
 VAR_6.icb.extLength = FUNC_3(VAR_4->i_sb->s_blocksize);
 VAR_6.icb.extLocation = FUNC_4(FUNC_0(VAR_4)->i_location);
 if (FUNC_1(VAR_4->i_sb)->s_lvid_bh) {
  *(__le32 *)((struct allocDescImpUse *)VAR_6.icb.impUse)->impUse =
   FUNC_3(FUNC_10(VAR_4->i_sb));
 }
 FUNC_13(VAR_2, &VAR_6, VAR_7, &VAR_5, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_2)->i_alloc_type == VAR_0)
  FUNC_11(VAR_2);

 if (VAR_5.sbh != VAR_5.ebh)
  FUNC_2(VAR_5.ebh);
 FUNC_2(VAR_5.sbh);
 FUNC_9(VAR_4);
 VAR_4->i_ctime = FUNC_5(VAR_4);
 FUNC_11(VAR_4);
 VAR_2->i_ctime = VAR_2->i_mtime = FUNC_5(VAR_2);
 FUNC_11(VAR_2);
 FUNC_8(VAR_4);
 FUNC_7(VAR_3, VAR_4);

 return 0;
}
