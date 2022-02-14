
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {int entry_idx; TYPE_1__* queue; } ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct queue_entry *VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_2->queue->rt2x00dev;
 u32 VAR_4, VAR_5;





 VAR_4 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = VAR_4;
 FUNC_1(&VAR_5, VAR_1, 0);
 FUNC_3(VAR_3, VAR_0, VAR_5);




 FUNC_3(VAR_3,
      FUNC_0(VAR_2->entry_idx), 0);




 FUNC_3(VAR_3, VAR_0, VAR_4);
}
