
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct ir_raw_event {int pulse; int duration; } ;
typedef int ktime_t ;
struct TYPE_2__ {int last_event; } ;


 int VAR_0 ;
 int FUNC_0 (struct rc_dev*,struct ir_raw_event*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct rc_dev *VAR_1, bool VAR_2)
{
 ktime_t VAR_3;
 struct ir_raw_event VAR_4 = {};

 if (!VAR_1->raw)
  return -VAR_0;

 VAR_3 = FUNC_1();
 VAR_4.duration = FUNC_3(FUNC_2(VAR_3, VAR_1->raw->last_event));
 VAR_4.pulse = !VAR_2;

 return FUNC_0(VAR_1, &VAR_4);
}
