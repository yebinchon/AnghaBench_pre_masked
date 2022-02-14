
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_snapshot_list {void* ssl_next; void* ssl_prev; } ;
struct nilfs_cpfile_header {int ch_nsnapshots; struct nilfs_snapshot_list ch_snapshot_list; } ;
struct nilfs_checkpoint {struct nilfs_snapshot_list cp_snapshot_list; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct nilfs_checkpoint*) ;
 int FUNC_11 (struct nilfs_checkpoint*) ;
 scalar_t__ FUNC_12 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_13 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_14 (struct inode*,struct buffer_head*,void*) ;
 struct nilfs_snapshot_list* FUNC_15 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 unsigned long FUNC_16 (struct inode*,scalar_t__) ;
 int FUNC_17 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 int FUNC_18 (struct inode*,struct buffer_head**) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_1, __u64 VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 struct nilfs_cpfile_header *VAR_7;
 struct nilfs_checkpoint *VAR_8;
 struct nilfs_snapshot_list *VAR_9;
 __u64 VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 void *VAR_14;
 int VAR_15;

 if (VAR_2 == 0)
  return -VAR_0;
 FUNC_3(&FUNC_0(VAR_1)->mi_sem);

 VAR_15 = FUNC_17(VAR_1, VAR_2, 0, &VAR_6);
 if (VAR_15 < 0)
  goto out_sem;
 VAR_14 = FUNC_5(VAR_6->b_page);
 VAR_8 = FUNC_13(VAR_1, VAR_2, VAR_6, VAR_14);
 if (FUNC_10(VAR_8)) {
  VAR_15 = -VAR_0;
  FUNC_6(VAR_14);
  goto out_cp;
 }
 if (FUNC_12(VAR_8)) {
  VAR_15 = 0;
  FUNC_6(VAR_14);
  goto out_cp;
 }
 FUNC_6(VAR_14);

 VAR_15 = FUNC_18(VAR_1, &VAR_3);
 if (VAR_15 < 0)
  goto out_cp;
 VAR_14 = FUNC_5(VAR_3->b_page);
 VAR_7 = FUNC_14(VAR_1, VAR_3, VAR_14);
 VAR_9 = &VAR_7->ch_snapshot_list;
 VAR_4 = VAR_3;
 FUNC_4(VAR_4);
 VAR_10 = 0;
 VAR_12 = 0;
 VAR_11 = FUNC_8(VAR_9->ssl_prev);
 while (VAR_11 > VAR_2) {
  VAR_13 = FUNC_16(VAR_1, VAR_11);
  VAR_10 = VAR_11;
  if (VAR_12 != VAR_13) {
   FUNC_6(VAR_14);
   FUNC_1(VAR_4);
   VAR_15 = FUNC_17(VAR_1, VAR_10,
        0, &VAR_4);
   if (VAR_15 < 0)
    goto out_header;
   VAR_14 = FUNC_5(VAR_4->b_page);
  }
  VAR_12 = VAR_13;
  VAR_8 = FUNC_13(
   VAR_1, VAR_10, VAR_4, VAR_14);
  VAR_9 = &VAR_8->cp_snapshot_list;
  VAR_11 = FUNC_8(VAR_9->ssl_prev);
 }
 FUNC_6(VAR_14);

 if (VAR_11 != 0) {
  VAR_15 = FUNC_17(VAR_1, VAR_11, 0,
       &VAR_5);
  if (VAR_15 < 0)
   goto out_curr;
 } else {
  VAR_5 = VAR_3;
  FUNC_4(VAR_5);
 }

 VAR_14 = FUNC_5(VAR_4->b_page);
 VAR_9 = FUNC_15(
  VAR_1, VAR_10, VAR_4, VAR_14);
 VAR_9->ssl_prev = FUNC_2(VAR_2);
 FUNC_6(VAR_14);

 VAR_14 = FUNC_5(VAR_6->b_page);
 VAR_8 = FUNC_13(VAR_1, VAR_2, VAR_6, VAR_14);
 VAR_8->cp_snapshot_list.ssl_next = FUNC_2(VAR_10);
 VAR_8->cp_snapshot_list.ssl_prev = FUNC_2(VAR_11);
 FUNC_11(VAR_8);
 FUNC_6(VAR_14);

 VAR_14 = FUNC_5(VAR_5->b_page);
 VAR_9 = FUNC_15(
  VAR_1, VAR_11, VAR_5, VAR_14);
 VAR_9->ssl_next = FUNC_2(VAR_2);
 FUNC_6(VAR_14);

 VAR_14 = FUNC_5(VAR_3->b_page);
 VAR_7 = FUNC_14(VAR_1, VAR_3, VAR_14);
 FUNC_7(&VAR_7->ch_nsnapshots, 1);
 FUNC_6(VAR_14);

 FUNC_9(VAR_5);
 FUNC_9(VAR_4);
 FUNC_9(VAR_6);
 FUNC_9(VAR_3);
 FUNC_19(VAR_1);

 FUNC_1(VAR_5);

 out_curr:
 FUNC_1(VAR_4);

 out_header:
 FUNC_1(VAR_3);

 out_cp:
 FUNC_1(VAR_6);

 out_sem:
 FUNC_20(&FUNC_0(VAR_1)->mi_sem);
 return VAR_15;
}
