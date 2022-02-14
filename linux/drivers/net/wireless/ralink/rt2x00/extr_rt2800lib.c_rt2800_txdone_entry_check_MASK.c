
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct queue_entry {int entry_idx; TYPE_1__* queue; int flags; } ;
typedef int __le32 ;
struct TYPE_2__ {int qid; int rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (struct queue_entry*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct queue_entry *VAR_8, u32 VAR_9)
{
 __le32 *VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;






 if (FUNC_4(VAR_0, &VAR_8->flags))
  return 0;

 VAR_12 = FUNC_3(VAR_9, VAR_7);
 VAR_13 = FUNC_3(VAR_9, VAR_5);
 VAR_14 = FUNC_3(VAR_9, VAR_4);
 VAR_18 = FUNC_3(VAR_9, VAR_6);





 VAR_10 = FUNC_0(VAR_8);

 VAR_11 = FUNC_2(VAR_10, 1);
 VAR_15 = FUNC_3(VAR_11, VAR_3);
 VAR_16 = FUNC_3(VAR_11, VAR_1);
 VAR_17 = FUNC_3(VAR_11, VAR_2);

 if (VAR_12 != VAR_15 || VAR_13 != VAR_16 || (!VAR_18 && VAR_14 != VAR_17)) {
  FUNC_1(VAR_8->queue->rt2x00dev,
      "TX status report missed for queue %d entry %d\n",
      VAR_8->queue->qid, VAR_8->entry_idx);
  return 0;
 }

 return 1;
}
