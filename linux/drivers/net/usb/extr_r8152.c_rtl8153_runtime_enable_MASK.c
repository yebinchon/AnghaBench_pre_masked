
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int version; } ;






 int FUNC_0 (struct r8152*,int) ;
 int FUNC_1 (struct r8152*,int) ;
 int FUNC_2 (struct r8152*,int) ;
 int FUNC_3 (struct r8152*,int) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0, 0);
  FUNC_2(VAR_0, 0);
  FUNC_0(VAR_0, 1);
  FUNC_3(VAR_0, 1);
 } else {
  FUNC_3(VAR_0, 0);
  FUNC_0(VAR_0, 0);

  switch (VAR_0->version) {
  case 131:
  case 130:
   break;
  case 129:
  case 128:
  default:
   FUNC_2(VAR_0, 1);
   break;
  }

  FUNC_1(VAR_0, 1);
 }
}
