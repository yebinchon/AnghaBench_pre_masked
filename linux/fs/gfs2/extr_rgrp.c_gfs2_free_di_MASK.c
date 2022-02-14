
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {TYPE_2__* rd_rgl; TYPE_1__* rd_bits; int rd_gl; int rd_free; int rd_dinodes; struct gfs2_sbd* rd_sbd; } ;
struct TYPE_7__ {int i_gid; int i_uid; } ;
struct gfs2_inode {int i_no_addr; TYPE_3__ i_inode; } ;
struct TYPE_8__ {int b_data; } ;
struct TYPE_6__ {int rl_unlinked; } ;
struct TYPE_5__ {TYPE_4__* bi_bh; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gfs2_rgrpd*) ;
 int FUNC_2 (struct gfs2_inode*,int ,int) ;
 int FUNC_3 (struct gfs2_inode*,int,int ,int ) ;
 int FUNC_4 (struct gfs2_rgrpd*,int ) ;
 int FUNC_5 (struct gfs2_sbd*,int ,int,int) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (struct gfs2_sbd*,struct gfs2_rgrpd*,int ,int,int ) ;
 int FUNC_8 (struct gfs2_inode*,struct gfs2_rgrpd*,int ,int,int ) ;

void FUNC_9(struct gfs2_rgrpd *VAR_1, struct gfs2_inode *VAR_2)
{
 struct gfs2_sbd *VAR_3 = VAR_1->rd_sbd;

 FUNC_7(VAR_3, VAR_1, VAR_2->i_no_addr, 1, VAR_0);
 if (!VAR_1->rd_dinodes)
  FUNC_1(VAR_1);
 VAR_1->rd_dinodes--;
 VAR_1->rd_free++;

 FUNC_6(VAR_1->rd_gl, VAR_1->rd_bits[0].bi_bh);
 FUNC_4(VAR_1, VAR_1->rd_bits[0].bi_bh->b_data);
 FUNC_0(&VAR_1->rd_rgl->rl_unlinked, -1);

 FUNC_5(VAR_3, 0, +1, -1);
 FUNC_8(VAR_2, VAR_1, VAR_2->i_no_addr, 1, VAR_0);
 FUNC_3(VAR_2, -1, VAR_2->i_inode.i_uid, VAR_2->i_inode.i_gid);
 FUNC_2(VAR_2, VAR_2->i_no_addr, 1);
}
