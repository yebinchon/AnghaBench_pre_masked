
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ir_raw_event {int pulse; unsigned int duration; } ;
struct cx88_core {struct cx88_IR* ir; } ;
struct cx88_IR {TYPE_1__* dev; int sampling; } ;
struct TYPE_3__ {scalar_t__ idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct ir_raw_event*) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_4 (unsigned int,scalar_t__) ;

void FUNC_5(struct cx88_core *VAR_3)
{
 struct cx88_IR *VAR_4 = VAR_3->ir;
 u32 VAR_5;
 unsigned int VAR_6, VAR_7;
 struct ir_raw_event VAR_8 = {};

 if (!VAR_4 || !VAR_4->sampling)
  return;






 VAR_5 = FUNC_0(VAR_0);

 if (VAR_5 == 0xff && VAR_4->dev->idle)
  return;

 for (VAR_6 = 32; VAR_6 > 0; VAR_6 -= VAR_7) {
  VAR_8.pulse = VAR_5 & 0x80000000 ? 0 : 1;
  VAR_7 = FUNC_4(VAR_6, 32U - FUNC_1(VAR_8.pulse ? VAR_5 : ~VAR_5));
  VAR_8.duration = (VAR_7 * (VAR_1 / 1000)) / VAR_2;
  FUNC_3(VAR_4->dev, &VAR_8);
  VAR_5 <<= VAR_7;
 }
 FUNC_2(VAR_4->dev);
}
