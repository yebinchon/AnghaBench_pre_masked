
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;
 int FUNC_0 (struct vc_data*,int ) ;
 int FUNC_1 (struct vc_data*,int const) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vc_data*,int const) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct vc_data *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 switch (VAR_1) {
 case 131:

  FUNC_4(&VAR_2, &VAR_3);

  FUNC_5(VAR_3 + 1);
  if (VAR_2 == 1) {
   if (!FUNC_3(VAR_3 + 1, 0)) {
    FUNC_1(VAR_0, 134);
    return;
   }
   FUNC_7(0);
  } else {
   VAR_5 = 0;
   if (!FUNC_3(VAR_3 + 1, 1)) {
    VAR_5 = 1;
    FUNC_5(VAR_5);
   } else {
    FUNC_7(0);
   }
   if (!FUNC_3(VAR_5, 0)) {
    FUNC_1(VAR_0, 134);
    return;
   }
   FUNC_7(0);
  }
  FUNC_6(VAR_0, 128);
  break;
 case 129:
  break;
 case 132:
  FUNC_2(VAR_0);
  break;
 case 130:
  break;
 case 135:
  if (FUNC_0(VAR_0, 0) == -1) {
   FUNC_1(VAR_0, 135);
  } else {
   FUNC_3(0, 0);
   FUNC_7(0);
   FUNC_6(VAR_0, 128);
  }
  break;
 case 134:
  VAR_4 = FUNC_0(VAR_0, 0);
  if (VAR_4 == -1)
   FUNC_2(VAR_0);
  if (VAR_4 == 0) {
   FUNC_1(VAR_0, 134);
  } else {
   FUNC_3(1, 0);
   FUNC_7(0);
   FUNC_6(VAR_0, 128);
  }
  break;
 case 133:
  break;
 case 128:
  FUNC_4(&VAR_2, &VAR_3);
  if (VAR_2 < 2)
   FUNC_1(VAR_0, 135);
  else
   FUNC_6(VAR_0, 128);
  break;
 }
}
