
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {int flags; int entry_idx; TYPE_1__* queue; } ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (int *,int ,int ) ;

void FUNC_6(struct queue_entry *VAR_3)
{
 struct rt2x00_dev *VAR_4 = VAR_3->queue->rt2x00dev;
 u32 VAR_5, VAR_6;





 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_6 = VAR_5;
 FUNC_5(&VAR_6, VAR_1, 0);
 FUNC_3(VAR_4, VAR_0, VAR_6);




 FUNC_1(VAR_4, VAR_3->entry_idx);
 FUNC_0(VAR_2, &VAR_3->flags);




 FUNC_4(VAR_4);



 FUNC_3(VAR_4, VAR_0, VAR_5);
}
