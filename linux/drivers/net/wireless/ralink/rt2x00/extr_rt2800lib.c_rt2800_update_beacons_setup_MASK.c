
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rt2x00_dev {struct data_queue* bcn; } ;
struct queue_entry {int entry_idx; int flags; } ;
struct data_queue {int limit; struct queue_entry* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_5)
{
 struct data_queue *VAR_6 = VAR_5->bcn;
 struct queue_entry *VAR_7;
 int VAR_8, VAR_9 = 0;
 u64 VAR_10, VAR_11 = 0;
 u32 VAR_12;




 for (VAR_8 = 0; VAR_8 < VAR_6->limit; VAR_8++) {
  VAR_7 = &VAR_6->entries[VAR_8];
  if (!FUNC_4(VAR_2, &VAR_7->flags))
   continue;
  VAR_10 = FUNC_0(VAR_5, VAR_7->entry_idx);
  VAR_11 |= VAR_10 << (8 * VAR_9);
  VAR_9++;
 }

 FUNC_2(VAR_5, VAR_0, (u32) VAR_11);
 FUNC_2(VAR_5, VAR_1, (u32) (VAR_11 >> 32));




 VAR_12 = FUNC_1(VAR_5, VAR_3);
 FUNC_3(&VAR_12, VAR_4,
      VAR_9 > 0 ? VAR_9 - 1 : 0);
 FUNC_2(VAR_5, VAR_3, VAR_12);
}
