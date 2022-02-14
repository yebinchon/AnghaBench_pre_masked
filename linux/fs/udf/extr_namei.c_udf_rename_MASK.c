
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_location; scalar_t__ i_efe; TYPE_1__ i_ext; } ;
struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {scalar_t__ i_ino; void* i_mtime; void* i_ctime; TYPE_2__* i_sb; int i_mode; } ;
struct TYPE_7__ {int extLocation; } ;
struct fileIdentDesc {TYPE_3__ icb; int fileCharacteristics; int fileVersionNum; } ;
struct fileEntry {int dummy; } ;
struct extendedFileEntry {int dummy; } ;
struct dentry {int d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct fileIdentDesc*) ;
 int FUNC_1 (struct fileIdentDesc*) ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 struct udf_inode_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 struct kernel_lb_addr FUNC_11 (int ) ;
 int FUNC_12 (struct buffer_head*,struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (TYPE_3__*,TYPE_3__*,int) ;
 struct fileIdentDesc* FUNC_15 (struct inode*,struct dentry*,struct udf_fileident_bh*,struct fileIdentDesc*,int*) ;
 struct buffer_head* FUNC_16 (struct inode*,int ,int ,int*) ;
 int FUNC_17 (struct inode*,struct fileIdentDesc*,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 int FUNC_18 (struct fileIdentDesc*) ;
 int FUNC_19 (struct inode*) ;
 struct fileIdentDesc* FUNC_20 (struct inode*,int *,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 struct fileIdentDesc* FUNC_21 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_22 (TYPE_2__*,struct kernel_lb_addr*,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;

__attribute__((used)) static int FUNC_25(struct inode *VAR_6, struct dentry *VAR_7,
        struct inode *VAR_8, struct dentry *VAR_9,
        unsigned int VAR_10)
{
 struct inode *VAR_11 = FUNC_7(VAR_7);
 struct inode *VAR_12 = FUNC_7(VAR_9);
 struct udf_fileident_bh VAR_13, VAR_14;
 struct fileIdentDesc *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 struct fileIdentDesc VAR_18, VAR_19;
 struct buffer_head *VAR_20 = ((void*)0);
 int VAR_21 = -VAR_2;
 struct kernel_lb_addr VAR_22;
 struct udf_inode_info *VAR_23 = FUNC_3(VAR_11);

 if (VAR_10 & ~VAR_5)
  return -VAR_0;

 VAR_15 = FUNC_20(VAR_6, &VAR_7->d_name, &VAR_13, &VAR_18);
 if (FUNC_0(VAR_15)) {
  VAR_21 = FUNC_1(VAR_15);
  goto end_rename;
 }

 if (VAR_13.sbh != VAR_13.ebh)
  FUNC_4(VAR_13.ebh);

 FUNC_4(VAR_13.sbh);
 VAR_22 = FUNC_11(VAR_18.icb.extLocation);
 if (!VAR_15 || FUNC_22(VAR_6->i_sb, &VAR_22, 0)
     != VAR_11->i_ino)
  goto end_rename;

 VAR_16 = FUNC_20(VAR_8, &VAR_9->d_name, &VAR_14, &VAR_19);
 if (FUNC_0(VAR_16)) {
  VAR_21 = FUNC_1(VAR_16);
  goto end_rename;
 }
 if (VAR_16 && !VAR_12) {
  if (VAR_14.sbh != VAR_14.ebh)
   FUNC_4(VAR_14.ebh);
  FUNC_4(VAR_14.sbh);
  VAR_16 = ((void*)0);
 }
 if (FUNC_2(VAR_11->i_mode)) {
  int VAR_24 = FUNC_19(VAR_11);

  if (VAR_12) {
   VAR_21 = -VAR_3;
   if (!FUNC_8(VAR_12))
    goto end_rename;
  }
  VAR_21 = -VAR_1;
  if (VAR_23->i_alloc_type == VAR_4) {
   VAR_17 = FUNC_21(
     VAR_23->i_ext.i_data -
       (VAR_23->i_efe ?
        sizeof(struct extendedFileEntry) :
        sizeof(struct fileEntry)),
     VAR_11->i_sb->s_blocksize, &VAR_24);
  } else {
   VAR_20 = FUNC_16(VAR_11, 0, 0, &VAR_21);
   if (!VAR_20)
    goto end_rename;
   VAR_17 = FUNC_21(VAR_20->b_data,
     VAR_11->i_sb->s_blocksize, &VAR_24);
  }
  if (!VAR_17)
   goto end_rename;
  VAR_22 = FUNC_11(VAR_17->icb.extLocation);
  if (FUNC_22(VAR_11->i_sb, &VAR_22, 0) !=
    VAR_6->i_ino)
   goto end_rename;
 }
 if (!VAR_16) {
  VAR_16 = FUNC_15(VAR_8, VAR_9, &VAR_14, &VAR_19,
        &VAR_21);
  if (!VAR_16)
   goto end_rename;
 }





 VAR_11->i_ctime = FUNC_6(VAR_11);
 FUNC_13(VAR_11);




 VAR_19.fileVersionNum = VAR_18.fileVersionNum;
 VAR_19.fileCharacteristics = VAR_18.fileCharacteristics;
 FUNC_14(&(VAR_19.icb), &(VAR_18.icb), sizeof(VAR_18.icb));
 FUNC_24(VAR_8, &VAR_19, VAR_16, &VAR_14, ((void*)0), ((void*)0));


 VAR_15 = FUNC_20(VAR_6, &VAR_7->d_name, &VAR_13, &VAR_18);
 FUNC_17(VAR_6, VAR_15, &VAR_13, &VAR_18);

 if (VAR_12) {
  VAR_12->i_ctime = FUNC_6(VAR_12);
  FUNC_10(VAR_12);
 }
 VAR_6->i_ctime = VAR_6->i_mtime = FUNC_6(VAR_6);
 VAR_8->i_ctime = VAR_8->i_mtime = FUNC_6(VAR_8);
 FUNC_13(VAR_6);
 FUNC_13(VAR_8);

 if (VAR_17) {
  VAR_17->icb.extLocation = FUNC_5(FUNC_3(VAR_8)->i_location);
  FUNC_23((char *)VAR_17, FUNC_18(VAR_17));
  if (VAR_23->i_alloc_type == VAR_4)
   FUNC_13(VAR_11);
  else
   FUNC_12(VAR_20, VAR_11);

  FUNC_10(VAR_6);
  if (VAR_12)
   FUNC_10(VAR_12);
  else {
   FUNC_9(VAR_8);
   FUNC_13(VAR_8);
  }
 }

 if (VAR_15) {
  if (VAR_13.sbh != VAR_13.ebh)
   FUNC_4(VAR_13.ebh);
  FUNC_4(VAR_13.sbh);
 }

 VAR_21 = 0;

end_rename:
 FUNC_4(VAR_20);
 if (VAR_16) {
  if (VAR_14.sbh != VAR_14.ebh)
   FUNC_4(VAR_14.ebh);
  FUNC_4(VAR_14.sbh);
 }

 return VAR_21;
}
