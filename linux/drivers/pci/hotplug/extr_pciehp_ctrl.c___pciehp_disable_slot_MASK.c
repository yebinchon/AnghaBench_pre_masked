
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct controller {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct controller*) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (struct controller*,scalar_t__*) ;
 int FUNC_3 (struct controller*,int) ;
 int FUNC_4 (struct controller*) ;

__attribute__((used)) static int FUNC_5(struct controller *VAR_1, bool VAR_2)
{
 u8 VAR_3 = 0;

 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1, &VAR_3);
  if (!VAR_3) {
   FUNC_1(VAR_1, "Slot(%s): Already disabled\n",
      FUNC_4(VAR_1));
   return -VAR_0;
  }
 }

 FUNC_3(VAR_1, VAR_2);
 return 0;
}
