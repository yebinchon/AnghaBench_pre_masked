
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {int pulse; int duration; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,struct ir_raw_event*) ;
 int FUNC_2 (char*,int,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2, unsigned long VAR_3)
{
 struct ir_raw_event VAR_4 = {};

 FUNC_2("add flag %d with val %lu\n", VAR_2, VAR_3);





 if (VAR_2) {

  if (VAR_3 > VAR_0 / 2)
   VAR_3 -= VAR_0 / 2;
  else
   VAR_3 = 1;
  VAR_4.pulse = 1;
 } else {
  VAR_3 += VAR_0 / 2;
 }
 VAR_4.duration = FUNC_0(VAR_3);

 FUNC_1(VAR_1, &VAR_4);
}
