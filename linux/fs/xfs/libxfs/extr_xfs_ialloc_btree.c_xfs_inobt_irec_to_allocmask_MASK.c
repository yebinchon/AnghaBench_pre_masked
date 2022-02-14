
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint ;
struct xfs_inobt_rec_incore {int ir_holemask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int) ;

uint64_t
FUNC_2(
 struct xfs_inobt_rec_incore *VAR_3)
{
 uint64_t VAR_4 = 0;
 uint64_t VAR_5;
 int VAR_6;
 uint VAR_7;






 VAR_5 = (1 << VAR_2) - 1;







 VAR_7 = ~VAR_3->ir_holemask & ((1 << VAR_1) - 1);







 VAR_6 = FUNC_1(&VAR_7, 1, 0);
 while (VAR_6 != -1) {
  FUNC_0(VAR_6 < (sizeof(VAR_3->ir_holemask) * VAR_0));

  VAR_4 |= (VAR_5 <<
      (VAR_6 * VAR_2));

  VAR_6 = FUNC_1(&VAR_7, 1, VAR_6 + 1);
 }

 return VAR_4;
}
