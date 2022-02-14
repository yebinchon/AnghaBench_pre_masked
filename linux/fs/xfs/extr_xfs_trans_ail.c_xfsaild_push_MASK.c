
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_mount_t ;
typedef void* xfs_lsn_t ;
struct xfs_log_item {void* li_lsn; } ;
struct xfs_ail_cursor {int dummy; } ;
struct xfs_ail {void* ail_last_pushed_lsn; scalar_t__ ail_log_flush; int ail_buf_list; int ail_lock; void* ail_target_prev; void* ail_target; int * ail_mount; } ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 scalar_t__ FUNC_1 (void*,void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xfs_log_item*) ;
 int FUNC_8 (struct xfs_log_item*) ;
 int FUNC_9 (struct xfs_log_item*) ;
 int FUNC_10 (struct xfs_log_item*) ;
 scalar_t__ FUNC_11 (struct xfs_ail*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct xfs_ail_cursor*) ;
 struct xfs_log_item* FUNC_15 (struct xfs_ail*,struct xfs_ail_cursor*,void*) ;
 struct xfs_log_item* FUNC_16 (struct xfs_ail*,struct xfs_ail_cursor*) ;
 int FUNC_17 (struct xfs_ail*,struct xfs_log_item*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static long
FUNC_18(
 struct xfs_ail *VAR_7)
{
 xfs_mount_t *VAR_8 = VAR_7->ail_mount;
 struct xfs_ail_cursor VAR_9;
 struct xfs_log_item *VAR_10;
 xfs_lsn_t VAR_11;
 xfs_lsn_t VAR_12;
 long VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;






 if (VAR_7->ail_log_flush && VAR_7->ail_last_pushed_lsn == 0 &&
     (!FUNC_3(&VAR_7->ail_buf_list) ||
      FUNC_11(VAR_7))) {
  VAR_7->ail_log_flush = 0;

  FUNC_2(VAR_8, VAR_2);
  FUNC_13(VAR_8, VAR_0);
 }

 FUNC_5(&VAR_7->ail_lock);


 FUNC_4();
 VAR_12 = VAR_7->ail_target;
 VAR_7->ail_target_prev = VAR_12;

 VAR_10 = FUNC_15(VAR_7, &VAR_9, VAR_7->ail_last_pushed_lsn);
 if (!VAR_10) {




  FUNC_14(&VAR_9);
  FUNC_6(&VAR_7->ail_lock);
  goto out_done;
 }

 FUNC_2(VAR_8, VAR_1);

 VAR_11 = VAR_10->li_lsn;
 while ((FUNC_1(VAR_10->li_lsn, VAR_12) <= 0)) {
  int VAR_17;






  VAR_17 = FUNC_17(VAR_7, VAR_10);
  switch (VAR_17) {
  case 128:
   FUNC_2(VAR_8, VAR_6);
   FUNC_10(VAR_10);

   VAR_7->ail_last_pushed_lsn = VAR_11;
   break;

  case 131:
   FUNC_2(VAR_8, VAR_3);
   FUNC_7(VAR_10);

   VAR_15++;
   VAR_7->ail_last_pushed_lsn = VAR_11;
   break;

  case 129:
   FUNC_2(VAR_8, VAR_5);
   FUNC_9(VAR_10);

   VAR_14++;
   VAR_7->ail_log_flush++;
   break;
  case 130:
   FUNC_2(VAR_8, VAR_4);
   FUNC_8(VAR_10);

   VAR_14++;
   break;
  default:
   FUNC_0(0);
   break;
  }

  VAR_16++;
  if (VAR_14 > 100)
   break;

  VAR_10 = FUNC_16(VAR_7, &VAR_9);
  if (VAR_10 == ((void*)0))
   break;
  VAR_11 = VAR_10->li_lsn;
 }
 FUNC_14(&VAR_9);
 FUNC_6(&VAR_7->ail_lock);

 if (FUNC_12(&VAR_7->ail_buf_list))
  VAR_7->ail_log_flush++;

 if (!VAR_16 || FUNC_1(VAR_11, VAR_12) >= 0) {
out_done:





  VAR_13 = 50;
  VAR_7->ail_last_pushed_lsn = 0;
 } else if (((VAR_14 + VAR_15) * 100) / VAR_16 > 90) {
  VAR_13 = 20;
  VAR_7->ail_last_pushed_lsn = 0;
 } else {



  VAR_13 = 10;
 }

 return VAR_13;
}
