
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_sbd {struct inode* sd_statfs_inode; int * sd_rindex; } ;
struct gfs2_inode {int i_gh; int i_gl; int i_inode; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_2);
 struct gfs2_sbd *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_5(VAR_3->i_gl, VAR_1, 0, &VAR_3->i_gh);
 VAR_5 = FUNC_3(&VAR_3->i_gh);
 if (VAR_5)
  goto out_uninit;
 if (&VAR_3->i_inode == VAR_4->sd_rindex) {
  struct gfs2_inode *VAR_6 = FUNC_0(VAR_4->sd_statfs_inode);

  VAR_5 = FUNC_4(VAR_6->i_gl, VAR_1,
        VAR_0, &VAR_6->i_gh);
  if (VAR_5)
   goto out_unlock;
 }
 return 0;

out_unlock:
 FUNC_2(&VAR_3->i_gh);
out_uninit:
 FUNC_6(&VAR_3->i_gh);
 return VAR_5;
}
