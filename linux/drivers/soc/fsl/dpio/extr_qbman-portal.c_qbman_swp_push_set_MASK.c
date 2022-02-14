
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qbman_swp {int sdq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qbman_swp*,int ,int) ;

void FUNC_2(struct qbman_swp *VAR_3, u8 VAR_4, int VAR_5)
{
 u16 VAR_6;

 FUNC_0(VAR_4 > 15);
 if (VAR_5)
  VAR_3->sdq |= 1 << VAR_4;
 else
  VAR_3->sdq &= ~(1 << VAR_4);




 VAR_6 = (VAR_3->sdq >> VAR_2) & VAR_1;
 if (VAR_6 != 0)
  FUNC_1(VAR_3, VAR_0, VAR_3->sdq);
 else
  FUNC_1(VAR_3, VAR_0, 0);
}
