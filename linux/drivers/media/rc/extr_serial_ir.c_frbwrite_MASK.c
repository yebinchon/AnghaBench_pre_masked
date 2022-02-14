
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ir_raw_event {unsigned int duration; int pulse; } ;
struct TYPE_2__ {int rcdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,struct ir_raw_event*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2, bool VAR_3)
{

 static unsigned int VAR_4, VAR_5, VAR_6;
 struct ir_raw_event VAR_7 = {};

 if (VAR_4 > 0 && VAR_3) {
  VAR_5 += VAR_2;
  if (VAR_5 > 250000) {
   VAR_7.duration = VAR_6;
   VAR_7.pulse = 0;
   FUNC_0(VAR_1.rcdev, &VAR_7);
   VAR_7.duration = VAR_5;
   VAR_7.pulse = 1;
   FUNC_0(VAR_1.rcdev, &VAR_7);
   VAR_4 = 0;
   VAR_5 = 0;
  }
  return;
 }
 if (!VAR_3) {
  if (VAR_4 == 0) {
   if (VAR_2 > 20000000) {
    VAR_6 = VAR_2;
    VAR_4++;
    return;
   }
  } else {
   if (VAR_2 > 20000000) {
    VAR_6 += VAR_5;
    if (VAR_6 > VAR_0)
     VAR_6 = VAR_0;
    VAR_6 += VAR_2;
    if (VAR_6 > VAR_0)
     VAR_6 = VAR_0;
    VAR_5 = 0;
    return;
   }

   VAR_7.duration = VAR_6;
   VAR_7.pulse = 0;
   FUNC_0(VAR_1.rcdev, &VAR_7);
   VAR_7.duration = VAR_5;
   VAR_7.pulse = 1;
   FUNC_0(VAR_1.rcdev, &VAR_7);
   VAR_4 = 0;
   VAR_5 = 0;
  }
 }

 VAR_7.duration = VAR_2;
 VAR_7.pulse = VAR_3;
 FUNC_0(VAR_1.rcdev, &VAR_7);
}
