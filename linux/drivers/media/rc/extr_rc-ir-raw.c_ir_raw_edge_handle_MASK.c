
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct rc_dev {scalar_t__ timeout; TYPE_1__* raw; } ;
struct ir_raw_event_ctrl {struct rc_dev* dev; } ;
struct ir_raw_event {int timeout; scalar_t__ duration; } ;
typedef int ktime_t ;
struct TYPE_2__ {int edge_spinlock; int edge_handle; int last_event; } ;


 int VAR_0 ;
 struct ir_raw_event_ctrl* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,struct ir_raw_event*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct ir_raw_event_ctrl* VAR_2 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_3)
{
 struct ir_raw_event_ctrl *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_0);
 struct rc_dev *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;
 ktime_t VAR_7;

 FUNC_8(&VAR_5->raw->edge_spinlock, VAR_6);
 VAR_7 = FUNC_4(FUNC_3(), VAR_5->raw->last_event);
 if (FUNC_5(VAR_7) >= VAR_5->timeout) {
  struct ir_raw_event VAR_8 = {
   .timeout = 1,
   .duration = FUNC_5(VAR_7)
  };

  FUNC_2(VAR_5, &VAR_8);
 } else {
  FUNC_6(&VAR_5->raw->edge_handle,
     VAR_1 + FUNC_7(VAR_5->timeout -
           FUNC_5(VAR_7)));
 }
 FUNC_9(&VAR_5->raw->edge_spinlock, VAR_6);

 FUNC_1(VAR_5);
}
