
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int version; int flags; } ;


 int VAR_0 ;




 int FUNC_0 (struct r8152*,int) ;
 int FUNC_1 (struct r8152*) ;
 int FUNC_2 (struct r8152*,int) ;
 int FUNC_3 (struct r8152*,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r8152 *VAR_1)
{
 if (FUNC_4(VAR_0, &VAR_1->flags))
  return;

 FUNC_2(VAR_1, 0);
 FUNC_3(VAR_1, 0);
 FUNC_0(VAR_1, 0);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, 1);

 switch (VAR_1->version) {
 case 131:
 case 130:
  break;
 case 129:
 case 128:
 default:
  FUNC_3(VAR_1, 1);
  break;
 }

 FUNC_2(VAR_1, 1);
}
