
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schid; int schib; } ;
struct schib {int dummy; } ;
struct irb {int dummy; } ;
typedef int schib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct subchannel*,struct schib*) ;
 int FUNC_1 (struct subchannel*,struct schib*) ;
 int FUNC_2 (struct schib*) ;
 int FUNC_3 (int *,struct schib*,int) ;
 int FUNC_4 (int ,struct schib*) ;
 scalar_t__ FUNC_5 (int ,struct schib*) ;
 int FUNC_6 (int ,struct irb*) ;
 int FUNC_7 (int) ;

int FUNC_8(struct subchannel *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 struct schib VAR_7;
 struct irb VAR_8;

 if (FUNC_5(VAR_3->schid, &VAR_7) || !FUNC_2(&VAR_7))
  return -VAR_2;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {

  FUNC_0(VAR_3, &VAR_7);
  VAR_4 = FUNC_4(VAR_3->schid, &VAR_7);
  if (VAR_4 < 0)
   return VAR_4;
  switch (VAR_4) {
  case 0:
   if (FUNC_5(VAR_3->schid, &VAR_7) ||
       !FUNC_2(&VAR_7))
    return -VAR_2;
   if (FUNC_1(VAR_3, &VAR_7)) {

    FUNC_3(&VAR_3->schib, &VAR_7, sizeof(VAR_7));
    return 0;
   }
   VAR_6 = -VAR_0;
   break;
  case 1:
   VAR_6 = -VAR_1;
   if (FUNC_6(VAR_3->schid, &VAR_8))
    return VAR_6;
   break;
  case 2:
   FUNC_7(100);
   VAR_6 = -VAR_1;
   break;
  case 3:
   return -VAR_2;
  }
 }
 return VAR_6;
}
