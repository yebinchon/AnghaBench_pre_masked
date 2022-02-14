
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {scalar_t__ bp_index; int bp_bh; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nilfs_btree_path*,int) ;
 int FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct nilfs_bmap *VAR_0,
        struct nilfs_btree_path *VAR_1,
        int VAR_2, __u64 VAR_3)
{
 if (VAR_2 < FUNC_4(VAR_0) - 1) {
  do {
   FUNC_5(
    FUNC_2(VAR_1, VAR_2),
    VAR_1[VAR_2].bp_index, VAR_3);
   if (!FUNC_0(VAR_1[VAR_2].bp_bh))
    FUNC_1(VAR_1[VAR_2].bp_bh);
  } while ((VAR_1[VAR_2].bp_index == 0) &&
    (++VAR_2 < FUNC_4(VAR_0) - 1));
 }


 if (VAR_2 == FUNC_4(VAR_0) - 1) {
  FUNC_5(FUNC_3(VAR_0),
      VAR_1[VAR_2].bp_index, VAR_3);
 }
}
