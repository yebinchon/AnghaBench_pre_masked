
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; } ;
struct fiemap_extent_info {int dummy; } ;
struct ext4_iloc {TYPE_1__* bh; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_8__ {int i_extra_isize; scalar_t__ i_file_acl; } ;
struct TYPE_7__ {int s_blocksize_bits; int s_blocksize; } ;
struct TYPE_6__ {int s_inode_size; } ;
struct TYPE_5__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*,struct ext4_iloc*) ;
 scalar_t__ FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct fiemap_extent_info*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4,
    struct fiemap_extent_info *VAR_5)
{
 __u64 VAR_6 = 0;
 __u64 VAR_7;
 __u32 VAR_8 = VAR_3;
 int VAR_9 = VAR_4->i_sb->s_blocksize_bits;
 int VAR_10 = 0;


 if (FUNC_4(VAR_4, VAR_1)) {
  struct ext4_iloc VAR_11;
  int VAR_12;

  VAR_10 = FUNC_3(VAR_4, &VAR_11);
  if (VAR_10)
   return VAR_10;
  VAR_6 = (__u64)VAR_11.bh->b_blocknr << VAR_9;
  VAR_12 = VAR_0 +
    FUNC_0(VAR_4)->i_extra_isize;
  VAR_6 += VAR_12;
  VAR_7 = FUNC_1(VAR_4->i_sb)->s_inode_size - VAR_12;
  VAR_8 |= VAR_2;
  FUNC_2(VAR_11.bh);
 } else {
  VAR_6 = (__u64)FUNC_0(VAR_4)->i_file_acl << VAR_9;
  VAR_7 = VAR_4->i_sb->s_blocksize;
 }

 if (VAR_6)
  VAR_10 = FUNC_5(VAR_5, 0, VAR_6,
      VAR_7, VAR_8);
 return (VAR_10 < 0 ? VAR_10 : 0);
}
