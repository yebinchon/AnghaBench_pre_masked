
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_hw_queue {int queue_type; int valid; int hw_queue_id; } ;
struct hl_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_1 (struct hl_device*,struct hl_hw_queue*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct hl_device*,struct hl_hw_queue*) ;
 int FUNC_4 (struct hl_device*,struct hl_hw_queue*) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_3, struct hl_hw_queue *VAR_4,
   u32 VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_2 > VAR_1);

 VAR_4->hw_queue_id = VAR_5;

 switch (VAR_4->queue_type) {
 case 130:
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  break;

 case 129:
  VAR_6 = FUNC_4(VAR_3, VAR_4);
  break;

 case 131:
  VAR_6 = FUNC_1(VAR_3, VAR_4);
  break;

 case 128:
  VAR_4->valid = 0;
  return 0;

 default:
  FUNC_2(VAR_3->dev, "wrong queue type %d during init\n",
   VAR_4->queue_type);
  VAR_6 = -VAR_0;
  break;
 }

 if (VAR_6)
  return VAR_6;

 VAR_4->valid = 1;

 return 0;
}
