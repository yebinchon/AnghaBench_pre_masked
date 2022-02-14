
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_inode {int i_gl; int i_inode; int i_eattr; } ;
struct gfs2_holder {int dummy; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *,int) ;
 struct gfs2_rgrpd* FUNC_3 (struct gfs2_sbd*,int ,int) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_inode*,struct gfs2_rgrpd*,int ,int) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (int ,struct buffer_head*) ;
 int FUNC_12 (struct gfs2_sbd*,scalar_t__,int) ;
 int FUNC_13 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_14(struct gfs2_inode *VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(&VAR_6->i_inode);
 struct gfs2_rgrpd *VAR_8;
 struct buffer_head *VAR_9;
 struct gfs2_holder VAR_10;
 int VAR_11;

 VAR_11 = FUNC_10(VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_3(VAR_7, VAR_6->i_eattr, 1);
 if (!VAR_8) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 VAR_11 = FUNC_8(VAR_8->rd_gl, VAR_1, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_12(VAR_7, VAR_4 + VAR_2 + VAR_5 +
     VAR_3, 1);
 if (VAR_11)
  goto out_gunlock;

 FUNC_6(VAR_6, VAR_8, VAR_6->i_eattr, 1);

 VAR_6->i_eattr = 0;
 FUNC_2(&VAR_6->i_inode, -1);

 VAR_11 = FUNC_9(VAR_6, &VAR_9);
 if (!VAR_11) {
  FUNC_11(VAR_6->i_gl, VAR_9);
  FUNC_5(VAR_6, VAR_9->b_data);
  FUNC_1(VAR_9);
 }

 FUNC_13(VAR_7);

out_gunlock:
 FUNC_7(&VAR_10);
 return VAR_11;
}
