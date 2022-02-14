
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_bh; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct inode*) ;

__attribute__((used)) static void FUNC_2(struct nilfs_bmap *VAR_0,
        struct nilfs_btree_path *VAR_1,
        int VAR_2, int VAR_3,
        struct buffer_head *VAR_4,
        struct inode *VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_1[VAR_2].bp_bh))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);

 for (VAR_6 = VAR_2 + 1; VAR_6 <= VAR_3; VAR_6++)
  FUNC_1(VAR_0, VAR_1, VAR_6, VAR_5);
}
