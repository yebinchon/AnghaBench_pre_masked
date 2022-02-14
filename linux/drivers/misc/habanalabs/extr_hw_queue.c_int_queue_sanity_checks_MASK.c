
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_hw_queue {int hw_queue_id; int int_queue_len; } ;
struct hl_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct hl_hw_queue*,int ) ;

__attribute__((used)) static int FUNC_2(struct hl_device *VAR_1,
     struct hl_hw_queue *VAR_2,
     int VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_2->int_queue_len);

 if (VAR_4 < VAR_3) {
  FUNC_0(VAR_1->dev, "Queue %d doesn't have room for %d CBs\n",
   VAR_2->hw_queue_id, VAR_3);
  return -VAR_0;
 }

 return 0;
}
