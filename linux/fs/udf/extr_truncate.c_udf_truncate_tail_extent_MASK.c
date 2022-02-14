
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct udf_inode_info {scalar_t__ i_alloc_type; scalar_t__ i_lenExtents; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct kernel_lb_addr {scalar_t__ logicalBlockNum; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_nlink; scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct extent_position {int offset; int bh; } ;
typedef int int8_t ;
struct TYPE_3__ {scalar_t__ s_blocksize; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct udf_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*,unsigned int) ;
 int FUNC_5 (struct inode*,struct extent_position*,struct kernel_lb_addr*,scalar_t__*,int) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned int,long long,long long,unsigned int,unsigned int) ;

void FUNC_7(struct inode *VAR_3)
{
 struct extent_position VAR_4 = {};
 struct kernel_lb_addr VAR_5;
 uint32_t VAR_6, VAR_7;
 uint64_t VAR_8 = 0;
 int8_t VAR_9 = -1, VAR_10;
 int VAR_11;
 struct udf_inode_info *VAR_12 = FUNC_1(VAR_3);

 if (VAR_12->i_alloc_type == VAR_0 ||
     VAR_3->i_size == VAR_12->i_lenExtents)
  return;

 if (VAR_3->i_nlink == 0)
  return;

 if (VAR_12->i_alloc_type == VAR_2)
  VAR_11 = sizeof(struct short_ad);
 else if (VAR_12->i_alloc_type == VAR_1)
  VAR_11 = sizeof(struct long_ad);
 else
  FUNC_0();


 while ((VAR_10 = FUNC_5(VAR_3, &VAR_4, &VAR_5, &VAR_6, 1)) != -1) {
  VAR_9 = VAR_10;
  VAR_8 += VAR_6;
  if (VAR_8 > VAR_3->i_size) {
   if (VAR_8 - VAR_3->i_size >= VAR_3->i_sb->s_blocksize)
    FUNC_6(VAR_3->i_sb,
      "Too long extent after EOF in inode %u: i_size: %lld lbcount: %lld extent %u+%u\n",
      (unsigned)VAR_3->i_ino,
      (long long)VAR_3->i_size,
      (long long)VAR_8,
      (unsigned)VAR_5.logicalBlockNum,
      (unsigned)VAR_6);
   VAR_7 = VAR_6 - (VAR_8 - VAR_3->i_size);
   VAR_4.offset -= VAR_11;
   FUNC_3(VAR_3, &VAR_4, &VAR_5, VAR_9, VAR_6, VAR_7);
   VAR_4.offset += VAR_11;
   if (FUNC_5(VAR_3, &VAR_4, &VAR_5, &VAR_6, 1) != -1)
    FUNC_4(VAR_3->i_sb,
     "Extent after EOF in inode %u\n",
     (unsigned)VAR_3->i_ino);
   break;
  }
 }


 VAR_12->i_lenExtents = VAR_3->i_size;
 FUNC_2(VAR_4.bh);
}
