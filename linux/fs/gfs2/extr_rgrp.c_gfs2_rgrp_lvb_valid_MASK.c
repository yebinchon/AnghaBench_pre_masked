
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {scalar_t__ rd_addr; struct gfs2_sbd* rd_sbd; TYPE_2__* rd_bits; struct gfs2_rgrp_lvb* rd_rgl; } ;
struct gfs2_rgrp_lvb {scalar_t__ rl_flags; scalar_t__ rl_free; scalar_t__ rl_dinodes; scalar_t__ rl_igeneration; } ;
struct gfs2_rgrp {scalar_t__ rg_flags; scalar_t__ rg_free; scalar_t__ rg_dinodes; scalar_t__ rg_igeneration; } ;
struct TYPE_4__ {TYPE_1__* bi_bh; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 unsigned long long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gfs2_sbd*,char*,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_3(struct gfs2_rgrpd *VAR_0)
{
 struct gfs2_rgrp_lvb *VAR_1 = VAR_0->rd_rgl;
 struct gfs2_rgrp *VAR_2 = (struct gfs2_rgrp *)VAR_0->rd_bits[0].bi_bh->b_data;
 struct gfs2_sbd *VAR_3 = VAR_0->rd_sbd;
 int VAR_4 = 1;

 if (VAR_1->rl_flags != VAR_2->rg_flags) {
  FUNC_2(VAR_3, "GFS2: rgd: %llu lvb flag mismatch %u/%u",
   (unsigned long long)VAR_0->rd_addr,
         FUNC_0(VAR_1->rl_flags), FUNC_0(VAR_2->rg_flags));
  VAR_4 = 0;
 }
 if (VAR_1->rl_free != VAR_2->rg_free) {
  FUNC_2(VAR_3, "GFS2: rgd: %llu lvb free mismatch %u/%u",
   (unsigned long long)VAR_0->rd_addr,
   FUNC_0(VAR_1->rl_free), FUNC_0(VAR_2->rg_free));
  VAR_4 = 0;
 }
 if (VAR_1->rl_dinodes != VAR_2->rg_dinodes) {
  FUNC_2(VAR_3, "GFS2: rgd: %llu lvb dinode mismatch %u/%u",
   (unsigned long long)VAR_0->rd_addr,
   FUNC_0(VAR_1->rl_dinodes),
   FUNC_0(VAR_2->rg_dinodes));
  VAR_4 = 0;
 }
 if (VAR_1->rl_igeneration != VAR_2->rg_igeneration) {
  FUNC_2(VAR_3, "GFS2: rgd: %llu lvb igen mismatch %llu/%llu",
   (unsigned long long)VAR_0->rd_addr,
   (unsigned long long)FUNC_1(VAR_1->rl_igeneration),
   (unsigned long long)FUNC_1(VAR_2->rg_igeneration));
  VAR_4 = 0;
 }
 return VAR_4;
}
