
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lbs_private {scalar_t__ psstate; int resp_idx; int waitq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct lbs_private *VAR_2, u8 VAR_3)
{
 if (VAR_2->psstate == VAR_1)
  VAR_2->psstate = VAR_0;


 FUNC_0(VAR_3 > 1);
 VAR_2->resp_idx = VAR_3;

 FUNC_1(&VAR_2->waitq);
}
