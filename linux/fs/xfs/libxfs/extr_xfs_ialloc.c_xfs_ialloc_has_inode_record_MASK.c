
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agino_t ;
typedef int uint16_t ;
struct xfs_inobt_rec_incore {scalar_t__ ir_startino; int ir_holemask; } ;
struct xfs_btree_cur {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_btree_cur*,int ,int*) ;
 int FUNC_1 (struct xfs_btree_cur*,struct xfs_inobt_rec_incore*,int*) ;
 int FUNC_2 (struct xfs_btree_cur*,scalar_t__,int ,int*) ;

int
FUNC_3(
 struct xfs_btree_cur *VAR_3,
 xfs_agino_t VAR_4,
 xfs_agino_t VAR_5,
 bool *VAR_6)
{
 struct xfs_inobt_rec_incore VAR_7;
 xfs_agino_t VAR_8;
 uint16_t VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 *VAR_6 = 0;
 VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_2, &VAR_10);
 while (VAR_12 == 0 && VAR_10) {
  VAR_12 = FUNC_1(VAR_3, &VAR_7, &VAR_10);
  if (VAR_12 || VAR_7.ir_startino > VAR_5)
   break;

  VAR_8 = VAR_7.ir_startino;
  VAR_9 = VAR_7.ir_holemask;
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_9 >>= 1,
    VAR_11++, VAR_8 += VAR_1) {
   if (VAR_9 & 1)
    continue;
   if (VAR_8 + VAR_1 > VAR_4 &&
     VAR_8 <= VAR_5) {
    *VAR_6 = 1;
    return 0;
   }
  }

  VAR_12 = FUNC_0(VAR_3, 0, &VAR_10);
 }
 return VAR_12;
}
