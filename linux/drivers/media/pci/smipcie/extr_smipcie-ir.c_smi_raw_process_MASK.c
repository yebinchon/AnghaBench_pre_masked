
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rc_dev {int const rx_resolution; } ;
struct ir_raw_event {int pulse; int duration; } ;


 int FUNC_0 (struct rc_dev*,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_0, const u8 *VAR_1,
       const u8 VAR_2)
{
 struct ir_raw_event VAR_3 = {};
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_1[VAR_4] & 0x7f) {
   VAR_3.pulse = (VAR_1[VAR_4] & 0x80) == 0;
   VAR_3.duration = ((VAR_1[VAR_4] & 0x7f) +
      (VAR_3.pulse ? 0 : -1)) *
      VAR_0->rx_resolution;
   FUNC_0(VAR_0, &VAR_3);
  }
 }
}
