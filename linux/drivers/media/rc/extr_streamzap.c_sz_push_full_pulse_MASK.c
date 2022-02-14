
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct streamzap_ir {int idle; scalar_t__ sum; int signal_last; int signal_start; } ;
struct ir_raw_event {int pulse; int duration; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct streamzap_ir*,struct ir_raw_event) ;

__attribute__((used)) static void FUNC_4(struct streamzap_ir *VAR_3,
          unsigned char VAR_4)
{
 struct ir_raw_event VAR_5 = {};

 if (VAR_3->idle) {
  int VAR_6;

  VAR_3->signal_last = VAR_3->signal_start;
  VAR_3->signal_start = FUNC_1();

  VAR_6 = FUNC_2(VAR_3->signal_start, VAR_3->signal_last);
  VAR_5.pulse = 0;
  if (VAR_6 > (15 * VAR_2)) {

   VAR_5.duration = VAR_0;
  } else {
   VAR_5.duration = VAR_6;
   VAR_5.duration -= VAR_3->sum;
   VAR_5.duration = FUNC_0(VAR_5.duration);
   VAR_5.duration = (VAR_5.duration > VAR_0) ?
      VAR_0 : VAR_5.duration;
  }
  FUNC_3(VAR_3, VAR_5);

  VAR_3->idle = 0;
  VAR_3->sum = 0;
 }

 VAR_5.pulse = 1;
 VAR_5.duration = ((int) VAR_4) * VAR_1;
 VAR_5.duration += VAR_1 / 2;
 VAR_3->sum += VAR_5.duration;
 VAR_5.duration = FUNC_0(VAR_5.duration);
 VAR_5.duration = (VAR_5.duration > VAR_0) ?
    VAR_0 : VAR_5.duration;
 FUNC_3(VAR_3, VAR_5);
}
