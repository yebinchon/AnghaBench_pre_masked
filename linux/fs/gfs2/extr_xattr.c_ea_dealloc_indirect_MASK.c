
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_sbd {int sd_inptrs; } ;
struct gfs2_rgrpd {scalar_t__ rd_length; } ;
struct gfs2_rgrp_list {unsigned int rl_rgrps; TYPE_1__* rl_ghs; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_diskflags; int i_inode; int i_eattr; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __be64 ;
struct TYPE_3__ {int gh_gl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,int) ;
 struct gfs2_rgrpd* FUNC_4 (struct gfs2_sbd*,scalar_t__,int) ;
 int FUNC_5 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_6 (struct gfs2_inode*,struct gfs2_rgrpd*,scalar_t__,unsigned int) ;
 struct gfs2_rgrpd* FUNC_7 (int ) ;
 int FUNC_8 (unsigned int,TYPE_1__*) ;
 int FUNC_9 (unsigned int,TYPE_1__*) ;
 int FUNC_10 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_11 (int ,int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_12 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_13 (struct gfs2_sbd*) ;
 int FUNC_14 (struct gfs2_inode*,struct gfs2_rgrp_list*,scalar_t__) ;
 int FUNC_15 (struct gfs2_rgrp_list*) ;
 int FUNC_16 (struct gfs2_rgrp_list*) ;
 int FUNC_17 (int ,struct buffer_head*) ;
 int FUNC_18 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_19 (struct gfs2_sbd*) ;
 int FUNC_20 (struct gfs2_rgrp_list*,int ,int) ;

__attribute__((used)) static int FUNC_21(struct gfs2_inode *VAR_8)
{
 struct gfs2_sbd *VAR_9 = FUNC_0(&VAR_8->i_inode);
 struct gfs2_rgrp_list VAR_10;
 struct gfs2_rgrpd *VAR_11;
 struct buffer_head *VAR_12, *VAR_13;
 __be64 *VAR_14, *VAR_15;
 unsigned int VAR_16 = 0;
 u64 VAR_17 = 0;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;
 int VAR_21;

 VAR_21 = FUNC_13(VAR_9);
 if (VAR_21)
  return VAR_21;

 FUNC_20(&VAR_10, 0, sizeof(struct gfs2_rgrp_list));

 VAR_21 = FUNC_11(VAR_8->i_gl, VAR_8->i_eattr, VAR_0, 0, &VAR_12);
 if (VAR_21)
  return VAR_21;

 if (FUNC_12(VAR_9, VAR_12, VAR_3)) {
  VAR_21 = -VAR_1;
  goto out;
 }

 VAR_14 = (__be64 *)(VAR_12->b_data + sizeof(struct gfs2_meta_header));
 VAR_15 = VAR_14 + VAR_9->sd_inptrs;

 for (; VAR_14 < VAR_15; VAR_14++) {
  u64 VAR_22;

  if (!*VAR_14)
   break;
  VAR_22 = FUNC_1(*VAR_14);

  if (VAR_17 + VAR_18 == VAR_22)
   VAR_18++;
  else {
   if (VAR_17)
    FUNC_14(VAR_8, &VAR_10, VAR_17);
   VAR_17 = VAR_22;
   VAR_18 = 1;
  }
  VAR_19++;
 }
 if (VAR_17)
  FUNC_14(VAR_8, &VAR_10, VAR_17);
 else
  goto out;

 FUNC_15(&VAR_10);

 for (VAR_20 = 0; VAR_20 < VAR_10.rl_rgrps; VAR_20++) {
  VAR_11 = FUNC_7(VAR_10.rl_ghs[VAR_20].gh_gl);
  VAR_16 += VAR_11->rd_length;
 }

 VAR_21 = FUNC_9(VAR_10.rl_rgrps, VAR_10.rl_ghs);
 if (VAR_21)
  goto out_rlist_free;

 VAR_21 = FUNC_18(VAR_9, VAR_16 + VAR_4 + VAR_5 +
     VAR_7 + VAR_6, VAR_19);
 if (VAR_21)
  goto out_gunlock;

 FUNC_17(VAR_8->i_gl, VAR_12);

 VAR_14 = (__be64 *)(VAR_12->b_data + sizeof(struct gfs2_meta_header));
 VAR_17 = 0;
 VAR_11 = ((void*)0);
 VAR_18 = 0;

 for (; VAR_14 < VAR_15; VAR_14++) {
  u64 VAR_23;

  if (!*VAR_14)
   break;
  VAR_23 = FUNC_1(*VAR_14);

  if (VAR_17 + VAR_18 == VAR_23)
   VAR_18++;
  else {
   if (VAR_17)
    FUNC_6(VAR_8, VAR_11, VAR_17, VAR_18);
   VAR_17 = VAR_23;
   VAR_11 = FUNC_4(VAR_9, VAR_17, 1);
   VAR_18 = 1;
  }

  *VAR_14 = 0;
  FUNC_3(&VAR_8->i_inode, -1);
 }
 if (VAR_17)
  FUNC_6(VAR_8, VAR_11, VAR_17, VAR_18);

 VAR_8->i_diskflags &= ~VAR_2;

 VAR_21 = FUNC_10(VAR_8, &VAR_13);
 if (!VAR_21) {
  FUNC_17(VAR_8->i_gl, VAR_13);
  FUNC_5(VAR_8, VAR_13->b_data);
  FUNC_2(VAR_13);
 }

 FUNC_19(VAR_9);

out_gunlock:
 FUNC_8(VAR_10.rl_rgrps, VAR_10.rl_ghs);
out_rlist_free:
 FUNC_16(&VAR_10);
out:
 FUNC_2(VAR_12);
 return VAR_21;
}
