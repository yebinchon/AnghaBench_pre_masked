
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_sbd {struct inode* sd_statfs_inode; int * sd_rindex; } ;
struct gfs2_inode {int i_gh; int i_inode; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0)
{
 struct gfs2_inode *VAR_1 = FUNC_0(VAR_0);
 struct gfs2_sbd *VAR_2 = FUNC_1(VAR_0);

 if (&VAR_1->i_inode == VAR_2->sd_rindex) {
  struct gfs2_inode *VAR_3 = FUNC_0(VAR_2->sd_statfs_inode);

  FUNC_2(&VAR_3->i_gh);
 }
 FUNC_2(&VAR_1->i_gh);
}
