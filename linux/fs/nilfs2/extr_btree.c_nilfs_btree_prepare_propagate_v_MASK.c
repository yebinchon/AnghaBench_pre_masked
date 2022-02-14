
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_bh; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct inode*) ;
 int FUNC_4 (struct nilfs_bmap*) ;
 int FUNC_5 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct inode*) ;

__attribute__((used)) static int FUNC_6(struct nilfs_bmap *VAR_0,
        struct nilfs_btree_path *VAR_1,
        int VAR_2, int *VAR_3,
        struct inode *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_2;
 if (!FUNC_2(VAR_1[VAR_5].bp_bh)) {
  VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_5, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }
 while ((++VAR_5 < FUNC_4(VAR_0) - 1) &&
        !FUNC_1(VAR_1[VAR_5].bp_bh)) {

  FUNC_0(FUNC_2(VAR_1[VAR_5].bp_bh));
  VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_5, VAR_4);
  if (VAR_6 < 0)
   goto out;
 }


 *VAR_3 = VAR_5 - 1;
 return 0;


 out:
 while (--VAR_5 > VAR_2)
  FUNC_3(VAR_0, VAR_1, VAR_5, VAR_4);
 if (!FUNC_2(VAR_1[VAR_5].bp_bh))
  FUNC_3(VAR_0, VAR_1, VAR_5, VAR_4);
 return VAR_6;
}
