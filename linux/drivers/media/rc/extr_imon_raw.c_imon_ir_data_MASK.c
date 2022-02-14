
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ir_raw_event {int pulse; int duration; } ;
struct imon {TYPE_1__* rcdev; int dev; int ir_buf; } ;
struct TYPE_4__ {int idle; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_7(struct imon *VAR_1)
{
 struct ir_raw_event VAR_2 = {};
 u64 VAR_3 = FUNC_1(VAR_1->ir_buf);
 u8 VAR_4 = VAR_3 & 0xff;
 int VAR_5 = 40;
 int VAR_6;

 if (VAR_4 == 0xff)
  return;

 FUNC_2(VAR_1->dev, "data: %*ph", 8, &VAR_1->ir_buf);





 VAR_3 >>= 24;

 do {
  VAR_6 = FUNC_3(VAR_3 & (FUNC_0(VAR_5) - 1));
  if (VAR_6 < VAR_5) {
   FUNC_2(VAR_1->dev, "pulse: %d bits", VAR_5 - VAR_6);
   VAR_2.pulse = 1;
   VAR_2.duration = (VAR_5 - VAR_6) * VAR_0;
   FUNC_6(VAR_1->rcdev, &VAR_2);

   if (VAR_6 == 0)
    break;

   VAR_5 = VAR_6;
  }






  VAR_6 = FUNC_3(~VAR_3 & (FUNC_0(VAR_5) - 1));
  FUNC_2(VAR_1->dev, "space: %d bits", VAR_5 - VAR_6);

  VAR_2.pulse = 0;
  VAR_2.duration = (VAR_5 - VAR_6) * VAR_0;
  FUNC_6(VAR_1->rcdev, &VAR_2);

  VAR_5 = VAR_6;
 } while (VAR_5 > 0);

 if (VAR_4 == 0x0a && !VAR_1->rcdev->idle) {
  FUNC_5(VAR_1->rcdev, 1);
  FUNC_4(VAR_1->rcdev);
 }
}
