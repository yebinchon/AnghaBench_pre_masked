
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
struct kiocb {scalar_t__ ki_pos; int ki_flags; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {scalar_t__ i_size; int i_mapping; int i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct extent_changeset {int dummy; } ;
struct btrfs_fs_info {TYPE_2__* fs_devices; int sectorsize; } ;
struct btrfs_dio_data {int overwrite; size_t reserve; scalar_t__ unsubmitted_oe_range_start; scalar_t__ unsubmitted_oe_range_end; int member_0; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_9__ {int dio_sem; int runtime_flags; } ;
struct TYPE_8__ {struct btrfs_dio_data* journal_info; } ;
struct TYPE_7__ {int latest_bdev; } ;
struct TYPE_6__ {struct inode* host; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct kiocb*,struct inode*,int ,struct iov_iter*,int ,int *,int ,int) ;
 int FUNC_2 (struct inode*,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (TYPE_4__*,size_t) ;
 int FUNC_4 (struct inode*,struct extent_changeset*,scalar_t__,size_t,int) ;
 int FUNC_5 (struct inode*,struct extent_changeset**,scalar_t__,size_t) ;
 int VAR_8 ;
 struct btrfs_fs_info* FUNC_6 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct btrfs_fs_info*,struct iov_iter*,scalar_t__) ;
 TYPE_3__* VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct extent_changeset*) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 size_t FUNC_15 (struct iov_iter*) ;
 scalar_t__ FUNC_16 (struct iov_iter*) ;
 size_t FUNC_17 (size_t,int ) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static ssize_t FUNC_20(struct kiocb *VAR_11, struct iov_iter *VAR_12)
{
 struct file *VAR_13 = VAR_11->ki_filp;
 struct inode *VAR_14 = VAR_13->f_mapping->host;
 struct btrfs_fs_info *VAR_15 = FUNC_6(VAR_14->i_sb);
 struct btrfs_dio_data VAR_16 = { 0 };
 struct extent_changeset *VAR_17 = ((void*)0);
 loff_t VAR_18 = VAR_11->ki_pos;
 size_t VAR_19 = 0;
 int VAR_20 = 0;
 bool VAR_21 = 1;
 bool VAR_22 = 0;
 ssize_t VAR_23;

 if (FUNC_7(VAR_15, VAR_12, VAR_18))
  return 0;

 FUNC_11(VAR_14);







 VAR_19 = FUNC_15(VAR_12);
 if (FUNC_18(VAR_0,
       &FUNC_0(VAR_14)->runtime_flags))
  FUNC_10(VAR_14->i_mapping, VAR_18,
      VAR_18 + VAR_19 - 1);

 if (FUNC_16(VAR_12) == VAR_7) {





  if (VAR_18 + VAR_19 <= VAR_14->i_size) {
   VAR_16.overwrite = 1;
   FUNC_14(VAR_14);
   VAR_22 = 1;
  } else if (VAR_11->ki_flags & VAR_6) {
   VAR_23 = -VAR_4;
   goto out;
  }
  VAR_23 = FUNC_5(VAR_14, &VAR_17,
         VAR_18, VAR_19);
  if (VAR_23)
   goto out;






  VAR_16.reserve = FUNC_17(VAR_19,
         VAR_15->sectorsize);
  VAR_16.unsubmitted_oe_range_start = (u64)VAR_18;
  VAR_16.unsubmitted_oe_range_end = (u64)VAR_18;
  VAR_10->journal_info = &VAR_16;
  FUNC_8(&FUNC_0(VAR_14)->dio_sem);
 } else if (FUNC_18(VAR_1,
         &FUNC_0(VAR_14)->runtime_flags)) {
  FUNC_12(VAR_14);
  VAR_20 = VAR_2 | VAR_3;
  VAR_21 = 0;
 }

 VAR_23 = FUNC_1(VAR_11, VAR_14,
       VAR_15->fs_devices->latest_bdev,
       VAR_12, VAR_8, ((void*)0),
       VAR_9, VAR_20);
 if (FUNC_16(VAR_12) == VAR_7) {
  FUNC_19(&FUNC_0(VAR_14)->dio_sem);
  VAR_10->journal_info = ((void*)0);
  if (VAR_23 < 0 && VAR_23 != -VAR_5) {
   if (VAR_16.reserve)
    FUNC_4(VAR_14, VAR_17,
     VAR_18, VAR_16.reserve, 1);






   if (VAR_16.unsubmitted_oe_range_start <
       VAR_16.unsubmitted_oe_range_end)
    FUNC_2(VAR_14,
     VAR_16.unsubmitted_oe_range_start,
     VAR_16.unsubmitted_oe_range_end -
     VAR_16.unsubmitted_oe_range_start,
     0);
  } else if (VAR_23 >= 0 && (size_t)VAR_23 < VAR_19)
   FUNC_4(VAR_14, VAR_17,
     VAR_18, VAR_19 - (size_t)VAR_23, 1);
  FUNC_3(FUNC_0(VAR_14), VAR_19);
 }
out:
 if (VAR_21)
  FUNC_12(VAR_14);
 if (VAR_22)
  FUNC_13(VAR_14);

 FUNC_9(VAR_17);
 return VAR_23;
}
