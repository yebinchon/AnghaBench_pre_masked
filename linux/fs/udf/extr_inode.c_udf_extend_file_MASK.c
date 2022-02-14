
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenExtents; } ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct TYPE_2__ {scalar_t__ partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct kernel_long_ad {int extLength; TYPE_1__ extLocation; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {int offset; scalar_t__ bh; } ;
struct allocExtDesc {int dummy; } ;
typedef int sector_t ;
typedef int loff_t ;
typedef int int8_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*,int,struct extent_position*,struct kernel_lb_addr*,int *,int*) ;
 int FUNC_4 (struct inode*,struct extent_position*,struct kernel_long_ad*,int) ;
 int FUNC_5 (struct inode*,struct extent_position*,struct kernel_long_ad*,unsigned long) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct extent_position*,TYPE_1__*,int*,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, loff_t VAR_4)
{

 struct extent_position VAR_5;
 struct kernel_lb_addr VAR_6;
 uint32_t VAR_7;
 int8_t VAR_8;
 struct super_block *VAR_9 = VAR_3->i_sb;
 sector_t VAR_10 = VAR_4 >> VAR_9->s_blocksize_bits, VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 struct udf_inode_info *VAR_14 = FUNC_1(VAR_3);
 struct kernel_long_ad VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 if (VAR_14->i_alloc_type == VAR_2)
  VAR_13 = sizeof(struct short_ad);
 else if (VAR_14->i_alloc_type == VAR_1)
  VAR_13 = sizeof(struct long_ad);
 else
  FUNC_0();

 VAR_8 = FUNC_3(VAR_3, VAR_10, &VAR_5, &VAR_6, &VAR_7, &VAR_11);
 VAR_17 = (VAR_8 != -1);

 if ((!VAR_5.bh && VAR_5.offset == FUNC_6(VAR_3)) ||
     (VAR_5.bh && VAR_5.offset == sizeof(struct allocExtDesc))) {


  VAR_15.extLocation.logicalBlockNum = 0;
  VAR_15.extLocation.partitionReferenceNum = 0;
  VAR_15.extLength = VAR_0;
 } else {
  VAR_5.offset -= VAR_13;
  VAR_8 = FUNC_7(VAR_3, &VAR_5, &VAR_15.extLocation,
          &VAR_15.extLength, 0);
  VAR_15.extLength |= VAR_8 << 30;
 }

 VAR_12 = VAR_4 & (VAR_9->s_blocksize - 1);




 if (VAR_17) {

  FUNC_5(VAR_3, &VAR_5, &VAR_15,
       VAR_12);
 } else {
  loff_t VAR_18 = ((loff_t)VAR_11 << VAR_9->s_blocksize_bits) |
        VAR_12;
  VAR_16 = FUNC_4(VAR_3, &VAR_5, &VAR_15, VAR_18);
 }

 if (VAR_16 < 0)
  goto out;
 VAR_16 = 0;
 VAR_14->i_lenExtents = VAR_4;
out:
 FUNC_2(VAR_5.bh);
 return VAR_16;
}
