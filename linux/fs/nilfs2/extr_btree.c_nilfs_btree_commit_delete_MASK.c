
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int (* bp_op ) (struct nilfs_bmap*,struct nilfs_btree_path*,int,int *,int *) ;int bp_oldreq; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nilfs_bmap*,int *,struct inode*) ;
 int FUNC_1 (struct nilfs_bmap*) ;
 int FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_bmap *VAR_1,
          struct nilfs_btree_path *VAR_2,
          int VAR_3, struct inode *VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_3; VAR_5++) {
  FUNC_0(VAR_1, &VAR_2[VAR_5].bp_oldreq, VAR_4);
  VAR_2[VAR_5].bp_op(VAR_1, VAR_2, VAR_5, ((void*)0), ((void*)0));
 }

 if (!FUNC_1(VAR_1))
  FUNC_2(VAR_1);
}
