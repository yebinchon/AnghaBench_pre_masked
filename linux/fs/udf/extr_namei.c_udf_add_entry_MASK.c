
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ udf_pblk_t ;
struct kernel_lb_addr {scalar_t__ logicalBlockNum; } ;
struct TYPE_11__ {int i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenEAttr; int i_lenExtents; int i_lenAlloc; struct kernel_lb_addr i_location; TYPE_3__ i_ext; } ;
struct udf_fileident_bh {int soffset; int eoffset; TYPE_4__* sbh; TYPE_4__* ebh; } ;
struct tag {int dummy; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct TYPE_10__ {void* tagSerialNum; } ;
struct fileIdentDesc {int fileCharacteristics; int lengthFileIdent; void* lengthOfImpUse; void* fileVersionNum; TYPE_2__ descTag; } ;
struct extent_position {int offset; TYPE_4__* bh; struct kernel_lb_addr block; } ;
struct TYPE_9__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int sector_t ;
typedef int loff_t ;
struct TYPE_13__ {int s_udfrev; } ;
struct TYPE_12__ {scalar_t__ b_data; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_8__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct inode*,int,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct fileIdentDesc*,int ,int) ;
 TYPE_4__* FUNC_10 (struct inode*,int,int,int*) ;
 int FUNC_11 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int) ;
 int FUNC_12 (struct fileIdentDesc*) ;
 TYPE_4__* FUNC_13 (struct inode*,scalar_t__*,int*) ;
 int FUNC_14 (struct inode*) ;
 void* FUNC_15 (struct inode*) ;
 struct fileIdentDesc* FUNC_16 (struct inode*,int*,struct udf_fileident_bh*,struct fileIdentDesc*,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 scalar_t__ FUNC_17 (struct super_block*,struct kernel_lb_addr*,int) ;
 int FUNC_18 (char*,int ,int,int,scalar_t__,int) ;
 int FUNC_19 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int) ;
 int FUNC_20 (struct super_block*,int ,int ,unsigned char*,int ) ;
 TYPE_4__* FUNC_21 (struct super_block*,scalar_t__) ;
 int FUNC_22 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 int FUNC_23 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,unsigned char*) ;

__attribute__((used)) static struct fileIdentDesc *FUNC_24(struct inode *VAR_13,
        struct dentry *VAR_14,
        struct udf_fileident_bh *VAR_15,
        struct fileIdentDesc *VAR_16, int *VAR_17)
{
 struct super_block *VAR_18 = VAR_13->i_sb;
 struct fileIdentDesc *VAR_19 = ((void*)0);
 unsigned char *VAR_20 = ((void*)0);
 int VAR_21;
 loff_t VAR_22;
 loff_t VAR_23 = FUNC_14(VAR_13) + VAR_13->i_size;
 int VAR_24;
 udf_pblk_t VAR_25;
 struct kernel_lb_addr VAR_26;
 uint32_t VAR_27 = 0;
 sector_t VAR_28;
 struct extent_position VAR_29 = {};
 struct udf_inode_info *VAR_30;

 VAR_15->sbh = VAR_15->ebh = ((void*)0);
 VAR_20 = FUNC_7(VAR_11, VAR_6);
 if (!VAR_20) {
  *VAR_17 = -VAR_3;
  goto out_err;
 }

 if (VAR_14) {
  if (!VAR_14->d_name.len) {
   *VAR_17 = -VAR_0;
   goto out_err;
  }
  VAR_21 = FUNC_20(VAR_18, VAR_14->d_name.name,
        VAR_14->d_name.len,
        VAR_20, VAR_11);
  if (!VAR_21) {
   *VAR_17 = -VAR_2;
   goto out_err;
  }
 } else {
  VAR_21 = 0;
 }

 VAR_24 = FUNC_0(sizeof(struct fileIdentDesc) + VAR_21, VAR_12);

 VAR_22 = FUNC_14(VAR_13);

