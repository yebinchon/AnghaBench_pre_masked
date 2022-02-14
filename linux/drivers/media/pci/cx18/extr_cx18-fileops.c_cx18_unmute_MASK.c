
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cx18 {int ana_capturing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cx18*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct cx18*,int ,int,scalar_t__,int) ;

void FUNC_6(struct cx18 *VAR_3)
{
 u32 VAR_4;
 if (FUNC_2(&VAR_3->ana_capturing)) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 != VAR_2) {
   FUNC_4(100, 0);
   FUNC_5(VAR_3, VAR_1, 2, VAR_4, 12);
   FUNC_5(VAR_3, VAR_0, 2, VAR_4, 0);
  } else
   FUNC_1("Can't find valid task handle for unmute\n");
 }
 FUNC_0("Unmute\n");
}
