
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct udf_inode_info {int i_lenExtents; scalar_t__ i_alloc_type; } ;
struct super_block {int s_blocksize; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {scalar_t__ partitionReferenceNum; scalar_t__ logicalBlockNum; } ;
struct kernel_long_ad {int extLength; struct kernel_lb_addr extLocation; } ;
struct inode {struct super_block* i_sb; } ;
struct extent_position {int offset; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 int FUNC_2 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int ) ;
 int FUNC_3 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_7,
         struct extent_position *VAR_8,
         struct kernel_long_ad *VAR_9,
         loff_t VAR_10)
{
 uint32_t VAR_11;
 int VAR_12 = 0, VAR_13 = !(VAR_9->extLength & VAR_6);
 struct super_block *VAR_14 = VAR_7->i_sb;
 struct kernel_lb_addr VAR_15 = {};
 uint32_t VAR_16 = 0;
 struct udf_inode_info *VAR_17;
 int VAR_18;



 if (!VAR_10 && VAR_13)
  return 0;

 VAR_17 = FUNC_0(VAR_7);

 if (VAR_9->extLength & (VAR_14->s_blocksize - 1)) {
  VAR_9->extLength =
   (VAR_9->extLength & VAR_5) |
   (((VAR_9->extLength & VAR_6) +
     VAR_14->s_blocksize - 1) & ~(VAR_14->s_blocksize - 1));
  VAR_17->i_lenExtents =
   (VAR_17->i_lenExtents + VAR_14->s_blocksize - 1) &
   ~(VAR_14->s_blocksize - 1);
 }


 if ((VAR_9->extLength & VAR_5) ==
      VAR_1) {

  VAR_15 = VAR_9->extLocation;
  VAR_16 = VAR_9->extLength;

  VAR_9->extLength = VAR_2 |
   (VAR_9->extLength & VAR_6);
  VAR_9->extLocation.logicalBlockNum = 0;
  VAR_9->extLocation.partitionReferenceNum = 0;
 }


 if ((VAR_9->extLength & VAR_5) ==
     VAR_2) {
  VAR_11 = (1 << 30) - VAR_14->s_blocksize -
   (VAR_9->extLength & VAR_6);
  if (VAR_11 > VAR_10)
   VAR_11 = VAR_10;
  VAR_10 -= VAR_11;
  VAR_9->extLength += VAR_11;
 }

 if (VAR_13) {
  FUNC_1(VAR_7, VAR_8, &VAR_9->extLocation,
        VAR_9->extLength, 1);
  VAR_12++;
 } else {
  struct kernel_lb_addr VAR_19;
  uint32_t VAR_20;

  FUNC_3(VAR_7, VAR_8, &VAR_9->extLocation,
    VAR_9->extLength, 1);




  FUNC_2(VAR_7, VAR_8, &VAR_19, &VAR_20, 0);
 }


 if (!VAR_10)
  goto out;


 VAR_9->extLocation.logicalBlockNum = 0;
 VAR_9->extLocation.partitionReferenceNum = 0;
 VAR_11 = (1 << 30) - VAR_14->s_blocksize;
 VAR_9->extLength = VAR_2 | VAR_11;


 while (VAR_10 > VAR_11) {
  VAR_10 -= VAR_11;
  VAR_18 = FUNC_1(VAR_7, VAR_8, &VAR_9->extLocation,
       VAR_9->extLength, 1);
  if (VAR_18)
   return VAR_18;
  VAR_12++;
 }
 if (VAR_10) {
  VAR_9->extLength = VAR_2 |
   VAR_10;
  VAR_18 = FUNC_1(VAR_7, VAR_8, &VAR_9->extLocation,
       VAR_9->extLength, 1);
  if (VAR_18)
   return VAR_18;
  VAR_12++;
 }

out:

 if (VAR_16) {
  VAR_18 = FUNC_1(VAR_7, VAR_8, &VAR_15,
       VAR_16, 1);
  if (VAR_18)
   return VAR_18;
  VAR_9->extLocation = VAR_15;
  VAR_9->extLength = VAR_16;
  VAR_12++;
 }


 if (VAR_17->i_alloc_type == VAR_4)
  VAR_8->offset -= sizeof(struct short_ad);
 else if (VAR_17->i_alloc_type == VAR_3)
  VAR_8->offset -= sizeof(struct long_ad);
 else
  return -VAR_0;

 return VAR_12;
}