 VAR_15->soffset = VAR_15->eoffset = VAR_22 & (VAR_13->i_sb->s_blocksize - 1);
 VAR_30 = FUNC_1(VAR_13);
 if (VAR_30->i_alloc_type != VAR_7) {
  if (FUNC_5(VAR_13, VAR_22 >> VAR_13->i_sb->s_blocksize_bits, &VAR_29,
      &VAR_26, &VAR_27, &VAR_28) != (VAR_4 >> 30)) {
   VAR_25 = FUNC_17(VAR_13->i_sb,
     &VAR_30->i_location, 0);
   VAR_15->soffset = VAR_15->eoffset = VAR_18->s_blocksize;
   goto add;
  }
  VAR_25 = FUNC_17(VAR_13->i_sb, &VAR_26, VAR_28);
  if ((++VAR_28 << VAR_13->i_sb->s_blocksize_bits) < VAR_27) {
   if (VAR_30->i_alloc_type == VAR_9)
    VAR_29.offset -= sizeof(struct short_ad);
   else if (VAR_30->i_alloc_type == VAR_8)
    VAR_29.offset -= sizeof(struct long_ad);
  } else
   VAR_28 = 0;

  VAR_15->sbh = VAR_15->ebh = FUNC_21(VAR_13->i_sb, VAR_25);
  if (!VAR_15->sbh) {
   *VAR_17 = -VAR_1;
   goto out_err;
  }

  VAR_25 = VAR_30->i_location.logicalBlockNum;
 }

 while (VAR_22 < VAR_23) {
  VAR_19 = FUNC_16(VAR_13, &VAR_22, VAR_15, VAR_16, &VAR_29, &VAR_26,
     &VAR_27, &VAR_28);

  if (!VAR_19) {
   *VAR_17 = -VAR_1;
   goto out_err;
  }

  if ((VAR_16->fileCharacteristics & VAR_5) != 0) {
   if (FUNC_12(VAR_16) == VAR_24) {
    VAR_16->descTag.tagSerialNum = FUNC_4(1);
    VAR_16->fileVersionNum = FUNC_4(1);
    VAR_16->fileCharacteristics = 0;
    VAR_16->lengthFileIdent = VAR_21;
    VAR_16->lengthOfImpUse = FUNC_4(0);
    if (!FUNC_23(VAR_13, VAR_16, VAR_19, VAR_15, ((void*)0),
        VAR_20))
     goto out_ok;
    else {
     *VAR_17 = -VAR_1;
     goto out_err;
    }
   }
  }
 }

add:
 VAR_22 += VAR_24;

 if (VAR_30->i_alloc_type == VAR_7 &&
     VAR_18->s_blocksize - VAR_15->eoffset < VAR_24) {
  FUNC_3(VAR_29.bh);
  VAR_29.bh = ((void*)0);
  VAR_15->soffset -= FUNC_14(VAR_13);
  VAR_15->eoffset -= FUNC_14(VAR_13);
  VAR_22 -= FUNC_14(VAR_13);
  if (VAR_15->sbh != VAR_15->ebh)
   FUNC_3(VAR_15->ebh);
  FUNC_3(VAR_15->sbh);
  VAR_15->sbh = VAR_15->ebh =
    FUNC_13(VAR_13, &VAR_25, VAR_17);
  if (!VAR_15->sbh)
   goto out_err;
  VAR_29.block = VAR_30->i_location;
  VAR_29.offset = FUNC_15(VAR_13);

  FUNC_11(VAR_13, &VAR_29, &VAR_26, &VAR_27, 1);
 }


