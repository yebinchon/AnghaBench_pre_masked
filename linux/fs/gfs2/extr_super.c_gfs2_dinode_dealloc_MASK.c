
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {TYPE_1__* sd_jdesc; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_inode {int i_no_addr; int i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {int jd_blocks; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct gfs2_rgrpd* FUNC_1 (struct gfs2_sbd*,int ,int) ;
 int FUNC_2 (struct gfs2_inode*) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_rgrpd*,struct gfs2_inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_inode*,int ,int ) ;
 int FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;

__attribute__((used)) static int FUNC_13(struct gfs2_inode *VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(&VAR_7->i_inode);
 struct gfs2_rgrpd *VAR_9;
 struct gfs2_holder VAR_10;
 int VAR_11;

 if (FUNC_5(&VAR_7->i_inode) != 1) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_11 = FUNC_10(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_7, VAR_3, VAR_2);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_1(VAR_8, VAR_7->i_no_addr, 1);
 if (!VAR_9) {
  FUNC_2(VAR_7);
  VAR_11 = -VAR_0;
  goto out_qs;
 }

 VAR_11 = FUNC_7(VAR_9->rd_gl, VAR_1, 0, &VAR_10);
 if (VAR_11)
  goto out_qs;

 VAR_11 = FUNC_11(VAR_8, VAR_5 + VAR_6 + VAR_4,
     VAR_8->sd_jdesc->jd_blocks);
 if (VAR_11)
  goto out_rg_gunlock;

 FUNC_4(VAR_9, VAR_7);

 FUNC_3(VAR_7);

 FUNC_12(VAR_8);

out_rg_gunlock:
 FUNC_6(&VAR_10);
out_qs:
 FUNC_9(VAR_7);
 return VAR_11;
}
