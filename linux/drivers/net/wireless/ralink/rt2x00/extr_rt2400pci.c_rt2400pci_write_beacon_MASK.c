
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct txentry_desc {int dummy; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {TYPE_1__* queue; } ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct queue_entry*) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_6 (struct queue_entry*) ;

__attribute__((used)) static void FUNC_7(struct queue_entry *VAR_3,
       struct txentry_desc *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_3->queue->rt2x00dev;
 u32 VAR_6;





 VAR_6 = FUNC_4(VAR_5, VAR_0);
 FUNC_2(&VAR_6, VAR_1, 0);
 FUNC_5(VAR_5, VAR_0, VAR_6);

 if (FUNC_6(VAR_3)) {
  FUNC_1(VAR_5, "Fail to map beacon, aborting\n");
  goto out;
 }



 FUNC_2(&VAR_6, VAR_1, 1);



 FUNC_0(VAR_3, VAR_4);




 FUNC_3(VAR_5, VAR_2, VAR_3);
out:



 FUNC_2(&VAR_6, VAR_1, 1);
 FUNC_5(VAR_5, VAR_0, VAR_6);
}
