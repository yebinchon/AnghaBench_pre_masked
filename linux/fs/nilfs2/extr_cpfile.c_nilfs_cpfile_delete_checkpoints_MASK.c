
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nilfs_cpfile_header {int ch_ncheckpoints; } ;
struct nilfs_checkpoint {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {size_t mi_entry_size; int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct nilfs_checkpoint*) ;
 int FUNC_8 (struct nilfs_checkpoint*) ;
 scalar_t__ FUNC_9 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_10 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_11 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_12 (struct inode*,struct buffer_head*,void*,int) ;
 int FUNC_13 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct inode*,scalar_t__) ;
 int FUNC_15 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 int FUNC_16 (struct inode*,struct buffer_head**) ;
 int FUNC_17 (struct inode*,scalar_t__) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int ,int ,char*,int,...) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct inode *VAR_4,
        __u64 VAR_5,
        __u64 VAR_6)
{
 struct buffer_head *VAR_7, *VAR_8;
 struct nilfs_cpfile_header *VAR_9;
 struct nilfs_checkpoint *VAR_10;
 size_t VAR_11 = FUNC_0(VAR_4)->mi_entry_size;
 __u64 VAR_12;
 void *VAR_13;
 unsigned long VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 if (FUNC_20(VAR_5 == 0 || VAR_5 > VAR_6)) {
  FUNC_19(VAR_4->i_sb, VAR_3,
     "cannot delete checkpoints: invalid range [%llu, %llu)",
     (unsigned long long)VAR_5, (unsigned long long)VAR_6);
  return -VAR_1;
 }

 FUNC_2(&FUNC_0(VAR_4)->mi_sem);

 VAR_15 = FUNC_16(VAR_4, &VAR_7);
 if (VAR_15 < 0)
  goto out_sem;
 VAR_14 = 0;
 VAR_18 = 0;

 for (VAR_12 = VAR_5; VAR_12 < VAR_6; VAR_12 += VAR_16) {
  VAR_16 = FUNC_13(VAR_4, VAR_12, VAR_6);
  VAR_15 = FUNC_15(VAR_4, VAR_12, 0, &VAR_8);
  if (VAR_15 < 0) {
   if (VAR_15 != -VAR_2)
    break;

   VAR_15 = 0;
   continue;
  }

  VAR_13 = FUNC_3(VAR_8->b_page);
  VAR_10 = FUNC_10(
   VAR_4, VAR_12, VAR_8, VAR_13);
  VAR_17 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++, VAR_10 = (void *)VAR_10 + VAR_11) {
   if (FUNC_9(VAR_10)) {
    VAR_18++;
   } else if (!FUNC_7(VAR_10)) {
    FUNC_8(VAR_10);
    VAR_17++;
   }
  }
  if (VAR_17 > 0) {
   VAR_14 += VAR_17;
   FUNC_6(VAR_8);
   FUNC_18(VAR_4);
   if (!FUNC_17(VAR_4, VAR_12)) {
    VAR_19 =
      FUNC_12(
      VAR_4, VAR_8, VAR_13, VAR_17);
    if (VAR_19 == 0) {

     FUNC_4(VAR_13);
     FUNC_1(VAR_8);
     VAR_15 =
       FUNC_14(
           VAR_4, VAR_12);
     if (VAR_15 == 0)
      continue;
     FUNC_19(VAR_4->i_sb, VAR_3,
        "error %d deleting checkpoint block",
        VAR_15);
     break;
    }
   }
  }

  FUNC_4(VAR_13);
  FUNC_1(VAR_8);
 }

 if (VAR_14 > 0) {
  VAR_13 = FUNC_3(VAR_7->b_page);
  VAR_9 = FUNC_11(VAR_4, VAR_7,
             VAR_13);
  FUNC_5(&VAR_9->ch_ncheckpoints, -(u64)VAR_14);
  FUNC_6(VAR_7);
  FUNC_18(VAR_4);
  FUNC_4(VAR_13);
 }

 FUNC_1(VAR_7);
 if (VAR_18 > 0)
  VAR_15 = -VAR_0;

 out_sem:
 FUNC_21(&FUNC_0(VAR_4)->mi_sem);
 return VAR_15;
}
