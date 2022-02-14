
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int version; int eee_adv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int) ;
 int FUNC_2 (struct r8152*,int ,int ,int ) ;
 int FUNC_3 (struct r8152*,int) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_3, bool VAR_4)
{
 switch (VAR_3->version) {
 case 136:
 case 135:
 case 130:
  if (VAR_4) {
   FUNC_1(VAR_3, 1);
   FUNC_2(VAR_3, VAR_1, VAR_0,
     VAR_3->eee_adv);
  } else {
   FUNC_1(VAR_3, 0);
   FUNC_2(VAR_3, VAR_1, VAR_0, 0);
  }
  break;
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  if (VAR_4) {
   FUNC_3(VAR_3, 1);
   FUNC_0(VAR_3, VAR_2, VAR_3->eee_adv);
  } else {
   FUNC_3(VAR_3, 0);
   FUNC_0(VAR_3, VAR_2, 0);
  }
  break;
 default:
  break;
 }
}
