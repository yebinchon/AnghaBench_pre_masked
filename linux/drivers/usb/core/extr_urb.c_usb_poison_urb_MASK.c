
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int use_count; int ep; int dev; int reject; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct urb*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct urb *VAR_2)
{
 FUNC_2();
 if (!VAR_2)
  return;
 FUNC_0(&VAR_2->reject);

 if (!VAR_2->dev || !VAR_2->ep)
  return;

 FUNC_3(VAR_2, -VAR_0);
 FUNC_4(VAR_1, FUNC_1(&VAR_2->use_count) == 0);
}
