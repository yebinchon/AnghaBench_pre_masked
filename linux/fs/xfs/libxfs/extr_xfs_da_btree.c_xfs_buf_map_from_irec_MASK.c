
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_buf_map {int bm_len; int bm_bn; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; int br_blockcount; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_mount*,scalar_t__) ;
 struct xfs_buf_map* FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_mount *VAR_4,
 struct xfs_buf_map **VAR_5,
 int *VAR_6,
 struct xfs_bmbt_irec *VAR_7,
 int VAR_8)
{
 struct xfs_buf_map *VAR_9;
 int VAR_10;

 FUNC_0(*VAR_6 == 1);
 FUNC_0(VAR_8 >= 1);

 if (VAR_8 > 1) {
  VAR_9 = FUNC_3(VAR_8 * sizeof(struct xfs_buf_map),
      VAR_3);
  if (!VAR_9)
   return -VAR_1;
  *VAR_5 = VAR_9;
 }

 *VAR_6 = VAR_8;
 VAR_9 = *VAR_5;
 for (VAR_10 = 0; VAR_10 < *VAR_6; VAR_10++) {
  FUNC_0(VAR_7[VAR_10].br_startblock != VAR_0 &&
         VAR_7[VAR_10].br_startblock != VAR_2);
  VAR_9[VAR_10].bm_bn = FUNC_2(VAR_4, VAR_7[VAR_10].br_startblock);
  VAR_9[VAR_10].bm_len = FUNC_1(VAR_4, VAR_7[VAR_10].br_blockcount);
 }
 return 0;
}
