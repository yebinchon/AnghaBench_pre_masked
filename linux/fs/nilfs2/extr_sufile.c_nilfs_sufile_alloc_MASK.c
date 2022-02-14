
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_sufile_info {int allocmax; int allocmin; int ncleansegs; } ;
struct nilfs_sufile_header {int sh_last_alloc; int sh_ndirtysegs; int sh_ncleansegs; } ;
struct nilfs_segment_usage {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {size_t mi_entry_size; int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct nilfs_sufile_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct nilfs_segment_usage*) ;
 int FUNC_13 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_14 (struct inode*,int,struct buffer_head*,void*) ;
 int FUNC_15 (struct inode*,struct buffer_head**) ;
 unsigned long FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,int,int,struct buffer_head**) ;
 unsigned long FUNC_18 (struct inode*,int,int) ;
 int FUNC_19 (struct inode*,int) ;
 int FUNC_20 (struct inode*,int,unsigned long) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct inode *VAR_1, __u64 *VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4;
 struct nilfs_sufile_header *VAR_5;
 struct nilfs_segment_usage *VAR_6;
 struct nilfs_sufile_info *VAR_7 = FUNC_1(VAR_1);
 size_t VAR_8 = FUNC_0(VAR_1)->mi_entry_size;
 __u64 VAR_9, VAR_10, VAR_11;
 void *VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;

 FUNC_5(&FUNC_0(VAR_1)->mi_sem);

 VAR_16 = FUNC_15(VAR_1, &VAR_3);
 if (VAR_16 < 0)
  goto out_sem;
 VAR_12 = FUNC_6(VAR_3->b_page);
 VAR_5 = VAR_12 + FUNC_2(VAR_3);
 VAR_11 = FUNC_9(VAR_5->sh_last_alloc);
 FUNC_7(VAR_12);

 VAR_13 = FUNC_16(VAR_1);
 VAR_10 = VAR_7->allocmax;
 VAR_9 = VAR_11 + 1;
 if (VAR_9 < VAR_7->allocmin || VAR_9 > VAR_7->allocmax)
  VAR_9 = VAR_7->allocmin;

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15 += VAR_14) {
  if (VAR_9 > VAR_10) {
   if (VAR_15 < VAR_7->allocmax - VAR_7->allocmin + 1) {





    VAR_9 = VAR_7->allocmin;
    VAR_10 = VAR_11;
   } else if (VAR_9 > VAR_7->allocmin &&
       VAR_7->allocmax + 1 < VAR_13) {
    VAR_9 = VAR_7->allocmax + 1;
    VAR_10 = VAR_13 - 1;
   } else if (VAR_7->allocmin > 0) {
    VAR_9 = 0;
    VAR_10 = VAR_7->allocmin - 1;
   } else {
    break;
   }
  }
  FUNC_20(VAR_1, VAR_9, VAR_15);
  VAR_16 = FUNC_17(VAR_1, VAR_9, 1,
          &VAR_4);
  if (VAR_16 < 0)
   goto out_header;
  VAR_12 = FUNC_6(VAR_4->b_page);
  VAR_6 = FUNC_14(
   VAR_1, VAR_9, VAR_4, VAR_12);

  VAR_14 = FUNC_18(
   VAR_1, VAR_9, VAR_10);
  for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++, VAR_6 = (void *)VAR_6 + VAR_8, VAR_9++) {
   if (!FUNC_12(VAR_6))
    continue;

   FUNC_13(VAR_6);
   FUNC_7(VAR_12);

   VAR_12 = FUNC_6(VAR_3->b_page);
   VAR_5 = VAR_12 + FUNC_2(VAR_3);
   FUNC_8(&VAR_5->sh_ncleansegs, -1);
   FUNC_8(&VAR_5->sh_ndirtysegs, 1);
   VAR_5->sh_last_alloc = FUNC_4(VAR_9);
   FUNC_7(VAR_12);

   VAR_7->ncleansegs--;
   FUNC_10(VAR_3);
   FUNC_10(VAR_4);
   FUNC_11(VAR_1);
   FUNC_3(VAR_4);
   *VAR_2 = VAR_9;

   FUNC_19(VAR_1, VAR_9);

   goto out_header;
  }

  FUNC_7(VAR_12);
  FUNC_3(VAR_4);
 }


 VAR_16 = -VAR_0;

 out_header:
 FUNC_3(VAR_3);

 out_sem:
 FUNC_21(&FUNC_0(VAR_1)->mi_sem);
 return VAR_16;
}
