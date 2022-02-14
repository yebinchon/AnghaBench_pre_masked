
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int udf_pblk_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; } ;
struct udf_fileident_bh {int soffset; int eoffset; int * sbh; int * ebh; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_size; TYPE_1__* i_sb; } ;
struct fileIdentDesc {int fileCharacteristics; scalar_t__ lengthFileIdent; } ;
struct extent_position {int offset; int * bh; } ;
typedef int sector_t ;
typedef int loff_t ;
struct TYPE_3__ {int s_blocksize; int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_3 (struct inode*) ;
 struct fileIdentDesc* FUNC_4 (struct inode*,int*,struct udf_fileident_bh*,struct fileIdentDesc*,struct extent_position*,struct kernel_lb_addr*,int*,int*) ;
 int FUNC_5 (TYPE_1__*,struct kernel_lb_addr*,int) ;
 int * FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5)
{
 struct fileIdentDesc *VAR_6, VAR_7;
 struct udf_fileident_bh VAR_8;
 loff_t VAR_9;
 loff_t VAR_10 = FUNC_3(VAR_5) + VAR_5->i_size;
 udf_pblk_t VAR_11;
 struct kernel_lb_addr VAR_12;
 uint32_t VAR_13;
 sector_t VAR_14;
 struct extent_position VAR_15 = {};
 struct udf_inode_info *VAR_16 = FUNC_0(VAR_5);

 VAR_9 = FUNC_3(VAR_5);
 VAR_8.soffset = VAR_8.eoffset = VAR_9 & (VAR_5->i_sb->s_blocksize - 1);

 if (VAR_16->i_alloc_type == VAR_2)
  VAR_8.sbh = VAR_8.ebh = ((void*)0);
 else if (FUNC_2(VAR_5, VAR_9 >> VAR_5->i_sb->s_blocksize_bits,
         &VAR_15, &VAR_12, &VAR_13, &VAR_14) ==
     (VAR_0 >> 30)) {
  VAR_11 = FUNC_5(VAR_5->i_sb, &VAR_12, VAR_14);
  if ((++VAR_14 << VAR_5->i_sb->s_blocksize_bits) < VAR_13) {
   if (VAR_16->i_alloc_type == VAR_4)
    VAR_15.offset -= sizeof(struct short_ad);
   else if (VAR_16->i_alloc_type == VAR_3)
    VAR_15.offset -= sizeof(struct long_ad);
  } else
   VAR_14 = 0;

  VAR_8.sbh = VAR_8.ebh = FUNC_6(VAR_5->i_sb, VAR_11);
  if (!VAR_8.sbh) {
   FUNC_1(VAR_15.bh);
   return 0;
  }
 } else {
  FUNC_1(VAR_15.bh);
  return 0;
 }

 while (VAR_9 < VAR_10) {
  VAR_6 = FUNC_4(VAR_5, &VAR_9, &VAR_8, &VAR_7, &VAR_15, &VAR_12,
     &VAR_13, &VAR_14);
  if (!VAR_6) {
   if (VAR_8.sbh != VAR_8.ebh)
    FUNC_1(VAR_8.ebh);
   FUNC_1(VAR_8.sbh);
   FUNC_1(VAR_15.bh);
   return 0;
  }

  if (VAR_7.lengthFileIdent &&
      (VAR_7.fileCharacteristics & VAR_1) == 0) {
   if (VAR_8.sbh != VAR_8.ebh)
    FUNC_1(VAR_8.ebh);
   FUNC_1(VAR_8.sbh);
   FUNC_1(VAR_15.bh);
   return 0;
  }
 }

 if (VAR_8.sbh != VAR_8.ebh)
  FUNC_1(VAR_8.ebh);
 FUNC_1(VAR_8.sbh);
 FUNC_1(VAR_15.bh);

 return 1;
}
