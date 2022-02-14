
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u64 ;
struct ufs_sb_private_info {unsigned int s_fpbshift; int s_apbshift; unsigned int s_sbbase; scalar_t__ s_apbmask; } ;
struct TYPE_8__ {int * u2_i_data; int * i_data; } ;
struct ufs_inode_info {TYPE_1__ i_u1; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __fs64 ;
typedef int __fs32 ;
struct TYPE_10__ {unsigned int s_flags; struct ufs_sb_private_info* s_uspi; } ;
struct TYPE_9__ {int bh; int key64; int key32; } ;
typedef TYPE_2__ Indirect ;


 int FUNC_0 (char*,int,scalar_t__,unsigned long long) ;
 struct ufs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_7__* FUNC_2 (struct super_block*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct super_block*,int ) ;
 unsigned int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct ufs_inode_info*,struct buffer_head*,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (struct ufs_inode_info*,struct buffer_head*,int *,TYPE_2__*,TYPE_2__*) ;
 struct buffer_head* FUNC_8 (struct super_block*,unsigned int) ;

__attribute__((used)) static u64 FUNC_9(struct inode *VAR_2, unsigned VAR_3[4], int VAR_4)
{
 struct ufs_inode_info *VAR_5 = FUNC_1(VAR_2);
 struct super_block *VAR_6 = VAR_2->i_sb;
 struct ufs_sb_private_info *VAR_7 = FUNC_2(VAR_6)->s_uspi;
 u64 VAR_8 = (u64) VAR_7->s_apbmask>>VAR_7->s_fpbshift;
 int VAR_9 = VAR_7->s_apbshift-VAR_7->s_fpbshift;
 Indirect VAR_10[4], *VAR_11 = VAR_10;
 unsigned *VAR_12;
 unsigned VAR_13 = FUNC_2(VAR_6)->s_flags;
 u64 VAR_14 = 0;

 FUNC_0(": uspi->s_fpbshift = %d ,uspi->s_apbmask = %x, mask=%llx\n",
  VAR_7->s_fpbshift, VAR_7->s_apbmask,
  (unsigned long long)VAR_8);

 if (VAR_4 == 0)
  goto no_block;

again:
 VAR_12 = VAR_3;

 if ((VAR_13 & VAR_0) == VAR_1)
  goto ufs2;

 if (!FUNC_6(VAR_5, ((void*)0), &VAR_5->i_u1.i_data[*VAR_12++], VAR_10, VAR_11))
  goto changed;
 if (!VAR_11->key32)
  goto no_block;
 while (--VAR_4) {
  __fs32 *VAR_15;
  struct buffer_head *VAR_16;
  unsigned VAR_17 = *VAR_12++;

  VAR_16 = FUNC_8(VAR_6, VAR_7->s_sbbase +
      FUNC_4(VAR_6, VAR_11->key32) + (VAR_17>>VAR_9));
  if (!VAR_16)
   goto no_block;
  VAR_15 = (__fs32 *)VAR_16->b_data + (VAR_17 & VAR_8);
  if (!FUNC_6(VAR_5, VAR_16, VAR_15, VAR_10, ++VAR_11))
   goto changed;
  if (!VAR_11->key32)
   goto no_block;
 }
 VAR_14 = FUNC_4(VAR_6, VAR_11->key32);
 goto found;

ufs2:
 if (!FUNC_7(VAR_5, ((void*)0), &VAR_5->i_u1.u2_i_data[*VAR_12++], VAR_10, VAR_11))
  goto changed;
 if (!VAR_11->key64)
  goto no_block;

 while (--VAR_4) {
  __fs64 *VAR_18;
  struct buffer_head *VAR_19;
  unsigned VAR_20 = *VAR_12++;

  VAR_19 = FUNC_8(VAR_6, VAR_7->s_sbbase +
      FUNC_5(VAR_6, VAR_11->key64) + (VAR_20>>VAR_9));
  if (!VAR_19)
   goto no_block;
  VAR_18 = (__fs64 *)VAR_19->b_data + (VAR_20 & VAR_8);
  if (!FUNC_7(VAR_5, VAR_19, VAR_18, VAR_10, ++VAR_11))
   goto changed;
  if (!VAR_11->key64)
   goto no_block;
 }
 VAR_14 = FUNC_5(VAR_6, VAR_11->key64);
found:
 VAR_14 += VAR_7->s_sbbase;
no_block:
 while (VAR_11 > VAR_10) {
  FUNC_3(VAR_11->bh);
  VAR_11--;
 }
 return VAR_14;

changed:
 while (VAR_11 > VAR_10) {
  FUNC_3(VAR_11->bh);
  VAR_11--;
 }
 goto again;
}
