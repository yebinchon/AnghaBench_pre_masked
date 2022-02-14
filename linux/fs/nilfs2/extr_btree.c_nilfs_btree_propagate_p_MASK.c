
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_bh; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nilfs_bmap*) ;

__attribute__((used)) static int FUNC_3(struct nilfs_bmap *VAR_0,
       struct nilfs_btree_path *VAR_1,
       int VAR_2,
       struct buffer_head *VAR_3)
{
 while ((++VAR_2 < FUNC_2(VAR_0) - 1) &&
        !FUNC_0(VAR_1[VAR_2].bp_bh))
  FUNC_1(VAR_1[VAR_2].bp_bh);

 return 0;
}
