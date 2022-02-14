
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int sample_period; } ;
struct ite_dev {int rdev; TYPE_1__ params; } ;
struct ir_raw_event {int pulse; void* duration; } ;


 void* FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned long*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned long*,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ir_raw_event*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(struct ite_dev *VAR_0, const u8 * VAR_1, int
        VAR_2)
{
 u32 VAR_3;
 unsigned long *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;
 struct ir_raw_event VAR_8 = {};

 if (VAR_2 == 0)
  return;

 VAR_3 = VAR_0->params.sample_period;
 VAR_4 = (unsigned long *)VAR_1;
 VAR_7 = VAR_2 << 3;
 VAR_5 = FUNC_1(VAR_4, VAR_7, 0);
 if (VAR_5 > 0) {
  VAR_8.pulse = 1;
  VAR_8.duration =
      FUNC_0(VAR_5, VAR_3);
  FUNC_4(VAR_0->rdev, &VAR_8);
 }

 while (VAR_5 < VAR_7) {
  VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5 + 1);
  VAR_8.pulse = 0;
  VAR_8.duration = FUNC_0(VAR_6 - VAR_5, VAR_3);
  FUNC_4(VAR_0->rdev, &VAR_8);

  if (VAR_6 < VAR_7) {
   VAR_5 =
       FUNC_1(VAR_4,
           VAR_7,
           VAR_6 + 1);
   VAR_8.pulse = 1;
   VAR_8.duration =
       FUNC_0(VAR_5 - VAR_6,
        VAR_3);
   FUNC_4
       (VAR_0->rdev, &VAR_8);
  } else
   VAR_5 = VAR_7;
 }

 FUNC_3(VAR_0->rdev);

 FUNC_5("decoded %d bytes.", VAR_2);
}
