
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {TYPE_1__* rd_bits; int rd_gl; int rd_flags; int rd_free; } ;
struct gfs2_inode {scalar_t__ i_depth; int i_inode; } ;
struct TYPE_4__ {int b_data; } ;
struct TYPE_3__ {TYPE_2__* bi_bh; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_inode*,int ,int ) ;
 int FUNC_2 (struct gfs2_rgrpd*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (struct gfs2_sbd*,struct gfs2_rgrpd*,int ,int ,int ) ;
 int FUNC_5 (struct gfs2_inode*,struct gfs2_rgrpd*,int ,int ,int ) ;

void FUNC_6(struct gfs2_inode *VAR_2, struct gfs2_rgrpd *VAR_3,
   u64 VAR_4, u32 VAR_5, int VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(&VAR_2->i_inode);

 FUNC_4(VAR_7, VAR_3, VAR_4, VAR_5, VAR_0);
 FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_0);
 VAR_3->rd_free += VAR_5;
 VAR_3->rd_flags &= ~VAR_1;
 FUNC_3(VAR_3->rd_gl, VAR_3->rd_bits[0].bi_bh);
 FUNC_2(VAR_3, VAR_3->rd_bits[0].bi_bh->b_data);


 if (VAR_6 || VAR_2->i_depth)
  FUNC_1(VAR_2, VAR_4, VAR_5);
}
