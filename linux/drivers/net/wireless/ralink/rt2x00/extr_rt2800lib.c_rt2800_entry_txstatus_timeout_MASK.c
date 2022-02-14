
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {int flags; } ;
struct queue_entry {TYPE_1__* queue; int entry_idx; scalar_t__ last_action; int flags; } ;
struct TYPE_2__ {int qid; int rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline bool FUNC_5(struct rt2x00_dev *VAR_3,
       struct queue_entry *VAR_4)
{
 bool VAR_5;
 unsigned long VAR_6;

 if (!FUNC_2(VAR_1, &VAR_4->flags))
  return 0;

 if (FUNC_2(VAR_0, &VAR_3->flags))
  VAR_6 = FUNC_0(50);
 else
  VAR_6 = FUNC_0(2000);

 VAR_5 = FUNC_3(VAR_2, VAR_4->last_action + VAR_6);
 if (FUNC_4(VAR_5))
  FUNC_1(VAR_4->queue->rt2x00dev,
      "TX status timeout for entry %d in queue %d\n",
      VAR_4->entry_idx, VAR_4->queue->qid);
 return VAR_5;
}
