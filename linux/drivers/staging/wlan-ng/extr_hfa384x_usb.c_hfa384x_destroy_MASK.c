
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hfa384x {scalar_t__ state; int authq; int * scanresults; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hfa384x*) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (int *) ;

void FUNC_4(struct hfa384x *VAR_2)
{
 struct sk_buff *VAR_3;

 if (VAR_2->state == VAR_1)
  FUNC_1(VAR_2);
 VAR_2->state = VAR_0;

 FUNC_2(VAR_2->scanresults);
 VAR_2->scanresults = ((void*)0);


 while ((VAR_3 = FUNC_3(&VAR_2->authq)))
  FUNC_0(VAR_3);
}
