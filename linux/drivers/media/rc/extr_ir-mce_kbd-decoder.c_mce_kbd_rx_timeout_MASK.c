
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int expires; } ;
struct TYPE_7__ {int keylock; TYPE_1__ rx_timeout; } ;
struct ir_raw_event_ctrl {TYPE_3__ mce_kbd; TYPE_2__* dev; } ;
struct TYPE_8__ {int rx_timeout; } ;
struct TYPE_6__ {int input_dev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct ir_raw_event_ctrl* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,unsigned char,int ) ;
 int FUNC_3 (int ) ;
 unsigned char* VAR_1 ;
 TYPE_4__ VAR_2 ;
 struct ir_raw_event_ctrl* VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct ir_raw_event_ctrl *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2.rx_timeout);
 unsigned char VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_0(&VAR_5->dev->dev, "timer callback clearing all keys\n");

 FUNC_4(&VAR_5->mce_kbd.keylock, VAR_7);

 if (FUNC_6(VAR_5->mce_kbd.rx_timeout.expires)) {
  for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
   VAR_6 = VAR_1[VAR_0 + VAR_8];
   FUNC_2(VAR_5->dev->input_dev, VAR_6, 0);
  }

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_2(VAR_5->dev->input_dev, VAR_1[VAR_8],
      0);

  FUNC_3(VAR_5->dev->input_dev);
 }
 FUNC_5(&VAR_5->mce_kbd.keylock, VAR_7);
}
