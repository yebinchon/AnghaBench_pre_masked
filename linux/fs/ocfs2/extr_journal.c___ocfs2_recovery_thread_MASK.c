
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int slot_num; int recovery_lock; int recovery_event; int * recovery_thread_task; int journal; int osb_lock; TYPE_1__* sb; int max_slots; struct ocfs2_recovery_map* recovery_map; } ;
struct ocfs2_recovery_map {int* rm_entries; scalar_t__ rm_used; } ;
struct ocfs2_quota_recovery {int dummy; } ;
struct TYPE_2__ {int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ocfs2_quota_recovery*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ocfs2_quota_recovery*) ;
 int FUNC_5 (int *,int) ;
 int* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct ocfs2_quota_recovery* FUNC_13 (struct ocfs2_super*,int) ;
 int FUNC_14 (struct ocfs2_super*) ;
 int FUNC_15 (struct ocfs2_super*) ;
 int FUNC_16 (struct ocfs2_super*) ;
 int FUNC_17 (struct ocfs2_super*,int) ;
 int FUNC_18 (int ,int,int *,int *,struct ocfs2_quota_recovery*,int ) ;
 int FUNC_19 (struct ocfs2_super*,int ) ;
 int FUNC_20 (struct ocfs2_super*,int,int) ;
 int FUNC_21 (struct ocfs2_super*) ;
 int FUNC_22 (struct ocfs2_super*,int) ;
 int FUNC_23 (struct ocfs2_super*,int) ;
 int FUNC_24 (struct ocfs2_super*,int) ;
 int FUNC_25 (struct ocfs2_super*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int,int) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(void *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct ocfs2_super *VAR_13 = VAR_9;
 struct ocfs2_recovery_map *VAR_14 = VAR_13->recovery_map;
 int *VAR_15 = ((void*)0);
 int VAR_16 = 0, VAR_17;
 struct ocfs2_quota_recovery *VAR_18;


 int VAR_19 = FUNC_3(VAR_13->sb,
   VAR_6)
  || FUNC_3(VAR_13->sb,
   VAR_5);

 VAR_10 = FUNC_25(VAR_13);
 if (VAR_10 < 0) {
  goto bail;
 }

 if (VAR_19) {
  VAR_15 = FUNC_6(VAR_13->max_slots, sizeof(int), VAR_3);
  if (!VAR_15) {
   VAR_10 = -VAR_1;
   goto bail;
  }
 }
restart:
 VAR_10 = FUNC_23(VAR_13, 1);
 if (VAR_10 < 0) {
  FUNC_10(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_15(VAR_13);
 if (VAR_10 < 0)
  FUNC_10(VAR_10);


 FUNC_18(VAR_13->journal, VAR_13->slot_num, ((void*)0),
     ((void*)0), ((void*)0), VAR_8);

 FUNC_26(&VAR_13->osb_lock);
 while (VAR_14->rm_used) {


  VAR_11 = VAR_14->rm_entries[0];
  FUNC_27(&VAR_13->osb_lock);
  VAR_12 = FUNC_17(VAR_13, VAR_11);
  FUNC_29(VAR_11, VAR_12);
  if (VAR_12 == -VAR_0) {
   VAR_10 = 0;
   goto skip_recovery;
  }







  if (VAR_19) {
   for (VAR_17 = 0; VAR_17 < VAR_16
     && VAR_15[VAR_17] != VAR_12; VAR_17++)
    ;

   if (VAR_17 == VAR_16)
    VAR_15[VAR_16++] = VAR_12;
  }

  VAR_10 = FUNC_20(VAR_13, VAR_11, VAR_12);
skip_recovery:
  if (!VAR_10) {
   FUNC_22(VAR_13, VAR_11);
  } else {
   FUNC_9(VAR_4,
        "Error %d recovering node %d on device (%u,%u)!\n",
        VAR_10, VAR_11,
        FUNC_1(VAR_13->sb->s_dev), FUNC_2(VAR_13->sb->s_dev));
   FUNC_9(VAR_4, "Volume requires unmount.\n");
  }

  FUNC_26(&VAR_13->osb_lock);
 }
 FUNC_27(&VAR_13->osb_lock);
 FUNC_28(VAR_10);


 VAR_10 = FUNC_14(VAR_13);
 VAR_10 = (VAR_10 == -VAR_2) ? 0 : VAR_10;
 if (VAR_10 < 0)
  FUNC_10(VAR_10);




 if (VAR_19) {
  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   VAR_18 = FUNC_13(VAR_13, VAR_15[VAR_17]);
   if (FUNC_0(VAR_18)) {
    VAR_10 = FUNC_4(VAR_18);
    FUNC_10(VAR_10);
    continue;
   }
   FUNC_18(VAR_13->journal,
     VAR_15[VAR_17],
     ((void*)0), ((void*)0), VAR_18,
     VAR_7);
  }
 }

 FUNC_24(VAR_13, 1);


 FUNC_19(VAR_13, VAR_7);

bail:
 FUNC_11(&VAR_13->recovery_lock);
 if (!VAR_10 && !FUNC_21(VAR_13)) {
  FUNC_12(&VAR_13->recovery_lock);
  goto restart;
 }

 FUNC_16(VAR_13);
 VAR_13->recovery_thread_task = ((void*)0);
 FUNC_8();
 FUNC_30(&VAR_13->recovery_event);

 FUNC_12(&VAR_13->recovery_lock);

 if (VAR_19)
  FUNC_7(VAR_15);




 FUNC_5(((void*)0), VAR_10);
}
