
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {int ki_hint; int ki_flags; scalar_t__ ki_pos; TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode_info {int * i_gc_rwsem; } ;
struct address_space {struct inode* host; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef enum rw_hint { ____Placeholder_rw_hint } rw_hint ;
struct TYPE_6__ {int whint_mode; } ;
struct TYPE_5__ {int s_bdev; } ;
struct TYPE_4__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 TYPE_3__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct kiocb*,struct inode*,int ,struct iov_iter*,int ,int *,int ,int) ;
 int FUNC_4 (struct inode*,struct kiocb*,struct iov_iter*) ;
 int FUNC_5 (struct inode*,struct iov_iter*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (struct inode*,struct kiocb*,struct iov_iter*) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,int) ;
 int FUNC_10 (struct address_space*,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 size_t FUNC_11 (struct iov_iter*) ;
 int FUNC_12 (struct iov_iter*) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*,scalar_t__,size_t,int) ;
 int FUNC_15 (struct inode*,scalar_t__,size_t,int,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static ssize_t FUNC_17(struct kiocb *VAR_13, struct iov_iter *VAR_14)
{
 struct address_space *VAR_15 = VAR_13->ki_filp->f_mapping;
 struct inode *VAR_16 = VAR_15->host;
 struct f2fs_sb_info *VAR_17 = FUNC_1(VAR_16);
 struct f2fs_inode_info *VAR_18 = FUNC_0(VAR_16);
 size_t VAR_19 = FUNC_11(VAR_14);
 loff_t VAR_20 = VAR_13->ki_pos;
 int VAR_21 = FUNC_12(VAR_14);
 int VAR_22;
 enum rw_hint VAR_23 = VAR_13->ki_hint;
 int VAR_24 = FUNC_2(VAR_17).whint_mode;
 bool VAR_25;

 VAR_22 = FUNC_5(VAR_16, VAR_14, VAR_20);
 if (VAR_22)
  return VAR_22 < 0 ? VAR_22 : 0;

 if (FUNC_8(VAR_16, VAR_13, VAR_14))
  return 0;

 VAR_25 = FUNC_4(VAR_16, VAR_13, VAR_14);

 FUNC_14(VAR_16, VAR_20, VAR_19, VAR_21);

 if (VAR_21 == VAR_8 && VAR_24 == VAR_7)
  VAR_13->ki_hint = VAR_9;

 if (VAR_13->ki_flags & VAR_5) {
  if (!FUNC_7(&VAR_18->i_gc_rwsem[VAR_21])) {
   VAR_13->ki_hint = VAR_23;
   VAR_22 = -VAR_3;
   goto out;
  }
  if (VAR_25 && !FUNC_7(&VAR_18->i_gc_rwsem[VAR_6])) {
   FUNC_16(&VAR_18->i_gc_rwsem[VAR_21]);
   VAR_13->ki_hint = VAR_23;
   VAR_22 = -VAR_3;
   goto out;
  }
 } else {
  FUNC_6(&VAR_18->i_gc_rwsem[VAR_21]);
  if (VAR_25)
   FUNC_6(&VAR_18->i_gc_rwsem[VAR_6]);
 }

 VAR_22 = FUNC_3(VAR_13, VAR_16, VAR_16->i_sb->s_bdev,
   VAR_14, VAR_21 == VAR_8 ? VAR_12 :
   VAR_11, ((void*)0), VAR_10,
   VAR_1 | VAR_2);

 if (VAR_25)
  FUNC_16(&VAR_18->i_gc_rwsem[VAR_6]);

 FUNC_16(&VAR_18->i_gc_rwsem[VAR_21]);

 if (VAR_21 == VAR_8) {
  if (VAR_24 == VAR_7)
   VAR_13->ki_hint = VAR_23;
  if (VAR_22 > 0) {
   FUNC_9(FUNC_1(VAR_16), VAR_0,
         VAR_22);
   if (!VAR_25)
    FUNC_13(VAR_16, VAR_4);
  } else if (VAR_22 < 0) {
   FUNC_10(VAR_15, VAR_20 + VAR_19);
  }
 }

out:
 FUNC_15(VAR_16, VAR_20, VAR_19, VAR_21, VAR_22);

 return VAR_22;
}
