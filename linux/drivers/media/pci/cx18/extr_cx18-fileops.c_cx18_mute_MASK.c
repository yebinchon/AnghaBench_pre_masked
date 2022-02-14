
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx18 {int ana_capturing; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*,int ,int,scalar_t__,int) ;

void FUNC_5(struct cx18 *VAR_2)
{
 u32 VAR_3;
 if (FUNC_2(&VAR_2->ana_capturing)) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 != VAR_1)
   FUNC_4(VAR_2, VAR_0, 2, VAR_3, 1);
  else
   FUNC_1("Can't find valid task handle for mute\n");
 }
 FUNC_0("Mute\n");
}
