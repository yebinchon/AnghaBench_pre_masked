
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*,int) ;
 int FUNC_6 (struct ivtv*,int) ;
 int FUNC_7 (struct ivtv*,int) ;
 int FUNC_8 (struct ivtv*,int) ;

__attribute__((used)) static int FUNC_9(struct ivtv *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 != 1) {
  FUNC_0("SDA was low at start\n");
  FUNC_6(VAR_1, 1);
  if (!FUNC_8(VAR_1, 1)) {
   FUNC_1("SDA stuck low\n");
   return -VAR_0;
  }
 }
 if (FUNC_2(VAR_1) != 1) {
  FUNC_5(VAR_1, 1);
  if (!FUNC_7(VAR_1, 1)) {
   FUNC_1("SCL stuck low at start\n");
   return -VAR_0;
  }
 }
 FUNC_6(VAR_1, 0);
 FUNC_4(VAR_1);
 return 0;
}
