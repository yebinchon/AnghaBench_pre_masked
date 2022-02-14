
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct streamzap_ir {int sum; } ;
struct ir_raw_event {int pulse; int duration; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct streamzap_ir*,struct ir_raw_event) ;

__attribute__((used)) static void FUNC_2(struct streamzap_ir *VAR_1,
          unsigned char VAR_2)
{
 struct ir_raw_event VAR_3 = {};

 VAR_3.pulse = 0;
 VAR_3.duration = ((int) VAR_2) * VAR_0;
 VAR_3.duration += VAR_0 / 2;
 VAR_1->sum += VAR_3.duration;
 VAR_3.duration = FUNC_0(VAR_3.duration);
 FUNC_1(VAR_1, VAR_3);
}
