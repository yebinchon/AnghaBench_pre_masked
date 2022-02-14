
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qbman_swp {int sdq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(struct qbman_swp *VAR_2, u8 VAR_3, int *VAR_4)
{
 u16 VAR_5 = (VAR_2->sdq >> VAR_1) & VAR_0;

 FUNC_0(VAR_3 > 15);
 *VAR_4 = VAR_5 | (1 << VAR_3);
}
