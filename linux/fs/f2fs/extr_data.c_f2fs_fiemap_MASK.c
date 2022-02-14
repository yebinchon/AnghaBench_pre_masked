
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct fiemap_extent_info {int fi_flags; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_size; } ;
typedef int sector_t ;
typedef int pgoff_t ;
struct TYPE_2__ {int max_file_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 () ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct fiemap_extent_info*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,struct fiemap_extent_info*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct fiemap_extent_info*,int) ;
 int FUNC_13 (struct fiemap_extent_info*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_14 (struct inode*,int,struct buffer_head*,int ,int ,int*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (struct inode*,scalar_t__) ;
 int FUNC_18 (struct buffer_head*,int ,int) ;

int FUNC_19(struct inode *VAR_10, struct fiemap_extent_info *VAR_11,
  u64 VAR_12, u64 VAR_13)
{
 struct buffer_head VAR_14;
 sector_t VAR_15, VAR_16;
 pgoff_t VAR_17;
 u64 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 u32 VAR_21 = 0;
 int VAR_22 = 0;

 if (VAR_11->fi_flags & VAR_6) {
  VAR_22 = FUNC_9(VAR_10);
  if (VAR_22)
   return VAR_22;
 }

 VAR_22 = FUNC_12(VAR_11, VAR_7 | VAR_8);
 if (VAR_22)
  return VAR_22;

 FUNC_15(VAR_10);

 if (VAR_11->fi_flags & VAR_8) {
  VAR_22 = FUNC_10(VAR_10, VAR_11);
  goto out;
 }

 if (FUNC_6(VAR_10) || FUNC_7(VAR_10)) {
  VAR_22 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13);
  if (VAR_22 != -VAR_0)
   goto out;
 }

 if (FUNC_17(VAR_10, VAR_13) == 0)
  VAR_13 = FUNC_2(VAR_10, 1);

 VAR_15 = FUNC_17(VAR_10, VAR_12);
 VAR_16 = FUNC_17(VAR_10, VAR_12 + VAR_13 - 1);

next:
 FUNC_18(&VAR_14, 0, sizeof(struct buffer_head));
 VAR_14.b_size = VAR_13;

 VAR_22 = FUNC_14(VAR_10, VAR_15, &VAR_14, 0,
     VAR_2, &VAR_17);
 if (VAR_22)
  goto out;


 if (!FUNC_3(&VAR_14)) {
  VAR_15 = VAR_17;

  if (FUNC_2(VAR_10, VAR_15) < FUNC_2(VAR_10,
     FUNC_0(VAR_10)->max_file_blocks))
   goto prep_next;

  VAR_21 |= VAR_4;
 }

 if (VAR_20) {
  if (FUNC_1(VAR_10))
   VAR_21 |= VAR_3;

  VAR_22 = FUNC_13(VAR_11, VAR_18,
    VAR_19, VAR_20, VAR_21);
 }

 if (VAR_15 > VAR_16 || VAR_22)
  goto out;

 VAR_18 = FUNC_2(VAR_10, VAR_15);
 VAR_19 = FUNC_2(VAR_10, VAR_14.b_blocknr);
 VAR_20 = VAR_14.b_size;
 VAR_21 = 0;
 if (FUNC_4(&VAR_14))
  VAR_21 = VAR_5;

 VAR_15 += FUNC_17(VAR_10, VAR_20);

prep_next:
 FUNC_5();
 if (FUNC_11(VAR_9))
  VAR_22 = -VAR_1;
 else
  goto next;
out:
 if (VAR_22 == 1)
  VAR_22 = 0;

 FUNC_16(VAR_10);
 return VAR_22;
}
