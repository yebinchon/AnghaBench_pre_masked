
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qbman_eq_desc {int verb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct qbman_eq_desc *VAR_3, int VAR_4)
{
 VAR_3->verb &= ~(1 << VAR_0);
 if (VAR_4)
  VAR_3->verb |= VAR_2;
 else
  VAR_3->verb |= VAR_1;
}