 if (VAR_18->s_blocksize - VAR_15->eoffset >= VAR_24) {
  VAR_15->soffset = VAR_15->eoffset;
  VAR_15->eoffset += VAR_24;
  if (VAR_15->sbh != VAR_15->ebh) {
   FUNC_3(VAR_15->sbh);
   VAR_15->sbh = VAR_15->ebh;
  }

  if (VAR_30->i_alloc_type == VAR_7) {
   VAR_25 = VAR_30->i_location.logicalBlockNum;
   VAR_19 = (struct fileIdentDesc *)
     (VAR_30->i_ext.i_data +
      VAR_15->soffset -
      FUNC_14(VAR_13) +
      VAR_30->i_lenEAttr);
  } else {
   VAR_25 = VAR_26.logicalBlockNum +
     ((VAR_27 - 1) >>
      VAR_13->i_sb->s_blocksize_bits);
   VAR_19 = (struct fileIdentDesc *)
    (VAR_15->sbh->b_data + VAR_15->soffset);
  }
 } else {

  VAR_27 = (VAR_27 + VAR_18->s_blocksize - 1) & ~(VAR_18->s_blocksize - 1);
  if (VAR_30->i_alloc_type == VAR_9)
   VAR_29.offset -= sizeof(struct short_ad);
  else if (VAR_30->i_alloc_type == VAR_8)
   VAR_29.offset -= sizeof(struct long_ad);
  FUNC_22(VAR_13, &VAR_29, &VAR_26, VAR_27, 1);
  VAR_30->i_lenExtents = (VAR_30->i_lenExtents + VAR_18->s_blocksize
     - 1) & ~(VAR_18->s_blocksize - 1);

  VAR_15->soffset = VAR_15->eoffset - VAR_18->s_blocksize;
  VAR_15->eoffset += VAR_24 - VAR_18->s_blocksize;
  if (VAR_15->sbh != VAR_15->ebh) {
   FUNC_3(VAR_15->sbh);
   VAR_15->sbh = VAR_15->ebh;
  }

  VAR_25 = VAR_26.logicalBlockNum + ((VAR_27 - 1) >>
      VAR_13->i_sb->s_blocksize_bits);
  VAR_15->ebh = FUNC_10(VAR_13,
    VAR_22 >> VAR_13->i_sb->s_blocksize_bits, 1, VAR_17);
  if (!VAR_15->ebh)
   goto out_err;

  FUNC_3(VAR_29.bh);
  VAR_29.bh = ((void*)0);
  VAR_29.block = VAR_30->i_location;
  VAR_29.offset = FUNC_15(VAR_13);

  if (!VAR_15->soffset) {

   while (FUNC_19(VAR_13, &VAR_29, &VAR_26, &VAR_27, 1) ==
    (VAR_4 >> 30))
    ;
   VAR_25 = VAR_26.logicalBlockNum + ((VAR_27 - 1) >>
     VAR_13->i_sb->s_blocksize_bits);
   FUNC_3(VAR_15->sbh);
   VAR_15->sbh = VAR_15->ebh;
   VAR_19 = (struct fileIdentDesc *)(VAR_15->sbh->b_data);
  } else {
   VAR_19 = (struct fileIdentDesc *)
    (VAR_15->sbh->b_data + VAR_18->s_blocksize +
     VAR_15->soffset);
  }
 }

 FUNC_9(VAR_16, 0, sizeof(struct fileIdentDesc));
 if (FUNC_2(VAR_18)->s_udfrev >= 0x0200)
  FUNC_18((char *)VAR_16, VAR_10, 3, 1, VAR_25,
       sizeof(struct tag));
 else
  FUNC_18((char *)VAR_16, VAR_10, 2, 1, VAR_25,
       sizeof(struct tag));
 VAR_16->fileVersionNum = FUNC_4(1);
 VAR_16->lengthFileIdent = VAR_21;
 VAR_16->lengthOfImpUse = FUNC_4(0);
 if (!FUNC_23(VAR_13, VAR_16, VAR_19, VAR_15, ((void*)0), VAR_20)) {
  VAR_13->i_size += VAR_24;
  if (VAR_30->i_alloc_type == VAR_7)
   VAR_30->i_lenAlloc += VAR_24;
  else {

   while (FUNC_19(VAR_13, &VAR_29, &VAR_26, &VAR_27, 1) ==
    (VAR_4 >> 30))
    ;
   VAR_27 -= VAR_30->i_lenExtents - VAR_13->i_size;
   if (VAR_30->i_alloc_type == VAR_9)
    VAR_29.offset -= sizeof(struct short_ad);
   else if (VAR_30->i_alloc_type == VAR_8)
    VAR_29.offset -= sizeof(struct long_ad);
   FUNC_22(VAR_13, &VAR_29, &VAR_26, VAR_27, 1);
   VAR_30->i_lenExtents = VAR_13->i_size;
  }

  FUNC_8(VAR_13);
  goto out_ok;
 } else {
  *VAR_17 = -VAR_1;
  goto out_err;
 }

out_err:
 VAR_19 = ((void*)0);
 if (VAR_15->sbh != VAR_15->ebh)
  FUNC_3(VAR_15->ebh);
 FUNC_3(VAR_15->sbh);
out_ok:
 FUNC_3(VAR_29.bh);
 FUNC_6(VAR_20);
 return VAR_19;
}
