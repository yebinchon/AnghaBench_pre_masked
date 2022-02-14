
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct controller {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct controller*) ;
 scalar_t__ FUNC_1 (struct controller*) ;
 int FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*,int ) ;
 int FUNC_4 (struct controller*,scalar_t__*) ;
 int FUNC_5 (struct controller*,scalar_t__*) ;
 int FUNC_6 (struct controller*) ;

__attribute__((used)) static int FUNC_7(struct controller *VAR_1)
{
 u8 VAR_2 = 0;

 if (FUNC_0(VAR_1)) {
  FUNC_4(VAR_1, &VAR_2);
  if (VAR_2) {
   FUNC_3(VAR_1, "Slot(%s): Latch open\n",
      FUNC_6(VAR_1));
   return -VAR_0;
  }
 }

 if (FUNC_1(VAR_1)) {
  FUNC_5(VAR_1, &VAR_2);
  if (VAR_2) {
   FUNC_3(VAR_1, "Slot(%s): Already enabled\n",
      FUNC_6(VAR_1));
   return 0;
  }
 }

 return FUNC_2(VAR_1);
}
