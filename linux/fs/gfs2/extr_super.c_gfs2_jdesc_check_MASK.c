
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct gfs2_jdesc {int jd_blocks; int jd_inode; } ;
struct gfs2_inode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct gfs2_inode* FUNC_1 (int ) ;
 struct gfs2_sbd* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct gfs2_inode*) ;
 scalar_t__ FUNC_5 (struct gfs2_inode*,int ,int) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct gfs2_jdesc *VAR_1)
{
 struct gfs2_inode *VAR_2 = FUNC_1(VAR_1->jd_inode);
 struct gfs2_sbd *VAR_3 = FUNC_2(VAR_1->jd_inode);
 u64 VAR_4 = FUNC_6(VAR_1->jd_inode);

 if (FUNC_3(VAR_1->jd_inode, 8 << 20, FUNC_0(30)))
  return -VAR_0;

 VAR_1->jd_blocks = VAR_4 >> VAR_3->sd_sb.sb_bsize_shift;

 if (FUNC_5(VAR_2, 0, VAR_4)) {
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 return 0;
}
