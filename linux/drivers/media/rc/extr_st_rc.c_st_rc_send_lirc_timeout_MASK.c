
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int timeout; } ;
struct ir_raw_event {int timeout; int duration; } ;


 int FUNC_0 (struct rc_dev*,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_0)
{
 struct ir_raw_event VAR_1 = { .timeout = 1, .duration = VAR_0->timeout };
 FUNC_0(VAR_0, &VAR_1);
}
