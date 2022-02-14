
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_fsm {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct otg_fsm*,int) ;
 int FUNC_2 (struct otg_fsm*,int) ;

__attribute__((used)) static int FUNC_3(struct otg_fsm *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->protocol != VAR_3) {
  FUNC_0("Changing role fsm->protocol= %d; new protocol= %d\n",
   VAR_2->protocol, VAR_3);

  if (VAR_2->protocol == VAR_1)
   VAR_4 = FUNC_2(VAR_2, 0);
  else if (VAR_2->protocol == VAR_0)
   VAR_4 = FUNC_1(VAR_2, 0);
  if (VAR_4)
   return VAR_4;


  if (VAR_3 == VAR_1)
   VAR_4 = FUNC_2(VAR_2, 1);
  else if (VAR_3 == VAR_0)
   VAR_4 = FUNC_1(VAR_2, 1);
  if (VAR_4)
   return VAR_4;

  VAR_2->protocol = VAR_3;
  return 0;
 }

 return 0;
}
